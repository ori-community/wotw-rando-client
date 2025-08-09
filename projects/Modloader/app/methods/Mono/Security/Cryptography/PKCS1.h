#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HashAlgorithm.h>
#include <Modloader/app/structs/RSA.h>
#include <Modloader/app/structs/RandomNumberGenerator.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Security::Cryptography::PKCS1 {
    IL2CPP_REGISTER_METHOD(0x025D0AD0, bool, Compare_1, app::Byte__Array* array1, app::Byte__Array* array2)
    IL2CPP_REGISTER_METHOD(0x025D0B70, app::Byte__Array*, xor, app::Byte__Array* array1, app::Byte__Array* array2)
    IL2CPP_REGISTER_METHOD(0x025D0C90, app::Byte__Array*, GetEmptyHash, app::HashAlgorithm* hash)
    IL2CPP_REGISTER_METHOD(0x025D0EF0, app::Byte__Array*, I2OSP_1, int32_t x, int32_t size)
    IL2CPP_REGISTER_METHOD(0x025D0FD0, app::Byte__Array*, I2OSP_2, app::Byte__Array* x, int32_t size)
    IL2CPP_REGISTER_METHOD(0x025D10A0, app::Byte__Array*, OS2IP_1, app::Byte__Array* x)
    IL2CPP_REGISTER_METHOD(0x025D11C0, app::Byte__Array*, RSAEP, app::RSA* rsa, app::Byte__Array* m)
    IL2CPP_REGISTER_METHOD(0x025D11F0, app::Byte__Array*, RSADP, app::RSA* rsa, app::Byte__Array* c)
    IL2CPP_REGISTER_METHOD(0x025D11F0, app::Byte__Array*, RSASP1_1, app::RSA* rsa, app::Byte__Array* m)
    IL2CPP_REGISTER_METHOD(0x025D11C0, app::Byte__Array*, RSAVP1_1, app::RSA* rsa, app::Byte__Array* s)
    IL2CPP_REGISTER_METHOD(
        0x025D1220,
        app::Byte__Array*,
        Encrypt_OAEP,
        app::RSA* rsa,
        app::HashAlgorithm* hash,
        app::RandomNumberGenerator* rng,
        app::Byte__Array* M
    )
    IL2CPP_REGISTER_METHOD(0x025D1580, app::Byte__Array*, Decrypt_OAEP, app::RSA* rsa, app::HashAlgorithm* hash, app::Byte__Array* C)
    IL2CPP_REGISTER_METHOD(0x025D1920, app::Byte__Array*, Sign_v15_1, app::RSA* rsa, app::HashAlgorithm* hash, app::Byte__Array* hash_value)
    IL2CPP_REGISTER_METHOD(0x025D1A40, app::Byte__Array*, Sign_v15_2, app::RSA* rsa, app::String* hash_name, app::Byte__Array* hash_value)
    IL2CPP_REGISTER_METHOD(0x025D1BC0, bool, Verify_v15_1, app::RSA* rsa, app::HashAlgorithm* hash, app::Byte__Array* hash_value, app::Byte__Array* signature)
    IL2CPP_REGISTER_METHOD(0x025D1CA0, bool, Verify_v15_2, app::RSA* rsa, app::String* hash_name, app::Byte__Array* hash_value, app::Byte__Array* signature)
    IL2CPP_REGISTER_METHOD(
        0x025D1E40,
        bool,
        Verify_v15_3,
        app::RSA* rsa,
        app::HashAlgorithm* hash,
        app::Byte__Array* hash_value,
        app::Byte__Array* signature,
        bool try_non_standard_encoding
    )
    IL2CPP_REGISTER_METHOD(0x025D20D0, app::Byte__Array*, Encode_v15_1, app::HashAlgorithm* hash, app::Byte__Array* hash_value, int32_t em_length)
    IL2CPP_REGISTER_METHOD(0x025D2750, app::Byte__Array*, MGF1, app::HashAlgorithm* hash, app::Byte__Array* mgf_seed, int32_t mask_len)
    IL2CPP_REGISTER_METHOD(0x025D29A0, app::HashAlgorithm*, CreateFromName_1, app::String* name)
    IL2CPP_REGISTER_METHOD(0x025D2E00, void, cctor_1, )
    IL2CPP_REGISTER_METHOD(0x025D0AD0, bool, Compare_2, app::Byte__Array* array1, app::Byte__Array* array2)
    IL2CPP_REGISTER_METHOD(0x02A3E610, app::Byte__Array*, I2OSP_3, app::Byte__Array* x, int32_t size)
    IL2CPP_REGISTER_METHOD(0x02A3E6E0, app::Byte__Array*, OS2IP_2, app::Byte__Array* x)
    IL2CPP_REGISTER_METHOD(0x025D11F0, app::Byte__Array*, RSASP1_2, app::RSA* rsa, app::Byte__Array* m)
    IL2CPP_REGISTER_METHOD(0x025D11C0, app::Byte__Array*, RSAVP1_2, app::RSA* rsa, app::Byte__Array* s)
    IL2CPP_REGISTER_METHOD(0x02A3E800, app::Byte__Array*, Sign_v15_3, app::RSA* rsa, app::HashAlgorithm* hash, app::Byte__Array* hash_value)
    IL2CPP_REGISTER_METHOD(0x02A3E920, bool, Verify_v15_4, app::RSA* rsa, app::HashAlgorithm* hash, app::Byte__Array* hash_value, app::Byte__Array* signature)
    IL2CPP_REGISTER_METHOD(
        0x02A3EA00,
        bool,
        Verify_v15_5,
        app::RSA* rsa,
        app::HashAlgorithm* hash,
        app::Byte__Array* hash_value,
        app::Byte__Array* signature,
        bool try_non_standard_encoding
    )
    IL2CPP_REGISTER_METHOD(0x02A3EC90, app::Byte__Array*, Encode_v15_2, app::HashAlgorithm* hash, app::Byte__Array* hash_value, int32_t em_length)
    IL2CPP_REGISTER_METHOD(0x02A3F310, app::String*, HashNameFromOid, app::String* oid, bool throw_on_error)
    IL2CPP_REGISTER_METHOD(0x02A3F6F0, app::HashAlgorithm*, CreateFromOid, app::String* oid)
    IL2CPP_REGISTER_METHOD(0x02A3F7A0, app::HashAlgorithm*, CreateFromName_2, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02A3FC00, void, cctor_2, )
} // namespace app::classes::Mono::Security::Cryptography::PKCS1
