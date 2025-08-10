#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ASN1_1.h>
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509CertificateBuilder.h>
#include <Modloader/app/structs/X509ExtensionCollection_1.h>

namespace app::classes::Mono::Security::X509::X509CertificateBuilder {
    IL2CPP_REGISTER_METHOD(0x0293DCD0, void, ctor_1, app::X509CertificateBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293DCE0, void, ctor_2, app::X509CertificateBuilder* this_ptr, uint8_t version)
    IL2CPP_REGISTER_METHOD(0x0052A280, uint8_t, get_Version, app::X509CertificateBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_Version, app::X509CertificateBuilder* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Byte__Array*, get_SerialNumber, app::X509CertificateBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_SerialNumber, app::X509CertificateBuilder* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_IssuerName, app::X509CertificateBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_IssuerName, app::X509CertificateBuilder* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::DateTime, get_NotBefore, app::X509CertificateBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_NotBefore, app::X509CertificateBuilder* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::DateTime, get_NotAfter, app::X509CertificateBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_NotAfter, app::X509CertificateBuilder* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_SubjectName, app::X509CertificateBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_SubjectName, app::X509CertificateBuilder* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::AsymmetricAlgorithm*, get_SubjectPublicKey, app::X509CertificateBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_SubjectPublicKey, app::X509CertificateBuilder* this_ptr, app::AsymmetricAlgorithm* value)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Byte__Array*, get_IssuerUniqueId, app::X509CertificateBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_IssuerUniqueId, app::X509CertificateBuilder* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::Byte__Array*, get_SubjectUniqueId, app::X509CertificateBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_SubjectUniqueId, app::X509CertificateBuilder* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::X509ExtensionCollection_1*, get_Extensions, app::X509CertificateBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293DED0, app::ASN1_1*, SubjectPublicKeyInfo, app::X509CertificateBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293E7A0, app::Byte__Array*, UniqueIdentifier, app::X509CertificateBuilder* this_ptr, app::Byte__Array* id)
    IL2CPP_REGISTER_METHOD(0x0293E940, app::ASN1_1*, ToBeSigned, app::X509CertificateBuilder* this_ptr, app::String* oid)
} // namespace app::classes::Mono::Security::X509::X509CertificateBuilder
