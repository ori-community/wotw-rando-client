#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ASN1.h>
#include <Modloader/app/structs/ASN1_1.h>
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DSA.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/RSA.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509Certificate.h>
#include <Modloader/app/structs/X509Certificate_2.h>
#include <Modloader/app/structs/X509ExtensionCollection_1.h>

namespace app::classes::Mono::Security::X509::X509Certificate {
    IL2CPP_REGISTER_METHOD(0x025E6220, void, Parse_1, app::X509Certificate* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x025E6D00, void, ctor_1, app::X509Certificate* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x025E6E60, app::Byte__Array*, GetUnsignedBigInteger_1, app::X509Certificate* this_ptr, app::Byte__Array* integer)
    IL2CPP_REGISTER_METHOD(0x025E6F50, app::DSA*, get_DSA_1, app::X509Certificate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_IssuerName_1, app::X509Certificate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E7500, app::Byte__Array*, get_KeyAlgorithmParameters_1, app::X509Certificate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E7650, app::Byte__Array*, get_PublicKey_1, app::X509Certificate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E77A0, app::RSA*, get_RSA_1, app::X509Certificate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E7B30, app::Byte__Array*, get_RawData_1, app::X509Certificate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E7C80, app::Byte__Array*, get_SerialNumber_1, app::X509Certificate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String*, get_SubjectName_1, app::X509Certificate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::DateTime, get_ValidFrom_1, app::X509Certificate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::DateTime, get_ValidUntil_1, app::X509Certificate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::ASN1*, GetIssuerName_1, app::X509Certificate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::ASN1*, GetSubjectName_1, app::X509Certificate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E7DD0, void, GetObjectData_1, app::X509Certificate* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x025E7E70, app::Byte__Array*, PEM_1, app::String* type, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x025E8070, void, cctor_1, )
    IL2CPP_REGISTER_METHOD(0x0293A480, void, Parse_2, app::X509Certificate_2* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x0293AF60, void, ctor_2, app::X509Certificate_2* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x0293B0C0, app::Byte__Array*, GetUnsignedBigInteger_2, app::X509Certificate_2* this_ptr, app::Byte__Array* integer)
    IL2CPP_REGISTER_METHOD(0x0293B1B0, app::DSA*, get_DSA_2, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293B760, void, set_DSA, app::X509Certificate_2* this_ptr, app::DSA* value)
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::X509ExtensionCollection_1*, get_Extensions, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293B780, app::Byte__Array*, get_Hash, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_IssuerName_2, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_KeyAlgorithm, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293BAA0, app::Byte__Array*, get_KeyAlgorithmParameters_2, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_KeyAlgorithmParameters, app::X509Certificate_2* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x0293BBF0, app::Byte__Array*, get_PublicKey_2, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293BD40, app::RSA*, get_RSA_2, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293C0D0, void, set_RSA, app::X509Certificate_2* this_ptr, app::RSA* value)
    IL2CPP_REGISTER_METHOD(0x0293C0F0, app::Byte__Array*, get_RawData_2, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293C240, app::Byte__Array*, get_SerialNumber_2, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293C390, app::Byte__Array*, get_Signature, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::String*, get_SignatureAlgorithm, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293C8D0, app::Byte__Array*, get_SignatureAlgorithmParameters, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String*, get_SubjectName_2, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::DateTime, get_ValidFrom_2, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::DateTime, get_ValidUntil_2, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00736620, int32_t, get_Version, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293CA20, bool, get_IsCurrent, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293CBB0, bool, WasCurrent, app::X509Certificate_2* this_ptr, app::DateTime instant)
    IL2CPP_REGISTER_METHOD(0x0293CCD0, app::Byte__Array*, get_IssuerUniqueIdentifier, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293CE20, app::Byte__Array*, get_SubjectUniqueIdentifier, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293CF70, bool, VerifySignature_1, app::X509Certificate_2* this_ptr, app::DSA* dsa)
    IL2CPP_REGISTER_METHOD(0x0293D120, bool, VerifySignature_2, app::X509Certificate_2* this_ptr, app::RSA* rsa)
    IL2CPP_REGISTER_METHOD(0x0293D340, bool, VerifySignature_3, app::X509Certificate_2* this_ptr, app::AsymmetricAlgorithm* aa)
    IL2CPP_REGISTER_METHOD(
        0x0293D550,
        bool,
        CheckSignature,
        app::X509Certificate_2* this_ptr,
        app::Byte__Array* hash,
        app::String* hash_algorithm,
        app::Byte__Array* signature
    )
    IL2CPP_REGISTER_METHOD(0x0293D760, bool, get_IsSelfSigned, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::ASN1_1*, GetIssuerName_2, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::ASN1_1*, GetSubjectName_2, app::X509Certificate_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293D880, void, ctor_3, app::X509Certificate_2* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x0293D9A0, void, GetObjectData_2, app::X509Certificate_2* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x0293DA40, app::Byte__Array*, PEM_2, app::String* type, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x0293DC40, void, cctor_2, )
} // namespace app::classes::Mono::Security::X509::X509Certificate
