#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CspKeyContainerInfo.h>
#include <Modloader/app/structs/CspParameters.h>
#include <Modloader/app/structs/EventArgs.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/HashAlgorithm.h>
#include <Modloader/app/structs/HashAlgorithmName.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RSACryptoServiceProvider.h>
#include <Modloader/app/structs/RSAEncryptionPadding.h>
#include <Modloader/app/structs/RSAParameters.h>
#include <Modloader/app/structs/RSASignaturePadding.h>
#include <Modloader/app/structs/Stream.h>

namespace app::classes::System::Security::Cryptography::RSACryptoServiceProvider {
    IL2CPP_REGISTER_METHOD(0x028E6670, app::String*, get_SignatureAlgorithm, (app::RSACryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E66F0, bool, get_UseMachineKeyStore, ())
    IL2CPP_REGISTER_METHOD(0x028E67A0, void, set_UseMachineKeyStore, (bool value))
    IL2CPP_REGISTER_METHOD(0x028E6850, app::Byte__Array*, HashData_1, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* data, int32_t offset, int32_t count, app::HashAlgorithmName hash_algorithm))
    IL2CPP_REGISTER_METHOD(0x028E68B0, app::Byte__Array*, HashData_2, (app::RSACryptoServiceProvider * this_ptr, app::Stream* data, app::HashAlgorithmName hash_algorithm))
    IL2CPP_REGISTER_METHOD(0x028E68F0, int32_t, GetAlgorithmId, (app::HashAlgorithmName hash_algorithm))
    IL2CPP_REGISTER_METHOD(0x028E6B30, app::Byte__Array*, Encrypt_1, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* data, app::RSAEncryptionPadding* padding))
    IL2CPP_REGISTER_METHOD(0x028E6D20, app::Byte__Array*, Decrypt_1, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* data, app::RSAEncryptionPadding* padding))
    IL2CPP_REGISTER_METHOD(0x028E6F10, app::Byte__Array*, SignHash_1, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* hash, app::HashAlgorithmName hash_algorithm, app::RSASignaturePadding* padding))
    IL2CPP_REGISTER_METHOD(0x028E71D0, bool, VerifyHash_1, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* hash, app::Byte__Array* signature, app::HashAlgorithmName hash_algorithm, app::RSASignaturePadding* padding))
    IL2CPP_REGISTER_METHOD(0x028E74E0, app::Exception*, PaddingModeNotSupported, ())
    IL2CPP_REGISTER_METHOD(0x028E7640, void, ctor_1, (app::RSACryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E7660, void, ctor_2, (app::RSACryptoServiceProvider * this_ptr, app::CspParameters* parameters))
    IL2CPP_REGISTER_METHOD(0x028E76B0, void, ctor_3, (app::RSACryptoServiceProvider * this_ptr, int32_t dw_key_size))
    IL2CPP_REGISTER_METHOD(0x028E76C0, void, ctor_4, (app::RSACryptoServiceProvider * this_ptr, int32_t dw_key_size, app::CspParameters* parameters))
    IL2CPP_REGISTER_METHOD(0x028E7710, void, Common_1, (app::RSACryptoServiceProvider * this_ptr, int32_t dw_key_size, bool parameters))
    IL2CPP_REGISTER_METHOD(0x028E7D60, void, Common_2, (app::RSACryptoServiceProvider * this_ptr, app::CspParameters* p))
    IL2CPP_REGISTER_METHOD(0x028E7F60, void, Finalize, (app::RSACryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E7FE0, app::String*, get_KeyExchangeAlgorithm, (app::RSACryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E8060, int32_t, get_KeySize, (app::RSACryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_PersistKeyInCsp, (app::RSACryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E8090, void, set_PersistKeyInCsp, (app::RSACryptoServiceProvider * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x028E8120, bool, get_PublicOnly, (app::RSACryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E8140, app::Byte__Array*, Decrypt_2, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* rgb, bool f_o_a_e_p))
    IL2CPP_REGISTER_METHOD(0x028E85B0, app::Byte__Array*, DecryptValue, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* rgb))
    IL2CPP_REGISTER_METHOD(0x028E86A0, app::Byte__Array*, Encrypt_2, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* rgb, bool f_o_a_e_p))
    IL2CPP_REGISTER_METHOD(0x01D61600, app::Byte__Array*, EncryptValue, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* rgb))
    IL2CPP_REGISTER_METHOD(0x028E89D0, app::RSAParameters, ExportParameters, (app::RSACryptoServiceProvider * this_ptr, bool include_private_parameters))
    IL2CPP_REGISTER_METHOD(0x028E8BC0, void, ImportParameters, (app::RSACryptoServiceProvider * this_ptr, app::RSAParameters parameters))
    IL2CPP_REGISTER_METHOD(0x028E8C10, app::HashAlgorithm*, GetHash, (app::RSACryptoServiceProvider * this_ptr, app::Object* halg))
    IL2CPP_REGISTER_METHOD(0x028E8EC0, app::HashAlgorithm*, GetHashFromString, (app::RSACryptoServiceProvider * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x028E8FD0, app::Byte__Array*, SignData_1, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* buffer, app::Object* halg))
    IL2CPP_REGISTER_METHOD(0x028E9170, app::Byte__Array*, SignData_2, (app::RSACryptoServiceProvider * this_ptr, app::Stream* input_stream, app::Object* halg))
    IL2CPP_REGISTER_METHOD(0x028E9260, app::Byte__Array*, SignData_3, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::Object* halg))
    IL2CPP_REGISTER_METHOD(0x028E9370, app::String*, GetHashNameFromOID, (app::RSACryptoServiceProvider * this_ptr, app::String* oid))
    IL2CPP_REGISTER_METHOD(0x028E9570, app::Byte__Array*, SignHash_2, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* rgb_hash, app::String* str))
    IL2CPP_REGISTER_METHOD(0x028E9690, app::Byte__Array*, SignHash_3, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* rgb_hash, int32_t calg_hash))
    IL2CPP_REGISTER_METHOD(0x028E9770, app::HashAlgorithm*, InternalHashToHashAlgorithm, (int32_t calg_hash))
    IL2CPP_REGISTER_METHOD(0x028E98A0, bool, VerifyData, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* buffer, app::Object* halg, app::Byte__Array* signature))
    IL2CPP_REGISTER_METHOD(0x028E9A20, bool, VerifyHash_2, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* rgb_hash, app::String* str, app::Byte__Array* rgb_signature))
    IL2CPP_REGISTER_METHOD(0x028E9B90, bool, VerifyHash_3, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* rgb_hash, int32_t calg_hash, app::Byte__Array* rgb_signature))
    IL2CPP_REGISTER_METHOD(0x020D6E70, void, Dispose, (app::RSACryptoServiceProvider * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x028E9C90, void, OnKeyGenerated, (app::RSACryptoServiceProvider * this_ptr, app::Object* sender, app::EventArgs* e))
    IL2CPP_REGISTER_METHOD(0x028E9D20, app::CspKeyContainerInfo*, get_CspKeyContainerInfo, (app::RSACryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E9E90, app::Byte__Array*, ExportCspBlob, (app::RSACryptoServiceProvider * this_ptr, bool include_private_parameters))
    IL2CPP_REGISTER_METHOD(0x028E9F20, void, ImportCspBlob, (app::RSACryptoServiceProvider * this_ptr, app::Byte__Array* key_blob))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::System::Security::Cryptography::RSACryptoServiceProvider
