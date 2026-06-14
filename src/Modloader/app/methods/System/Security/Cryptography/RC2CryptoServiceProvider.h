#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ICryptoTransform.h>
#include <Modloader/app/structs/RC2CryptoServiceProvider.h>

namespace app::classes::System::Security::Cryptography::RC2CryptoServiceProvider {
    IL2CPP_REGISTER_METHOD(0x028DE660, void, ctor, app::RC2CryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_EffectiveKeySize, app::RC2CryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028DE820, void, set_EffectiveKeySize, app::RC2CryptoServiceProvider* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_UseSalt, app::RC2CryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_UseSalt, app::RC2CryptoServiceProvider* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(
        0x028DE8F0,
        app::ICryptoTransform*,
        CreateEncryptor,
        app::RC2CryptoServiceProvider* this_ptr,
        app::Byte__Array* rgb_key,
        app::Byte__Array* rgb_i_v
    )
    IL2CPP_REGISTER_METHOD(
        0x028DEAA0,
        app::ICryptoTransform*,
        CreateDecryptor,
        app::RC2CryptoServiceProvider* this_ptr,
        app::Byte__Array* rgb_key,
        app::Byte__Array* rgb_i_v
    )
    IL2CPP_REGISTER_METHOD(0x028DEC50, void, GenerateKey, app::RC2CryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028DED30, void, GenerateIV, app::RC2CryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028DEE00, void, cctor, )
} // namespace app::classes::System::Security::Cryptography::RC2CryptoServiceProvider
