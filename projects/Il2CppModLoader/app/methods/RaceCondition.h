#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RaceCondition {
    IL2CPP_REGISTER_METHOD(0x00E975D0, bool, Validate, (app::RaceCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04734D90, RaceCondition_Validate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RaceCondition * this_ptr))
} // namespace app::classes::RaceCondition
