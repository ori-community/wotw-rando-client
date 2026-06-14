#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnityTls_unitytls_errorstate.h>
#include <Modloader/app/structs/UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509list_ref.h>

namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x021893D0,
        void,
        Invoke,
        app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t* this_ptr,
        app::UnityTls_unitytls_tlsctx* ctx,
        app::UnityTls_unitytls_x509list_ref client_auth_c_a_list,
        app::UnityTls_unitytls_errorstate* error_state
    )
    IL2CPP_REGISTER_METHOD(
        0x02189780,
        app::IAsyncResult*,
        BeginInvoke,
        app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t* this_ptr,
        app::UnityTls_unitytls_tlsctx* ctx,
        app::UnityTls_unitytls_x509list_ref client_auth_c_a_list,
        app::UnityTls_unitytls_errorstate* error_state,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B40,
        void,
        EndInvoke,
        app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t
