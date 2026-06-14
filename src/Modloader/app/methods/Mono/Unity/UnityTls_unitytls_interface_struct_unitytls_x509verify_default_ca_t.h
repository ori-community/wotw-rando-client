#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnityTls_unitytls_errorstate.h>
#include <Modloader/app/structs/UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509list_ref.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509verify_callback.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509verify_result__Enum.h>
#include <Modloader/app/structs/Void.h>

namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x0218A930,
        app::UnityTls_unitytls_x509verify_result__Enum,
        Invoke,
        app::UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t* this_ptr,
        app::UnityTls_unitytls_x509list_ref chain,
        uint8_t* cn,
        void* cn_len,
        app::UnityTls_unitytls_x509verify_callback* cb,
        app::Void* user_data,
        app::UnityTls_unitytls_errorstate* error_state
    )
    IL2CPP_REGISTER_METHOD(
        0x0218AE50,
        app::IAsyncResult*,
        BeginInvoke,
        app::UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t* this_ptr,
        app::UnityTls_unitytls_x509list_ref chain,
        uint8_t* cn,
        void* cn_len,
        app::UnityTls_unitytls_x509verify_callback* cb,
        app::Void* user_data,
        app::UnityTls_unitytls_errorstate* error_state,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F550D0,
        app::UnityTls_unitytls_x509verify_result__Enum,
        EndInvoke,
        app::UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t
