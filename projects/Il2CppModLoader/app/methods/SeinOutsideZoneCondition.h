#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinOutsideZoneCondition {
    IL2CPP_REGISTER_METHOD(0x008AFD90, bool, Validate, (app::SeinOutsideZoneCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinOutsideZoneCondition * this_ptr))
}
