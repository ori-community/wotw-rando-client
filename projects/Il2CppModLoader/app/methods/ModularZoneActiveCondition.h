#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ModularZoneActiveCondition {
    IL2CPP_REGISTER_METHOD(0x013313B0, bool, Validate, (app::ModularZoneActiveCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ModularZoneActiveCondition * this_ptr))
}
