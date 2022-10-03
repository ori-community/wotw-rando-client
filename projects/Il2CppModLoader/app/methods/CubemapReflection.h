#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CubemapReflection {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (app::CubemapReflection * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x00DB9640, void, SetProperties, (app::CubemapReflection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB97F0, void, ctor, (app::CubemapReflection * this_ptr))
} // namespace app::classes::CubemapReflection
