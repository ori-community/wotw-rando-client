#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityTls_unitytls_tlsctx_trace_callback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x012DDED0, void, Invoke, (app::UnityTls_unitytls_tlsctx_trace_callback * this_ptr, app::Void * user_data, app::UnityTls_unitytls_tlsctx * ctx, uint8_t * trace_message, void * trace_message_len))
    IL2CPP_REGISTER_METHOD(0x0248CB70, app::IAsyncResult *, BeginInvoke, (app::UnityTls_unitytls_tlsctx_trace_callback * this_ptr, app::Void * user_data, app::UnityTls_unitytls_tlsctx * ctx, uint8_t * trace_message, void * trace_message_len, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityTls_unitytls_tlsctx_trace_callback * this_ptr, app::IAsyncResult * result))
}
