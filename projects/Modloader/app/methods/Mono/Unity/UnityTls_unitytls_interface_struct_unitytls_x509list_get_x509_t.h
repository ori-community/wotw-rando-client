#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnityTls_unitytls_errorstate.h>
#include <Modloader/app/structs/UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509_ref.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509list_ref.h>

namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x0218A480,
        app::UnityTls_unitytls_x509_ref,
        Invoke,
        app::UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t* this_ptr,
        app::UnityTls_unitytls_x509list_ref list,
        void* index,
        app::UnityTls_unitytls_errorstate* error_state
    )
    IL2CPP_REGISTER_METHOD(
        0x0218A850,
        app::IAsyncResult*,
        BeginInvoke,
        app::UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t* this_ptr,
        app::UnityTls_unitytls_x509list_ref list,
        void* index,
        app::UnityTls_unitytls_errorstate* error_state,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F52480,
        app::UnityTls_unitytls_x509_ref,
        EndInvoke,
        app::UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t
