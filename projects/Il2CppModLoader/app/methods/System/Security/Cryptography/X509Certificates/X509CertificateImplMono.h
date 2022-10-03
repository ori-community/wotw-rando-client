#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509CertificateImplMono {
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor, (app::X509CertificateImplMono * this_ptr, app::X509Certificate* x509))
    IL2CPP_REGISTER_METHOD(0x009B3690, bool, get_IsValid, (app::X509CertificateImplMono * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E17090, app::X509CertificateImpl*, Clone, (app::X509CertificateImplMono * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E171E0, app::String*, GetIssuerName, (app::X509CertificateImplMono * this_ptr, bool legacy_v1_mode))
    IL2CPP_REGISTER_METHOD(0x01E172F0, app::String*, GetSubjectName, (app::X509CertificateImplMono * this_ptr, bool legacy_v1_mode))
    IL2CPP_REGISTER_METHOD(0x01E17400, app::Byte__Array*, GetRawCertData, (app::X509CertificateImplMono * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E17440, app::Byte__Array*, GetCertHash, (app::X509CertificateImplMono * this_ptr, bool lazy))
    IL2CPP_REGISTER_METHOD(0x01E174B0, app::DateTime, GetValidFrom, (app::X509CertificateImplMono * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E174F0, app::DateTime, GetValidUntil, (app::X509CertificateImplMono * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E17530, bool, Equals, (app::X509CertificateImplMono * this_ptr, app::X509CertificateImpl* other, bool* result))
    IL2CPP_REGISTER_METHOD(0x01E17540, app::Byte__Array*, GetPublicKey, (app::X509CertificateImplMono * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E17580, app::Byte__Array*, GetSerialNumber, (app::X509CertificateImplMono * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E175C0, app::String*, ToString, (app::X509CertificateImplMono * this_ptr, bool full))
    IL2CPP_REGISTER_METHOD(0x002FBAF0, void, Dispose, (app::X509CertificateImplMono * this_ptr, bool disposing))
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509CertificateImplMono
