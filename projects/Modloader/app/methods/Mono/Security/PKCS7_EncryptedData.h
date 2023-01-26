#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PKCS7_EncryptedData.h>
#include <Modloader/app/structs/ASN1.h>
#include <Modloader/app/structs/ASN1_1.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/PKCS7_ContentInfo.h>
#include <Modloader/app/structs/PKCS7_ContentInfo_1.h>
#include <Modloader/app/structs/PKCS7_EncryptedData_1.h>

namespace app::classes::Mono::Security::PKCS7_EncryptedData {
    IL2CPP_REGISTER_METHOD(0x00531660, void, ctor_1, (app::PKCS7_EncryptedData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025DA3B0, void, ctor_2, (app::PKCS7_EncryptedData * this_ptr, app::ASN1* asn1))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::PKCS7_ContentInfo*, get_EncryptionAlgorithm_1, (app::PKCS7_EncryptedData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025DA8B0, app::Byte__Array*, get_EncryptedContent_1, (app::PKCS7_EncryptedData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00531660, void, ctor_3, (app::PKCS7_EncryptedData_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A47D00, void, ctor_4, (app::PKCS7_EncryptedData_1 * this_ptr, app::ASN1_1* asn1))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::PKCS7_ContentInfo_1*, get_EncryptionAlgorithm_2, (app::PKCS7_EncryptedData_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A48200, app::Byte__Array*, get_EncryptedContent_2, (app::PKCS7_EncryptedData_1 * this_ptr))
} // namespace app::classes::Mono::Security::PKCS7_EncryptedData
