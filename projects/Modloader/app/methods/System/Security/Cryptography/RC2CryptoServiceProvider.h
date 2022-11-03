#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::RC2CryptoServiceProvider {
    IL2CPP_REGISTER_METHOD(0x028DE660, void, ctor, (app::RC2CryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047702A0, RC2CryptoServiceProvider__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_EffectiveKeySize, (app::RC2CryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028DE820, void, set_EffectiveKeySize, (app::RC2CryptoServiceProvider * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x047056D8, RC2CryptoServiceProvider_set_EffectiveKeySize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_UseSalt, (app::RC2CryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_UseSalt, (app::RC2CryptoServiceProvider * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x028DE8F0, app::ICryptoTransform*, CreateEncryptor, (app::RC2CryptoServiceProvider * this_ptr, app::Byte__Array* rgb_key, app::Byte__Array* rgb_i_v))
    IL2CPP_REGISTER_METHODINFO(0x04753578, RC2CryptoServiceProvider_CreateEncryptor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028DEAA0, app::ICryptoTransform*, CreateDecryptor, (app::RC2CryptoServiceProvider * this_ptr, app::Byte__Array* rgb_key, app::Byte__Array* rgb_i_v))
    IL2CPP_REGISTER_METHODINFO(0x0475F250, RC2CryptoServiceProvider_CreateDecryptor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028DEC50, void, GenerateKey, (app::RC2CryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028DED30, void, GenerateIV, (app::RC2CryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028DEE00, void, cctor, ())
} // namespace app::classes::System::Security::Cryptography::RC2CryptoServiceProvider
