#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnityTls_unitytls_interface_struct_unitytls_x509list_free_t.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509list.h>

namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_free_t {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityTls_unitytls_interface_struct_unitytls_x509list_free_t * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::UnityTls_unitytls_interface_struct_unitytls_x509list_free_t * this_ptr, app::UnityTls_unitytls_x509list* list))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_x509list_free_t * this_ptr, app::UnityTls_unitytls_x509list* list, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_x509list_free_t * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_free_t
