// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: JetToCpp.proto

#include "../include/JetToCpp.pb.h"
#include "../include/JetToCpp.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace com_hazelcast_platform_demos_banking_cva {

static const char* JetToCpp_method_names[] = {
  "/com_hazelcast_platform_demos_banking_cva.JetToCpp/streamingCall",
  "/com_hazelcast_platform_demos_banking_cva.JetToCpp/myUnaryCall",
};

std::unique_ptr< JetToCpp::Stub> JetToCpp::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< JetToCpp::Stub> stub(new JetToCpp::Stub(channel));
  return stub;
}

JetToCpp::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_streamingCall_(JetToCpp_method_names[0], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_myUnaryCall_(JetToCpp_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReaderWriter< ::com_hazelcast_platform_demos_banking_cva::InputMessage, ::com_hazelcast_platform_demos_banking_cva::OutputMessage>* JetToCpp::Stub::streamingCallRaw(::grpc::ClientContext* context) {
  return ::grpc_impl::internal::ClientReaderWriterFactory< ::com_hazelcast_platform_demos_banking_cva::InputMessage, ::com_hazelcast_platform_demos_banking_cva::OutputMessage>::Create(channel_.get(), rpcmethod_streamingCall_, context);
}

void JetToCpp::Stub::experimental_async::streamingCall(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::com_hazelcast_platform_demos_banking_cva::InputMessage,::com_hazelcast_platform_demos_banking_cva::OutputMessage>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderWriterFactory< ::com_hazelcast_platform_demos_banking_cva::InputMessage,::com_hazelcast_platform_demos_banking_cva::OutputMessage>::Create(stub_->channel_.get(), stub_->rpcmethod_streamingCall_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::com_hazelcast_platform_demos_banking_cva::InputMessage, ::com_hazelcast_platform_demos_banking_cva::OutputMessage>* JetToCpp::Stub::AsyncstreamingCallRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::com_hazelcast_platform_demos_banking_cva::InputMessage, ::com_hazelcast_platform_demos_banking_cva::OutputMessage>::Create(channel_.get(), cq, rpcmethod_streamingCall_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::com_hazelcast_platform_demos_banking_cva::InputMessage, ::com_hazelcast_platform_demos_banking_cva::OutputMessage>* JetToCpp::Stub::PrepareAsyncstreamingCallRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::com_hazelcast_platform_demos_banking_cva::InputMessage, ::com_hazelcast_platform_demos_banking_cva::OutputMessage>::Create(channel_.get(), cq, rpcmethod_streamingCall_, context, false, nullptr);
}

::grpc::Status JetToCpp::Stub::myUnaryCall(::grpc::ClientContext* context, const ::com_hazelcast_platform_demos_banking_cva::InputMessage& request, ::com_hazelcast_platform_demos_banking_cva::OutputMessage* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_myUnaryCall_, context, request, response);
}

void JetToCpp::Stub::experimental_async::myUnaryCall(::grpc::ClientContext* context, const ::com_hazelcast_platform_demos_banking_cva::InputMessage* request, ::com_hazelcast_platform_demos_banking_cva::OutputMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_myUnaryCall_, context, request, response, std::move(f));
}

void JetToCpp::Stub::experimental_async::myUnaryCall(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::com_hazelcast_platform_demos_banking_cva::OutputMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_myUnaryCall_, context, request, response, std::move(f));
}

void JetToCpp::Stub::experimental_async::myUnaryCall(::grpc::ClientContext* context, const ::com_hazelcast_platform_demos_banking_cva::InputMessage* request, ::com_hazelcast_platform_demos_banking_cva::OutputMessage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_myUnaryCall_, context, request, response, reactor);
}

void JetToCpp::Stub::experimental_async::myUnaryCall(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::com_hazelcast_platform_demos_banking_cva::OutputMessage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_myUnaryCall_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::com_hazelcast_platform_demos_banking_cva::OutputMessage>* JetToCpp::Stub::AsyncmyUnaryCallRaw(::grpc::ClientContext* context, const ::com_hazelcast_platform_demos_banking_cva::InputMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::com_hazelcast_platform_demos_banking_cva::OutputMessage>::Create(channel_.get(), cq, rpcmethod_myUnaryCall_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::com_hazelcast_platform_demos_banking_cva::OutputMessage>* JetToCpp::Stub::PrepareAsyncmyUnaryCallRaw(::grpc::ClientContext* context, const ::com_hazelcast_platform_demos_banking_cva::InputMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::com_hazelcast_platform_demos_banking_cva::OutputMessage>::Create(channel_.get(), cq, rpcmethod_myUnaryCall_, context, request, false);
}

JetToCpp::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      JetToCpp_method_names[0],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< JetToCpp::Service, ::com_hazelcast_platform_demos_banking_cva::InputMessage, ::com_hazelcast_platform_demos_banking_cva::OutputMessage>(
          [](JetToCpp::Service* service,
             ::grpc_impl::ServerContext* ctx,
             ::grpc_impl::ServerReaderWriter<::com_hazelcast_platform_demos_banking_cva::OutputMessage,
             ::com_hazelcast_platform_demos_banking_cva::InputMessage>* stream) {
               return service->streamingCall(ctx, stream);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      JetToCpp_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< JetToCpp::Service, ::com_hazelcast_platform_demos_banking_cva::InputMessage, ::com_hazelcast_platform_demos_banking_cva::OutputMessage>(
          [](JetToCpp::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::com_hazelcast_platform_demos_banking_cva::InputMessage* req,
             ::com_hazelcast_platform_demos_banking_cva::OutputMessage* resp) {
               return service->myUnaryCall(ctx, req, resp);
             }, this)));
}

JetToCpp::Service::~Service() {
}

::grpc::Status JetToCpp::Service::streamingCall(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::com_hazelcast_platform_demos_banking_cva::OutputMessage, ::com_hazelcast_platform_demos_banking_cva::InputMessage>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status JetToCpp::Service::myUnaryCall(::grpc::ServerContext* context, const ::com_hazelcast_platform_demos_banking_cva::InputMessage* request, ::com_hazelcast_platform_demos_banking_cva::OutputMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace com_hazelcast_platform_demos_banking_cva

