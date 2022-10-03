#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::HasAreaMapCondition {
    IL2CPP_REGISTER_METHOD(0x0109D8B0, app::GameWorldArea*, get_CurrentArea, (app::HasAreaMapCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109D8E0, bool, Validate, (app::HasAreaMapCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HasAreaMapCondition * this_ptr))
} // namespace app::classes::HasAreaMapCondition
