#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PositionCondition {
    IL2CPP_REGISTER_METHOD(0x00C68860, bool, Validate, (app::PositionCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PositionCondition * this_ptr))
}
