#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::IsTargetInAreaOfTypeCondition {
    IL2CPP_REGISTER_METHOD(0x00CBA700, app::String *, get_Info, (app::IsTargetInAreaOfTypeCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBA800, bool, OnCheck, (app::IsTargetInAreaOfTypeCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00CB75E0, void, ctor, (app::IsTargetInAreaOfTypeCondition * this_ptr))
}
