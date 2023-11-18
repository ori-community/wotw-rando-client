#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SslClientStream.h>
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/CertificateSelectionCallback.h>
#include <Modloader/app/structs/CertificateValidationCallback.h>
#include <Modloader/app/structs/CertificateValidationCallback2.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PrivateKeySelectionCallback.h>
#include <Modloader/app/structs/SecurityProtocolType__Enum_1.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValidationResult.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509CertificateCollection_2.h>
#include <Modloader/app/structs/X509Certificate_1.h>

namespace app::classes::Mono::Security::Protocol::Tls::SslClientStream {
    IL2CPP_REGISTER_METHOD(0x01F7E4B0, void, add_ServerCertValidation, (app::SslClientStream * this_ptr, app::CertificateValidationCallback* value))
    IL2CPP_REGISTER_METHOD(0x01F7E5A0, void, remove_ServerCertValidation, (app::SslClientStream * this_ptr, app::CertificateValidationCallback* value))
    IL2CPP_REGISTER_METHOD(0x01F7E690, void, add_ClientCertSelection, (app::SslClientStream * this_ptr, app::CertificateSelectionCallback* value))
    IL2CPP_REGISTER_METHOD(0x01F7E780, void, remove_ClientCertSelection, (app::SslClientStream * this_ptr, app::CertificateSelectionCallback* value))
    IL2CPP_REGISTER_METHOD(0x01F7E870, void, add_PrivateKeySelection, (app::SslClientStream * this_ptr, app::PrivateKeySelectionCallback* value))
    IL2CPP_REGISTER_METHOD(0x01F7E960, void, remove_PrivateKeySelection, (app::SslClientStream * this_ptr, app::PrivateKeySelectionCallback* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Stream*, get_InputBuffer, (app::SslClientStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F7EA50, app::X509CertificateCollection_1*, get_ClientCertificates, (app::SslClientStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F7EA80, app::X509Certificate_1*, get_SelectedClientCertificate, (app::SslClientStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::CertificateValidationCallback*, get_ServerCertValidationDelegate, (app::SslClientStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_ServerCertValidationDelegate, (app::SslClientStream * this_ptr, app::CertificateValidationCallback* value))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::CertificateSelectionCallback*, get_ClientCertSelectionDelegate, (app::SslClientStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_ClientCertSelectionDelegate, (app::SslClientStream * this_ptr, app::CertificateSelectionCallback* value))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::PrivateKeySelectionCallback*, get_PrivateKeyCertSelectionDelegate, (app::SslClientStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_PrivateKeyCertSelectionDelegate, (app::SslClientStream * this_ptr, app::PrivateKeySelectionCallback* value))
    IL2CPP_REGISTER_METHOD(0x01F7EAB0, void, add_ServerCertValidation2, (app::SslClientStream * this_ptr, app::CertificateValidationCallback2* value))
    IL2CPP_REGISTER_METHOD(0x01F7EBA0, void, remove_ServerCertValidation2, (app::SslClientStream * this_ptr, app::CertificateValidationCallback2* value))
    IL2CPP_REGISTER_METHOD(0x01F7EC90, void, ctor_1, (app::SslClientStream * this_ptr, app::Stream* stream, app::String* target_host, bool owns_stream))
    IL2CPP_REGISTER_METHOD(0x01F7ECC0, void, ctor_2, (app::SslClientStream * this_ptr, app::Stream* stream, app::String* target_host, app::X509Certificate_1* client_certificate))
    IL2CPP_REGISTER_METHOD(0x01F7EF70, void, ctor_3, (app::SslClientStream * this_ptr, app::Stream* stream, app::String* target_host, app::X509CertificateCollection_1* client_certificates))
    IL2CPP_REGISTER_METHOD(0x01F7EFA0, void, ctor_4, (app::SslClientStream * this_ptr, app::Stream* stream, app::String* target_host, bool owns_stream, app::SecurityProtocolType__Enum_1 security_protocol_type))
    IL2CPP_REGISTER_METHOD(0x01F7F130, void, ctor_5, (app::SslClientStream * this_ptr, app::Stream* stream, app::String* target_host, bool owns_stream, app::SecurityProtocolType__Enum_1 security_protocol_type, app::X509CertificateCollection_1* client_certificates))
    IL2CPP_REGISTER_METHOD(0x01F7F4C0, void, Finalize, (app::SslClientStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F7F560, void, Dispose, (app::SslClientStream * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01F7F5B0, void, SafeEndReceiveRecord, (app::SslClientStream * this_ptr, app::IAsyncResult* ar, bool ignore_empty))
    IL2CPP_REGISTER_METHOD(0x01F7F6A0, app::IAsyncResult*, BeginNegotiateHandshake, (app::SslClientStream * this_ptr, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01F7FA90, void, EndNegotiateHandshake, (app::SslClientStream * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x01F7FBF0, void, NegotiateAsyncWorker, (app::SslClientStream * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x01F810F0, app::X509Certificate_1*, OnLocalCertificateSelection, (app::SslClientStream * this_ptr, app::X509CertificateCollection_1* client_certificates, app::X509Certificate_1* server_certificate, app::String* target_host, app::X509CertificateCollection_1* server_requested_certificates))
    IL2CPP_REGISTER_METHOD(0x01F81110, bool, get_HaveRemoteValidation2Callback, (app::SslClientStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F81120, app::ValidationResult*, OnRemoteCertificateValidation2, (app::SslClientStream * this_ptr, app::X509CertificateCollection_2* collection))
    IL2CPP_REGISTER_METHOD(0x01F81140, bool, OnRemoteCertificateValidation, (app::SslClientStream * this_ptr, app::X509Certificate_1* certificate, app::Int32__Array* errors))
    IL2CPP_REGISTER_METHOD(0x01F81170, bool, RaiseServerCertificateValidation, (app::SslClientStream * this_ptr, app::X509Certificate_1* certificate, app::Int32__Array* certificate_errors))
    IL2CPP_REGISTER_METHOD(0x01F81190, app::ValidationResult*, RaiseServerCertificateValidation2, (app::SslClientStream * this_ptr, app::X509CertificateCollection_2* collection))
    IL2CPP_REGISTER_METHOD(0x01F811B0, app::X509Certificate_1*, RaiseClientCertificateSelection, (app::SslClientStream * this_ptr, app::X509CertificateCollection_1* client_certificates, app::X509Certificate_1* server_certificate, app::String* target_host, app::X509CertificateCollection_1* server_requested_certificates))
    IL2CPP_REGISTER_METHOD(0x01F811D0, app::AsymmetricAlgorithm*, OnLocalPrivateKeySelection, (app::SslClientStream * this_ptr, app::X509Certificate_1* certificate, app::String* target_host))
    IL2CPP_REGISTER_METHOD(0x01F811F0, app::AsymmetricAlgorithm*, RaisePrivateKeySelection, (app::SslClientStream * this_ptr, app::X509Certificate_1* certificate, app::String* target_host))
} // namespace app::classes::Mono::Security::Protocol::Tls::SslClientStream
