#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityTls_unitytls_tlsctx_write_callback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02188EB0, void*, Invoke, (app::UnityTls_unitytls_tlsctx_write_callback * this_ptr, app::Void* user_data, uint8_t* data, void* buffer_len, app::UnityTls_unitytls_errorstate* error_state))
    IL2CPP_REGISTER_METHOD(0x0248CC60, app::IAsyncResult*, BeginInvoke, (app::UnityTls_unitytls_tlsctx_write_callback * this_ptr, app::Void* user_data, uint8_t* data, void* buffer_len, app::UnityTls_unitytls_errorstate* error_state, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52480, void*, EndInvoke, (app::UnityTls_unitytls_tlsctx_write_callback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback
