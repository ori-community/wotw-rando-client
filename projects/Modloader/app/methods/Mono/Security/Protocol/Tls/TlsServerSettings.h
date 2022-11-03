#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::TlsServerSettings {
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_ServerKeyExchange, (app::TlsServerSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724140, void, set_ServerKeyExchange, (app::TlsServerSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::X509CertificateCollection_2*, get_Certificates, (app::TlsServerSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Certificates, (app::TlsServerSettings * this_ptr, app::X509CertificateCollection_2* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::RSA*, get_CertificateRSA, (app::TlsServerSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0291C4C0, app::RSAParameters, get_RsaParameters, (app::TlsServerSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0291C4F0, void, set_RsaParameters, (app::TlsServerSettings * this_ptr, app::RSAParameters value))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::Byte__Array*, get_SignedParams, (app::TlsServerSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_SignedParams, (app::TlsServerSettings * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x015CCAD0, bool, get_CertificateRequest, (app::TlsServerSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CCAE0, void, set_CertificateRequest, (app::TlsServerSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::ClientCertificateType__Enum__Array*, get_CertificateTypes, (app::TlsServerSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_CertificateTypes, (app::TlsServerSettings * this_ptr, app::ClientCertificateType__Enum__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::String__Array*, get_DistinguisedNames, (app::TlsServerSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_DistinguisedNames, (app::TlsServerSettings * this_ptr, app::String__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TlsServerSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0291C510, void, UpdateCertificateRSA, (app::TlsServerSettings * this_ptr))
} // namespace app::classes::Mono::Security::Protocol::Tls::TlsServerSettings
