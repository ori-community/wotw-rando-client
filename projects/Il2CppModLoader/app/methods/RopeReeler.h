#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RopeReeler {
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_LastLinkPercentage, (app::RopeReeler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_LastLinkPercentage, (app::RopeReeler * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0136CC90, void, ResetReel, (app::RopeReeler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136CFE0, void, ReelIn, (app::RopeReeler * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x0136D9F0, bool, ReelOut, (app::RopeReeler * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, (app::RopeReeler * this_ptr))
}
