#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::ProbabilityCondition {
    IL2CPP_REGISTER_METHOD(0x0300F1F0, app::String*, get_Info, (app::ProbabilityCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300F290, bool, OnCheck, (app::ProbabilityCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300F4A0, void, ctor, (app::ProbabilityCondition * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::ProbabilityCondition
