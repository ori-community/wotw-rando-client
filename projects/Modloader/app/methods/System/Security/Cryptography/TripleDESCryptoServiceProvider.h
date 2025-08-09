#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ICryptoTransform.h>
#include <Modloader/app/structs/TripleDESCryptoServiceProvider.h>

namespace app::classes::System::Security::Cryptography::TripleDESCryptoServiceProvider {
    IL2CPP_REGISTER_METHOD(0x01E12E70, void, ctor, app::TripleDESCryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01E13000,
        app::ICryptoTransform*,
        CreateEncryptor,
        app::TripleDESCryptoServiceProvider* this_ptr,
        app::Byte__Array* rgb_key,
        app::Byte__Array* rgb_i_v
    )
    IL2CPP_REGISTER_METHOD(
        0x01E131F0,
        app::ICryptoTransform*,
        CreateDecryptor,
        app::TripleDESCryptoServiceProvider* this_ptr,
        app::Byte__Array* rgb_key,
        app::Byte__Array* rgb_i_v
    )
    IL2CPP_REGISTER_METHOD(0x01E133E0, void, GenerateKey, app::TripleDESCryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E13530, void, GenerateIV, app::TripleDESCryptoServiceProvider* this_ptr)
} // namespace app::classes::System::Security::Cryptography::TripleDESCryptoServiceProvider
