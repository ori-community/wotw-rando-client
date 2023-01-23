#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx_x509verify_callback.h>
#include <Modloader/app/structs/Void.h>
#include <Modloader/app/structs/UnityTls_unitytls_errorstate.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x012DDED0, void, Invoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t * this_ptr, app::UnityTls_unitytls_tlsctx* ctx, app::UnityTls_unitytls_tlsctx_x509verify_callback* cb, app::Void* user_data, app::UnityTls_unitytls_errorstate* error_state))
    IL2CPP_REGISTER_METHOD(0x01BD1540, app::IAsyncResult*, BeginInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t * this_ptr, app::UnityTls_unitytls_tlsctx* ctx, app::UnityTls_unitytls_tlsctx_x509verify_callback* cb, app::Void* user_data, app::UnityTls_unitytls_errorstate* error_state, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t
