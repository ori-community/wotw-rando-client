#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DSA.h>
#include <Modloader/app/structs/DSAParameters.h>
#include <Modloader/app/structs/PKCS8_PrivateKeyInfo.h>
#include <Modloader/app/structs/PKCS8_PrivateKeyInfo_1.h>
#include <Modloader/app/structs/RSA.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo {
    IL2CPP_REGISTER_METHOD(0x025D3650, void, ctor_1, app::PKCS8_PrivateKeyInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025D37A0, void, ctor_2, app::PKCS8_PrivateKeyInfo* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x025D3900, app::Byte__Array*, get_PrivateKey_1, app::PKCS8_PrivateKeyInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025D3A50, void, Decode_1, app::PKCS8_PrivateKeyInfo* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x025D3E10, app::Byte__Array*, RemoveLeadingZero_1, app::Byte__Array* big_int)
    IL2CPP_REGISTER_METHOD(0x025D3F10, app::Byte__Array*, Normalize_1, app::Byte__Array* big_int, int32_t length)
    IL2CPP_REGISTER_METHOD(0x025D4000, app::RSA*, DecodeRSA_1, app::Byte__Array* keypair)
    IL2CPP_REGISTER_METHOD(0x025D46B0, app::DSA*, DecodeDSA_1, app::Byte__Array* private_key, app::DSAParameters dsa_parameters)
    IL2CPP_REGISTER_METHOD(0x02A40BB0, void, ctor_3, app::PKCS8_PrivateKeyInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A40D00, void, ctor_4, app::PKCS8_PrivateKeyInfo_1* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Algorithm, app::PKCS8_PrivateKeyInfo_1* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02A40D30, app::Byte__Array*, get_PrivateKey_2, app::PKCS8_PrivateKeyInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A40E80, void, set_PrivateKey, app::PKCS8_PrivateKeyInfo_1* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x02A41000, void, Decode_2, app::PKCS8_PrivateKeyInfo_1* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x02A413C0, app::Byte__Array*, GetBytes, app::PKCS8_PrivateKeyInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A41BD0, app::Byte__Array*, RemoveLeadingZero_2, app::Byte__Array* big_int)
    IL2CPP_REGISTER_METHOD(0x02A41CD0, app::Byte__Array*, Normalize_2, app::Byte__Array* big_int, int32_t length)
    IL2CPP_REGISTER_METHOD(0x02A41DC0, app::RSA*, DecodeRSA_2, app::Byte__Array* keypair)
    IL2CPP_REGISTER_METHOD(0x02A42470, app::Byte__Array*, Encode_1, app::RSA* rsa)
    IL2CPP_REGISTER_METHOD(0x02A427E0, app::DSA*, DecodeDSA_2, app::Byte__Array* private_key, app::DSAParameters dsa_parameters)
    IL2CPP_REGISTER_METHOD(0x02A42A00, app::Byte__Array*, Encode_2, app::DSA* dsa)
    IL2CPP_REGISTER_METHOD(0x02A42A70, app::Byte__Array*, Encode_3, app::AsymmetricAlgorithm* aa)
} // namespace app::classes::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo
