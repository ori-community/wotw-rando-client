#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnityTls_unitytls_tlsctx_read_callback.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnityTls_unitytls_errorstate.h>
#include <Modloader/app/structs/Void.h>

namespace app::classes::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityTls_unitytls_tlsctx_read_callback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02188EB0, void*, Invoke, (app::UnityTls_unitytls_tlsctx_read_callback * this_ptr, app::Void* user_data, uint8_t* buffer, void* buffer_len, app::UnityTls_unitytls_errorstate* error_state))
    IL2CPP_REGISTER_METHOD(0x0248CA80, app::IAsyncResult*, BeginInvoke, (app::UnityTls_unitytls_tlsctx_read_callback * this_ptr, app::Void* user_data, uint8_t* buffer, void* buffer_len, app::UnityTls_unitytls_errorstate* error_state, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52480, void*, EndInvoke, (app::UnityTls_unitytls_tlsctx_read_callback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback
