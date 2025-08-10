#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/MobileAuthenticatedStream.h>
#include <Modloader/app/structs/SslProtocols__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnityTlsContext.h>
#include <Modloader/app/structs/UnityTls_unitytls_errorstate.h>
#include <Modloader/app/structs/UnityTls_unitytls_key.h>
#include <Modloader/app/structs/UnityTls_unitytls_key_ref.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509list.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509list_ref.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509name.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509verify_result__Enum.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Boolean_.h>
#include <Modloader/app/structs/Void.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509Certificate_1.h>

namespace app::classes::Mono::Unity::UnityTlsContext {
    IL2CPP_REGISTER_METHOD(
        0x0248D710,
        void,
        ctor,
        app::UnityTlsContext* this_ptr,
        app::MobileAuthenticatedStream* parent,
        bool server_mode,
        app::String* target_host,
        app::SslProtocols__Enum enabled_protocols,
        app::X509Certificate_1* server_certificate,
        app::X509CertificateCollection_1* client_certificates,
        bool ask_for_client_cert
    )
    IL2CPP_REGISTER_METHOD(
        0x0248E570,
        void,
        ExtractNativeKeyAndChainFromManagedCertificate,
        app::X509Certificate_1* cert,
        app::UnityTls_unitytls_errorstate* error_state,
        app::UnityTls_unitytls_x509list** native_cert_chain,
        app::UnityTls_unitytls_key** native_key
    )
    IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_IsAuthenticated, app::UnityTlsContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::X509Certificate_1*, get_LocalClientCertificate, app::UnityTlsContext* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0248E900,
        app::ValueTuple_2_Int32_Boolean_,
        Read,
        app::UnityTlsContext* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x0248EB30,
        app::ValueTuple_2_Int32_Boolean_,
        Write,
        app::UnityTlsContext* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x0248ED50, void, Shutdown, app::UnityTlsContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0248EF70, void, Dispose, app::UnityTlsContext* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x0248F020, void, StartHandshake, app::UnityTlsContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0248F2A0, bool, ProcessHandshake, app::UnityTlsContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0248F6B0, void, FinishHandshake, app::UnityTlsContext* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0248F930,
        void*,
        WriteCallback_1,
        app::Void* user_data,
        uint8_t* data,
        void* buffer_len,
        app::UnityTls_unitytls_errorstate* error_state
    )
    IL2CPP_REGISTER_METHOD(
        0x0248FA90,
        void*,
        WriteCallback_2,
        app::UnityTlsContext* this_ptr,
        uint8_t* data,
        void* buffer_len,
        app::UnityTls_unitytls_errorstate* error_state
    )
    IL2CPP_REGISTER_METHOD(
        0x0248FCB0,
        void*,
        ReadCallback_1,
        app::Void* user_data,
        uint8_t* buffer,
        void* buffer_len,
        app::UnityTls_unitytls_errorstate* error_state
    )
    IL2CPP_REGISTER_METHOD(
        0x0248FE10,
        void*,
        ReadCallback_2,
        app::UnityTlsContext* this_ptr,
        uint8_t* buffer,
        void* buffer_len,
        app::UnityTls_unitytls_errorstate* error_state
    )
    IL2CPP_REGISTER_METHOD(
        0x02490100,
        app::UnityTls_unitytls_x509verify_result__Enum,
        VerifyCallback_1,
        app::Void* user_data,
        app::UnityTls_unitytls_x509list_ref chain,
        app::UnityTls_unitytls_errorstate* error_state
    )
    IL2CPP_REGISTER_METHOD(
        0x02490240,
        app::UnityTls_unitytls_x509verify_result__Enum,
        VerifyCallback_2,
        app::UnityTlsContext* this_ptr,
        app::UnityTls_unitytls_x509list_ref chain,
        app::UnityTls_unitytls_errorstate* error_state
    )
    IL2CPP_REGISTER_METHOD(
        0x02490510,
        void,
        CertificateCallback_1,
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
        0x02490670,
        void,
        CertificateCallback_2,
        app::UnityTlsContext* this_ptr,
        app::UnityTls_unitytls_tlsctx* ctx,
        uint8_t* cn,
        void* cn_len,
        app::UnityTls_unitytls_x509name* ca_list,
        void* ca_list_len,
        app::UnityTls_unitytls_x509list_ref* chain,
        app::UnityTls_unitytls_key_ref* key,
        app::UnityTls_unitytls_errorstate* error_state
    )
} // namespace app::classes::Mono::Unity::UnityTlsContext
