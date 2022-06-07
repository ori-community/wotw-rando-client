#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinInsideZoneCondition {
    IL2CPP_REGISTER_METHOD(0x0100F230, bool, Validate, (app::SeinInsideZoneCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinInsideZoneCondition * this_ptr))
}
