#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnityTls_unitytls_errorstate.h>
#include <Modloader/app/structs/UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t.h>
#include <Modloader/app/structs/UnityTls_unitytls_key.h>

namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02187AF0,
        app::UnityTls_unitytls_key*,
        Invoke,
        app::UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t* this_ptr,
        uint8_t* buffer,
        void* buffer_len,
        uint8_t* password,
        void* password_len,
        app::UnityTls_unitytls_errorstate* error_state
    )
    IL2CPP_REGISTER_METHOD(
        0x02187F90,
        app::IAsyncResult*,
        BeginInvoke,
        app::UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t* this_ptr,
        uint8_t* buffer,
        void* buffer_len,
        uint8_t* password,
        void* password_len,
        app::UnityTls_unitytls_errorstate* error_state,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B40,
        app::UnityTls_unitytls_key*,
        EndInvoke,
        app::UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t
