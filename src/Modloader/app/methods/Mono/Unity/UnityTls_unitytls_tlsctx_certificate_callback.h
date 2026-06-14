#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnityTls_unitytls_errorstate.h>
#include <Modloader/app/structs/UnityTls_unitytls_key_ref.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx_certificate_callback.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509list_ref.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509name.h>
#include <Modloader/app/structs/Void.h>

namespace app::classes::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::UnityTls_unitytls_tlsctx_certificate_callback* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x0248C230,
        void,
        Invoke,
        app::UnityTls_unitytls_tlsctx_certificate_callback* this_ptr,
        app::Void* user_data,
        app::UnityTls_unitytls_tlsctx* ctx,
        uint8_t* cn,
        void* cn_len,
        app::UnityTls_unitytls_x509name* ca_list,
        void* ca_list_len,
        app::UnityTls_unitytls_x509list_ref* chain,
        app::UnityTls_unitytls_key_ref* key,
        app::UnityTls_unitytls_errorstate* error_state
    )
    IL2CPP_REGISTER_METHOD(
        0x0248C930,
        app::IAsyncResult*,
        BeginInvoke,
        app::UnityTls_unitytls_tlsctx_certificate_callback* this_ptr,
        app::Void* user_data,
        app::UnityTls_unitytls_tlsctx* ctx,
        uint8_t* cn,
        void* cn_len,
        app::UnityTls_unitytls_x509name* ca_list,
        void* ca_list_len,
        app::UnityTls_unitytls_x509list_ref* chain,
        app::UnityTls_unitytls_key_ref* key,
        app::UnityTls_unitytls_errorstate* error_state,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::UnityTls_unitytls_tlsctx_certificate_callback* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback
