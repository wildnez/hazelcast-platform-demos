/*
 * Copyright (c) 2008-2021, Hazelcast, Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.hazelcast.platform.demos.retail.clickstream;

import com.hazelcast.core.Hazelcast;
import com.hazelcast.core.HazelcastInstance;
import com.hazelcast.jet.config.JobConfig;
import com.hazelcast.jet.pipeline.Pipeline;
import com.hazelcast.platform.demos.retail.clickstream.job.DecisionTreePrediction;

import lombok.extern.slf4j.Slf4j;

/**
 * <p>
 * Entry point. Hazelcast instance is provided by job submission CLI.
 * </p>
 * <p>TODO: Coding is same for {@code DecisionTree} and {@code Gaussian}
 * submission.
 * </p>
 */
@Slf4j
public class Application {

    public static void main(String[] args) throws Exception {
        HazelcastInstance hazelcastInstance = Hazelcast.bootstrappedInstance();

        String graphiteHost = hazelcastInstance
                .getMap(MyConstants.IMAP_NAME_CONFIG)
                .get(MyConstants.CONFIG_MAP_KEY_GRAPHITE).toString();

        String jobName = DecisionTreePrediction.class.getSimpleName() + "@" + MyUtils.getBuildTimestamp();
        log.info(jobName);

        Pipeline pipelineDecisionTreePrediction = DecisionTreePrediction.buildPipeline(graphiteHost);

        JobConfig jobConfigDecisionTreePrediction = new JobConfig();
        jobConfigDecisionTreePrediction.addClass(DecisionTreePrediction.class);
        jobConfigDecisionTreePrediction.setName(jobName);

        // Fails if job exists with same job name, unlike "newJobIfAbsent"
        hazelcastInstance.getJet().newJob(pipelineDecisionTreePrediction, jobConfigDecisionTreePrediction);

        System.exit(0);
    }

}
