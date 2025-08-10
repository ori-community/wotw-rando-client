#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/MD5SHA1.h>
#include <Modloader/app/structs/RSA.h>

namespace app::classes::Mono::Security::Cryptography::MD5SHA1 {
    IL2CPP_REGISTER_METHOD(0x02A3DFA0, void, ctor, app::MD5SHA1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A3E020, void, Initialize, app::MD5SHA1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A3E080, app::Byte__Array*, HashFinal, app::MD5SHA1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F81D40, void, HashCore, app::MD5SHA1* this_ptr, app::Byte__Array* array, int32_t ib_start, int32_t cb_size)
    IL2CPP_REGISTER_METHOD(0x02A3E210, app::Byte__Array*, CreateSignature, app::MD5SHA1* this_ptr, app::RSA* rsa)
    IL2CPP_REGISTER_METHOD(0x02A3E3F0, bool, VerifySignature, app::MD5SHA1* this_ptr, app::RSA* rsa, app::Byte__Array* rgb_signature)
} // namespace app::classes::Mono::Security::Cryptography::MD5SHA1
