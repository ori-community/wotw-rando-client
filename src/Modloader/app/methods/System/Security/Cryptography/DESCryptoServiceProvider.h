#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DESCryptoServiceProvider.h>
#include <Modloader/app/structs/ICryptoTransform.h>

namespace app::classes::System::Security::Cryptography::DESCryptoServiceProvider {
    IL2CPP_REGISTER_METHOD(0x020D1750, void, ctor, app::DESCryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x020D18E0,
        app::ICryptoTransform*,
        CreateEncryptor,
        app::DESCryptoServiceProvider* this_ptr,
        app::Byte__Array* rgb_key,
        app::Byte__Array* rgb_i_v
    )
    IL2CPP_REGISTER_METHOD(
        0x020D1B40,
        app::ICryptoTransform*,
        CreateDecryptor,
        app::DESCryptoServiceProvider* this_ptr,
        app::Byte__Array* rgb_key,
        app::Byte__Array* rgb_i_v
    )
    IL2CPP_REGISTER_METHOD(0x020D1DA0, void, GenerateKey, app::DESCryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020D1F20, void, GenerateIV, app::DESCryptoServiceProvider* this_ptr)
} // namespace app::classes::System::Security::Cryptography::DESCryptoServiceProvider
