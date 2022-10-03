#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::DESCryptoServiceProvider {
    IL2CPP_REGISTER_METHOD(0x020D1750, void, ctor, (app::DESCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04702AB8, DESCryptoServiceProvider__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020D18E0, app::ICryptoTransform*, CreateEncryptor, (app::DESCryptoServiceProvider * this_ptr, app::Byte__Array* rgb_key, app::Byte__Array* rgb_i_v))
    IL2CPP_REGISTER_METHODINFO(0x04787000, DESCryptoServiceProvider_CreateEncryptor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020D1B40, app::ICryptoTransform*, CreateDecryptor, (app::DESCryptoServiceProvider * this_ptr, app::Byte__Array* rgb_key, app::Byte__Array* rgb_i_v))
    IL2CPP_REGISTER_METHODINFO(0x04720C38, DESCryptoServiceProvider_CreateDecryptor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020D1DA0, void, GenerateKey, (app::DESCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D1F20, void, GenerateIV, (app::DESCryptoServiceProvider * this_ptr))
} // namespace app::classes::System::Security::Cryptography::DESCryptoServiceProvider
