#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::Rfc2898DeriveBytes {
    IL2CPP_REGISTER_METHOD(0x028EE7D0, void, ctor_1, (app::Rfc2898DeriveBytes * this_ptr, app::String* password, int32_t salt_size))
    IL2CPP_REGISTER_METHOD(0x028EE7F0, void, ctor_2, (app::Rfc2898DeriveBytes * this_ptr, app::String* password, int32_t salt_size, int32_t iterations))
    IL2CPP_REGISTER_METHODINFO(0x04706A78, Rfc2898DeriveBytes__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028EEB20, void, ctor_3, (app::Rfc2898DeriveBytes * this_ptr, app::String* password, app::Byte__Array* salt))
    IL2CPP_REGISTER_METHOD(0x028EEB40, void, ctor_4, (app::Rfc2898DeriveBytes * this_ptr, app::String* password, app::Byte__Array* salt, int32_t iterations))
    IL2CPP_REGISTER_METHOD(0x028EECE0, void, ctor_5, (app::Rfc2898DeriveBytes * this_ptr, app::Byte__Array* password, app::Byte__Array* salt, int32_t iterations))
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_IterationCount, (app::Rfc2898DeriveBytes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028EEE60, void, set_IterationCount, (app::Rfc2898DeriveBytes * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04764F80, Rfc2898DeriveBytes_set_IterationCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028EEF40, app::Byte__Array*, get_Salt, (app::Rfc2898DeriveBytes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028EF080, void, set_Salt, (app::Rfc2898DeriveBytes * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHODINFO(0x0475C618, Rfc2898DeriveBytes_set_Salt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028EF250, app::Byte__Array*, GetBytes, (app::Rfc2898DeriveBytes * this_ptr, int32_t cb))
    IL2CPP_REGISTER_METHODINFO(0x04787318, Rfc2898DeriveBytes_GetBytes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028EF410, void, Reset, (app::Rfc2898DeriveBytes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028EF420, void, Dispose, (app::Rfc2898DeriveBytes * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x028EF4F0, void, Initialize, (app::Rfc2898DeriveBytes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028EF5B0, app::Byte__Array*, Func, (app::Rfc2898DeriveBytes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028EF9D0, app::Byte__Array*, CryptDeriveKey, (app::Rfc2898DeriveBytes * this_ptr, app::String* algname, app::String* alghashname, int32_t key_size, app::Byte__Array* rgb_i_v))
    IL2CPP_REGISTER_METHODINFO(0x04762B30, Rfc2898DeriveBytes_CryptDeriveKey__MethodInfo)
} // namespace app::classes::System::Security::Cryptography::Rfc2898DeriveBytes
