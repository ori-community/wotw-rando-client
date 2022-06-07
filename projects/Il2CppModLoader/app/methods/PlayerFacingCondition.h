#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayerFacingCondition {
    IL2CPP_REGISTER_METHOD(0x0140EB90, bool, Validate, (app::PlayerFacingCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlayerFacingCondition * this_ptr))
}
