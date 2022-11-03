#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::BooleanCondition {
    IL2CPP_REGISTER_METHOD(0x0300A820, app::String*, get_Info, (app::BooleanCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A8E0, bool, OnCheck, (app::BooleanCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CB75E0, void, ctor, (app::BooleanCondition * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::BooleanCondition
