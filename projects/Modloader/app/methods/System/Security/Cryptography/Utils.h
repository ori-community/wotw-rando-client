#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RNGCryptoServiceProvider.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UInt32__Array.h>
#include <Modloader/app/structs/UInt64__Array.h>
#include <Modloader/app/structs/RSA.h>
#include <Modloader/app/structs/HashAlgorithm.h>
#include <Modloader/app/structs/PKCS1MaskGenerationMethod.h>
#include <Modloader/app/structs/RandomNumberGenerator.h>
#include <Modloader/app/structs/HashAlgorithmName.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Security::Cryptography::Utils {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01E14140, app::RNGCryptoServiceProvider*, get_StaticRandomNumberGenerator, ())
    IL2CPP_REGISTER_METHOD(0x01E14330, app::Byte__Array*, GenerateRandom, (int32_t key_size))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, HasAlgorithm, (int32_t dw_calg, int32_t dw_key_size))
    IL2CPP_REGISTER_METHOD(0x01E14400, app::String*, DiscardWhiteSpaces_1, (app::String * input_buffer))
    IL2CPP_REGISTER_METHOD(0x01E144C0, app::String*, DiscardWhiteSpaces_2, (app::String * input_buffer, int32_t input_offset, int32_t input_count))
    IL2CPP_REGISTER_METHOD(0x01E14690, int32_t, ConvertByteArrayToInt, (app::Byte__Array * input))
    IL2CPP_REGISTER_METHOD(0x01E146F0, app::Byte__Array*, ConvertIntToByteArray_1, (int32_t dw_input))
    IL2CPP_REGISTER_METHOD(0x01E14890, void, ConvertIntToByteArray_2, (uint32_t dw_input, app::Byte__Array** counter))
    IL2CPP_REGISTER_METHOD(0x01E14910, app::Byte__Array*, FixupKeyParity, (app::Byte__Array * key))
    IL2CPP_REGISTER_METHOD(0x01E14A60, void, DWORDFromLittleEndian, (uint32_t * x, int32_t digits, uint8_t* block))
    IL2CPP_REGISTER_METHOD(0x01E14AC0, void, DWORDToLittleEndian, (app::Byte__Array * block, app::UInt32__Array* x, int32_t digits))
    IL2CPP_REGISTER_METHOD(0x01E14C30, void, DWORDFromBigEndian, (uint32_t * x, int32_t digits, uint8_t* block))
    IL2CPP_REGISTER_METHOD(0x01E14C90, void, DWORDToBigEndian, (app::Byte__Array * block, app::UInt32__Array* x, int32_t digits))
    IL2CPP_REGISTER_METHOD(0x01E14E00, void, QuadWordFromBigEndian, (uint64_t * x, int32_t digits, uint8_t* block))
    IL2CPP_REGISTER_METHOD(0x01E14E90, void, QuadWordToBigEndian, (app::Byte__Array * block, app::UInt64__Array* x, int32_t digits))
    IL2CPP_REGISTER_METHOD(0x01E15120, app::Byte__Array*, Int, (uint32_t i))
    IL2CPP_REGISTER_METHOD(0x01E15230, app::Byte__Array*, RsaOaepEncrypt, (app::RSA * rsa, app::HashAlgorithm* hash, app::PKCS1MaskGenerationMethod* mgf, app::RandomNumberGenerator* rng, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x01E15300, app::Byte__Array*, RsaOaepDecrypt, (app::RSA * rsa, app::HashAlgorithm* hash, app::PKCS1MaskGenerationMethod* mgf, app::Byte__Array* encrypted_data))
    IL2CPP_REGISTER_METHODINFO(0x04768AD8, Utils_RsaOaepDecrypt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E15400, app::Byte__Array*, RsaPkcs1Padding, (app::RSA * rsa, app::Byte__Array* oid, app::Byte__Array* hash))
    IL2CPP_REGISTER_METHODINFO(0x047629E0, Utils_RsaPkcs1Padding__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E157A0, bool, CompareBigIntArrays, (app::Byte__Array * lhs, app::Byte__Array* rhs))
    IL2CPP_REGISTER_METHOD(0x01E158F0, app::HashAlgorithmName, OidToHashAlgorithmName, (app::String * oid))
    IL2CPP_REGISTER_METHODINFO(0x04782120, Utils_OidToHashAlgorithmName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E15A80, bool, DoesRsaKeyOverride, (app::RSA * rsa_key, app::String* method_name, app::Type__Array* parameter_types))
    IL2CPP_REGISTER_METHOD(0x01E15CA0, bool, DoesRsaKeyOverrideSlowPath, (app::Type * t, app::String* method_name, app::Type__Array* parameter_types))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, _ProduceLegacyHmacValues, ())
} // namespace app::classes::System::Security::Cryptography::Utils
