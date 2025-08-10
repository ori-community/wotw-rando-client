#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/CertificateValidationCallback.h>
#include <Modloader/app/structs/CertificateValidationCallback2.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PrivateKeySelectionCallback.h>
#include <Modloader/app/structs/SecurityProtocolType__Enum_1.h>
#include <Modloader/app/structs/SslServerStream.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValidationResult.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509CertificateCollection_2.h>
#include <Modloader/app/structs/X509Certificate_1.h>

namespace app::classes::Mono::Security::Protocol::Tls::SslServerStream {
    IL2CPP_REGISTER_METHOD(0x01F82390, void, add_ClientCertValidation, app::SslServerStream* this_ptr, app::CertificateValidationCallback* value)
    IL2CPP_REGISTER_METHOD(0x01F82480, void, remove_ClientCertValidation, app::SslServerStream* this_ptr, app::CertificateValidationCallback* value)
    IL2CPP_REGISTER_METHOD(0x01F82570, void, add_PrivateKeySelection, app::SslServerStream* this_ptr, app::PrivateKeySelectionCallback* value)
    IL2CPP_REGISTER_METHOD(0x01F82660, void, remove_PrivateKeySelection, app::SslServerStream* this_ptr, app::PrivateKeySelectionCallback* value)
    IL2CPP_REGISTER_METHOD(0x01F82750, app::X509Certificate_1*, get_ClientCertificate, app::SslServerStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::CertificateValidationCallback*, get_ClientCertValidationDelegate, app::SslServerStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_ClientCertValidationDelegate, app::SslServerStream* this_ptr, app::CertificateValidationCallback* value)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::PrivateKeySelectionCallback*, get_PrivateKeyCertSelectionDelegate, app::SslServerStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_PrivateKeyCertSelectionDelegate, app::SslServerStream* this_ptr, app::PrivateKeySelectionCallback* value)
    IL2CPP_REGISTER_METHOD(0x01F827A0, void, add_ClientCertValidation2, app::SslServerStream* this_ptr, app::CertificateValidationCallback2* value)
    IL2CPP_REGISTER_METHOD(0x01F82890, void, remove_ClientCertValidation2, app::SslServerStream* this_ptr, app::CertificateValidationCallback2* value)
    IL2CPP_REGISTER_METHOD(0x01F82980, void, ctor_1, app::SslServerStream* this_ptr, app::Stream* stream, app::X509Certificate_1* server_certificate)
    IL2CPP_REGISTER_METHOD(
        0x01F829B0,
        void,
        ctor_2,
        app::SslServerStream* this_ptr,
        app::Stream* stream,
        app::X509Certificate_1* server_certificate,
        bool client_certificate_required,
        bool owns_stream
    )
    IL2CPP_REGISTER_METHOD(
        0x01F829E0,
        void,
        ctor_3,
        app::SslServerStream* this_ptr,
        app::Stream* stream,
        app::X509Certificate_1* server_certificate,
        bool client_certificate_required,
        bool request_client_certificate,
        bool owns_stream
    )
    IL2CPP_REGISTER_METHOD(
        0x01F82A20,
        void,
        ctor_4,
        app::SslServerStream* this_ptr,
        app::Stream* stream,
        app::X509Certificate_1* server_certificate,
        bool client_certificate_required,
        bool owns_stream,
        app::SecurityProtocolType__Enum_1 security_protocol_type
    )
    IL2CPP_REGISTER_METHOD(
        0x01F82A50,
        void,
        ctor_5,
        app::SslServerStream* this_ptr,
        app::Stream* stream,
        app::X509Certificate_1* server_certificate,
        bool client_certificate_required,
        bool request_client_certificate,
        bool owns_stream,
        app::SecurityProtocolType__Enum_1 security_protocol_type
    )
    IL2CPP_REGISTER_METHOD(0x01F82DB0, void, Finalize, app::SslServerStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F82E50, void, Dispose, app::SslServerStream* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(
        0x01F82E90,
        app::IAsyncResult*,
        BeginNegotiateHandshake,
        app::SslServerStream* this_ptr,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01F82F70, void, EndNegotiateHandshake, app::SslServerStream* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(
        0x01F834B0,
        app::X509Certificate_1*,
        OnLocalCertificateSelection,
        app::SslServerStream* this_ptr,
        app::X509CertificateCollection_1* client_certificates,
        app::X509Certificate_1* server_certificate,
        app::String* target_host,
        app::X509CertificateCollection_1* server_requested_certificates
    )
    IL2CPP_REGISTER_METHOD(
        0x01F81140,
        bool,
        OnRemoteCertificateValidation,
        app::SslServerStream* this_ptr,
        app::X509Certificate_1* certificate,
        app::Int32__Array* errors
    )
    IL2CPP_REGISTER_METHOD(0x0107BE90, bool, get_HaveRemoteValidation2Callback, app::SslServerStream* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F83500,
        app::ValidationResult*,
        OnRemoteCertificateValidation2,
        app::SslServerStream* this_ptr,
        app::X509CertificateCollection_2* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x01F81170,
        bool,
        RaiseClientCertificateValidation,
        app::SslServerStream* this_ptr,
        app::X509Certificate_1* certificate,
        app::Int32__Array* certificate_errors
    )
    IL2CPP_REGISTER_METHOD(
        0x01F83520,
        app::AsymmetricAlgorithm*,
        OnLocalPrivateKeySelection,
        app::SslServerStream* this_ptr,
        app::X509Certificate_1* certificate,
        app::String* target_host
    )
    IL2CPP_REGISTER_METHOD(
        0x01F811F0,
        app::AsymmetricAlgorithm*,
        RaisePrivateKeySelection,
        app::SslServerStream* this_ptr,
        app::X509Certificate_1* certificate,
        app::String* target_host
    )
} // namespace app::classes::Mono::Security::Protocol::Tls::SslServerStream
