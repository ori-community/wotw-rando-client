#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinMaxHealthValueProvider {
    IL2CPP_REGISTER_METHOD(0x008A2D00, float, GetFloatValue, (app::SeinMaxHealthValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::SeinMaxHealthValueProvider * this_ptr))
}
