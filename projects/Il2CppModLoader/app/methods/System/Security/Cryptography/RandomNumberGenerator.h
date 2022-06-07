#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::Cryptography::RandomNumberGenerator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RandomNumberGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028EE2B0, app::RandomNumberGenerator *, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x028EE3F0, app::RandomNumberGenerator *, Create_2, (app::String * rng_name))
    IL2CPP_REGISTER_METHOD(0x028EE4D0, void, Dispose_1, (app::RandomNumberGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose_2, (app::RandomNumberGenerator * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x028EE580, void, GetBytes, (app::RandomNumberGenerator * this_ptr, app::Byte__Array * data, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04796620, RandomNumberGenerator_GetBytes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028EE780, void, GetNonZeroBytes, (app::RandomNumberGenerator * this_ptr, app::Byte__Array * data))
    IL2CPP_REGISTER_METHODINFO(0x0472A3A0, RandomNumberGenerator_GetNonZeroBytes__MethodInfo)
}
