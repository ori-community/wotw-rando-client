#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SmartInput::CachedAxisInput {
    IL2CPP_REGISTER_METHOD(0x004C87B0, float, AxisValue, (app::CachedAxisInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006CA2B0, void, ctor, (app::CachedAxisInput * this_ptr))
}
