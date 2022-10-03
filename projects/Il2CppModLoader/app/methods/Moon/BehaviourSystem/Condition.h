#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::Condition {
    IL2CPP_REGISTER_METHOD(0x01E16610, app::String*, get_Info, (app::Condition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300B0E0, app::String*, get_SummaryInfo, (app::Condition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300B190, bool, CheckCondition, (app::Condition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CB75E0, void, ctor, (app::Condition * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::Condition
