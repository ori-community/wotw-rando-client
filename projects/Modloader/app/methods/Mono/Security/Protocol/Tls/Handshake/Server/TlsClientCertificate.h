#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate {
    IL2CPP_REGISTER_METHOD(0x01F6CD40, void, ctor, (app::TlsClientCertificate * this_ptr, app::Context_1* context, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x01F709F0, void, Update, (app::TlsClientCertificate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F70CD0, bool, get_HasCertificate, (app::TlsClientCertificate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (app::TlsClientCertificate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F70D20, void, ProcessAsTls1, (app::TlsClientCertificate * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795AE0, TlsClientCertificate_ProcessAsTls1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F71180, bool, checkCertificateUsage, (app::TlsClientCertificate * this_ptr, app::X509Certificate_2* cert))
    IL2CPP_REGISTER_METHOD(0x01F71680, void, validateCertificates, (app::TlsClientCertificate * this_ptr, app::X509CertificateCollection_2* certificates))
    IL2CPP_REGISTER_METHODINFO(0x04731680, TlsClientCertificate_validateCertificates__MethodInfo)
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate
