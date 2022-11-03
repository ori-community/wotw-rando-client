#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_create_t {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityTls_unitytls_interface_struct_unitytls_x509list_create_t * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0218A130, app::UnityTls_unitytls_x509list*, Invoke, (app::UnityTls_unitytls_interface_struct_unitytls_x509list_create_t * this_ptr, app::UnityTls_unitytls_errorstate* error_state))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_x509list_create_t * this_ptr, app::UnityTls_unitytls_errorstate* error_state, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::UnityTls_unitytls_x509list*, EndInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_x509list_create_t * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_create_t
