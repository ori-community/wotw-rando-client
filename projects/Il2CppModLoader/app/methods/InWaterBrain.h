#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::InWaterBrain {
    IL2CPP_REGISTER_METHOD(0x00628470, app::Enum__Array *, GetEntries, (app::InWaterBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00628500, app::Enum, Evaluate, (app::InWaterBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::InWaterBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::InWaterBrain * this_ptr))
}
