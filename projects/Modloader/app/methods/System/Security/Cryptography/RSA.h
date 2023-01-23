#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RSA.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/RSAEncryptionPadding.h>
#include <Modloader/app/structs/HashAlgorithmName.h>
#include <Modloader/app/structs/RSASignaturePadding.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Exception.h>

namespace app::classes::System::Security::Cryptography::RSA {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RSA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E48A0, app::RSA*, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x028E49F0, app::RSA*, Create_2, (app::String * alg_name))
    IL2CPP_REGISTER_METHOD(0x028E4AD0, app::Byte__Array*, Encrypt, (app::RSA * this_ptr, app::Byte__Array* data, app::RSAEncryptionPadding* padding))
    IL2CPP_REGISTER_METHODINFO(0x04711AD0, RSA_Encrypt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E4B10, app::Byte__Array*, Decrypt, (app::RSA * this_ptr, app::Byte__Array* data, app::RSAEncryptionPadding* padding))
    IL2CPP_REGISTER_METHODINFO(0x0478FE00, RSA_Decrypt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E4B50, app::Byte__Array*, SignHash, (app::RSA * this_ptr, app::Byte__Array* hash, app::HashAlgorithmName hash_algorithm, app::RSASignaturePadding* padding))
    IL2CPP_REGISTER_METHODINFO(0x047995B8, RSA_SignHash__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E4B90, bool, VerifyHash, (app::RSA * this_ptr, app::Byte__Array* hash, app::Byte__Array* signature, app::HashAlgorithmName hash_algorithm, app::RSASignaturePadding* padding))
    IL2CPP_REGISTER_METHODINFO(0x0474C910, RSA_VerifyHash__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E4BD0, app::Byte__Array*, HashData_1, (app::RSA * this_ptr, app::Byte__Array* data, int32_t offset, int32_t count, app::HashAlgorithmName hash_algorithm))
    IL2CPP_REGISTER_METHODINFO(0x04761688, RSA_HashData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E4C10, app::Byte__Array*, HashData_2, (app::RSA * this_ptr, app::Stream* data, app::HashAlgorithmName hash_algorithm))
    IL2CPP_REGISTER_METHODINFO(0x047483B8, RSA_HashData_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E4C50, app::Byte__Array*, SignData_1, (app::RSA * this_ptr, app::Byte__Array* data, app::HashAlgorithmName hash_algorithm, app::RSASignaturePadding* padding))
    IL2CPP_REGISTER_METHODINFO(0x0474F5A0, RSA_SignData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E4D50, app::Byte__Array*, SignData_2, (app::RSA * this_ptr, app::Byte__Array* data, int32_t offset, int32_t count, app::HashAlgorithmName hash_algorithm, app::RSASignaturePadding* padding))
    IL2CPP_REGISTER_METHODINFO(0x0474A088, RSA_SignData_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E4FB0, app::Byte__Array*, SignData_3, (app::RSA * this_ptr, app::Stream* data, app::HashAlgorithmName hash_algorithm, app::RSASignaturePadding* padding))
    IL2CPP_REGISTER_METHODINFO(0x0476F778, RSA_SignData_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E5160, bool, VerifyData_1, (app::RSA * this_ptr, app::Byte__Array* data, app::Byte__Array* signature, app::HashAlgorithmName hash_algorithm, app::RSASignaturePadding* padding))
    IL2CPP_REGISTER_METHODINFO(0x0474ED60, RSA_VerifyData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E5270, bool, VerifyData_2, (app::RSA * this_ptr, app::Byte__Array* data, int32_t offset, int32_t count, app::Byte__Array* signature, app::HashAlgorithmName hash_algorithm, app::RSASignaturePadding* padding))
    IL2CPP_REGISTER_METHODINFO(0x047989E8, RSA_VerifyData_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E5500, bool, VerifyData_3, (app::RSA * this_ptr, app::Stream* data, app::Byte__Array* signature, app::HashAlgorithmName hash_algorithm, app::RSASignaturePadding* padding))
    IL2CPP_REGISTER_METHODINFO(0x0473C2F0, RSA_VerifyData_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E56F0, app::Exception*, DerivedClassMustOverride, ())
    IL2CPP_REGISTER_METHOD(0x028E5850, app::Exception*, HashAlgorithmNameNullOrEmpty, ())
    IL2CPP_REGISTER_METHOD(0x028E59C0, app::Byte__Array*, DecryptValue, (app::RSA * this_ptr, app::Byte__Array* rgb))
    IL2CPP_REGISTER_METHODINFO(0x04776DB0, RSA_DecryptValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E5A30, app::Byte__Array*, EncryptValue, (app::RSA * this_ptr, app::Byte__Array* rgb))
    IL2CPP_REGISTER_METHODINFO(0x04788C20, RSA_EncryptValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E5AA0, app::String*, get_KeyExchangeAlgorithm, (app::RSA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E5B20, app::String*, get_SignatureAlgorithm, (app::RSA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E5BA0, void, FromXmlString, (app::RSA * this_ptr, app::String* xml_string))
    IL2CPP_REGISTER_METHODINFO(0x047777B8, RSA_FromXmlString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E62B0, app::String*, ToXmlString, (app::RSA * this_ptr, bool include_private_parameters))
} // namespace app::classes::System::Security::Cryptography::RSA
