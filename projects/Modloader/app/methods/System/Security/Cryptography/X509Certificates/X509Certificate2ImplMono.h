#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ASN1_1.h>
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Oid.h>
#include <Modloader/app/structs/PublicKey.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/X500DistinguishedName.h>
#include <Modloader/app/structs/X509Certificate2.h>
#include <Modloader/app/structs/X509Certificate2Impl.h>
#include <Modloader/app/structs/X509Certificate2ImplMono.h>
#include <Modloader/app/structs/X509CertificateImpl.h>
#include <Modloader/app/structs/X509CertificateImplCollection.h>
#include <Modloader/app/structs/X509Certificate_2.h>
#include <Modloader/app/structs/X509ExtensionCollection_2.h>
#include <Modloader/app/structs/X509KeyStorageFlags__Enum.h>
#include <Modloader/app/structs/X509NameType__Enum.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono {
    IL2CPP_REGISTER_METHOD(0x0194FC60, bool, get_IsValid, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, ctor_1, app::X509Certificate2ImplMono* this_ptr, app::X509Certificate_2* cert)
    IL2CPP_REGISTER_METHOD(0x021C77E0, void, ctor_2, app::X509Certificate2ImplMono* this_ptr, app::X509Certificate2ImplMono* other)
    IL2CPP_REGISTER_METHOD(0x021C7950, app::X509CertificateImpl*, Clone, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021C7AB0, app::String*, GetIssuerName, app::X509Certificate2ImplMono* this_ptr, bool legacy_v1_mode)
    IL2CPP_REGISTER_METHOD(0x021C7BC0, app::String*, GetSubjectName, app::X509Certificate2ImplMono* this_ptr, bool legacy_v1_mode)
    IL2CPP_REGISTER_METHOD(0x021C7CD0, app::Byte__Array*, GetRawCertData, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021C7D10, app::Byte__Array*, GetCertHash, app::X509Certificate2ImplMono* this_ptr, bool lazy)
    IL2CPP_REGISTER_METHOD(0x021C7D80, app::DateTime, GetValidFrom, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021C7DC0, app::DateTime, GetValidUntil, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E17530, bool, Equals, app::X509Certificate2ImplMono* this_ptr, app::X509CertificateImpl* other, bool* result)
    IL2CPP_REGISTER_METHOD(0x021C7E00, app::Byte__Array*, GetPublicKey, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021C7E40, app::Byte__Array*, GetSerialNumber, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C944C0, void, ctor_3, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021C7E80, app::X509ExtensionCollection_2*, get_Extensions, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021C8050, app::X500DistinguishedName*, get_IssuerName, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021C8250, app::AsymmetricAlgorithm*, get_PrivateKey, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021C8590, void, set_PrivateKey, app::X509Certificate2ImplMono* this_ptr, app::AsymmetricAlgorithm* value)
    IL2CPP_REGISTER_METHOD(0x021C8780, app::PublicKey*, get_PublicKey, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021C89B0, app::Oid*, get_SignatureAlgorithm, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021C8BB0, app::X500DistinguishedName*, get_SubjectName, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021C8DB0, int32_t, get_Version, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021C8EA0, app::String*, GetNameInfo, app::X509Certificate2ImplMono* this_ptr, app::X509NameType__Enum name_type, bool for_issuer)
    IL2CPP_REGISTER_METHOD(0x021C9200, app::ASN1_1*, Find, app::X509Certificate2ImplMono* this_ptr, app::Byte__Array* oid, app::ASN1_1* dn)
    IL2CPP_REGISTER_METHOD(0x021C9370, app::String*, GetValueAsString, app::X509Certificate2ImplMono* this_ptr, app::ASN1_1* pair)
    IL2CPP_REGISTER_METHOD(
        0x021C96A0,
        app::X509Certificate_2*,
        ImportPkcs12,
        app::X509Certificate2ImplMono* this_ptr,
        app::Byte__Array* raw_data,
        app::String* password
    )
    IL2CPP_REGISTER_METHOD(
        0x021CA210,
        void,
        Import,
        app::X509Certificate2ImplMono* this_ptr,
        app::Byte__Array* raw_data,
        app::String* password,
        app::X509KeyStorageFlags__Enum key_storage_flags
    )
    IL2CPP_REGISTER_METHOD(0x021CA500, void, Reset, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021CA5F0, app::String*, ToString_1, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021CA690, app::String*, ToString_2, app::X509Certificate2ImplMono* this_ptr, bool verbose)
    IL2CPP_REGISTER_METHOD(0x021CADC0, void, AppendBuffer, app::StringBuilder* sb, app::Byte__Array* buffer)
    IL2CPP_REGISTER_METHOD(0x021CAEE0, bool, Verify, app::X509Certificate2ImplMono* this_ptr, app::X509Certificate2* this_certificate)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::X509CertificateImplCollection*, get_IntermediateCertificates, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::X509Certificate_2*, get_MonoCertificate, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::X509Certificate2Impl*, get_FallbackImpl, app::X509Certificate2ImplMono* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021CB130, void, cctor, )
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono
