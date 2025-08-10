#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Aes.h>
#include <Modloader/app/structs/AesTransform.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>

namespace app::classes::System::Security::Cryptography::AesTransform {
    IL2CPP_REGISTER_METHOD(0x02FC9430, void, ctor, app::AesTransform* this_ptr, app::Aes* algo, bool encryption, app::Byte__Array* key, app::Byte__Array* iv)
    IL2CPP_REGISTER_METHOD(0x02FC9D60, void, ECB, app::AesTransform* this_ptr, app::Byte__Array* input, app::Byte__Array* output)
    IL2CPP_REGISTER_METHOD(0x02FC9D90, uint32_t, SubByte, app::AesTransform* this_ptr, uint32_t a)
    IL2CPP_REGISTER_METHOD(
        0x02FC9F30,
        void,
        Encrypt128,
        app::AesTransform* this_ptr,
        app::Byte__Array* indata,
        app::Byte__Array* outdata,
        app::UInt32__Array* ekey
    )
    IL2CPP_REGISTER_METHOD(
        0x02FCDF70,
        void,
        Decrypt128,
        app::AesTransform* this_ptr,
        app::Byte__Array* indata,
        app::Byte__Array* outdata,
        app::UInt32__Array* ekey
    )
    IL2CPP_REGISTER_METHOD(0x02FD1FB0, void, cctor, )
} // namespace app::classes::System::Security::Cryptography::AesTransform
