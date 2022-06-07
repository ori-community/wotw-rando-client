#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::TlsClientSettings {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_TargetHost, (app::TlsClientSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_TargetHost, (app::TlsClientSettings * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::X509CertificateCollection_1 *, get_Certificates, (app::TlsClientSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Certificates, (app::TlsClientSettings * this_ptr, app::X509CertificateCollection_1 * value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::X509Certificate_1 *, get_ClientCertificate, (app::TlsClientSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0291B8F0, void, set_ClientCertificate, (app::TlsClientSettings * this_ptr, app::X509Certificate_1 * value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::RSAManaged_1 *, get_CertificateRSA, (app::TlsClientSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0291B900, void, ctor, (app::TlsClientSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0291BA60, void, UpdateCertificateRSA, (app::TlsClientSettings * this_ptr))
}
