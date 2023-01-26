#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Moon_BehaviourSystem_Condition_.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Condition.h>
#include <Modloader/app/structs/ConditionalDecorator.h>
#include <Modloader/app/structs/ConditionalDecorator_ConditionsCheckMode__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_Condition_.h>

namespace app::classes::Moon::BehaviourSystem::ConditionalDecorator {
    IL2CPP_REGISTER_METHOD(0x0300B200, app::String*, get_Info, (app::ConditionalDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300B440, void, add_OnConditionAdded, (app::ConditionalDecorator * this_ptr, app::Action_1_Moon_BehaviourSystem_Condition_* value))
    IL2CPP_REGISTER_METHOD(0x0300B530, void, remove_OnConditionAdded, (app::ConditionalDecorator * this_ptr, app::Action_1_Moon_BehaviourSystem_Condition_* value))
    IL2CPP_REGISTER_METHOD(0x0300B620, void, add_OnConditionRemoved, (app::ConditionalDecorator * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x0300B710, void, remove_OnConditionRemoved, (app::ConditionalDecorator * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_IsDynamic, (app::ConditionalDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00855600, app::ConditionalDecorator_ConditionsCheckMode__Enum, get_CheckMode, (app::ConditionalDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::List_1_Moon_BehaviourSystem_Condition_*, get_Conditions, (app::ConditionalDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300B800, void, AddCondition, (app::ConditionalDecorator * this_ptr, app::Condition* new_condition))
    IL2CPP_REGISTER_METHOD(0x0300B8F0, bool, RemoveCondition, (app::ConditionalDecorator * this_ptr, app::Condition* new_condition))
    IL2CPP_REGISTER_METHOD(0x0300B9E0, app::BehaviourStatus__Enum, OnExecute, (app::ConditionalDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300BB80, bool, EvaluateConditions, (app::ConditionalDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005DA240, bool, ShouldEvaluateEachTick, (app::ConditionalDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300BD10, float, GetUtility, (app::ConditionalDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300BD30, void, PerformSanityCheck, (app::ConditionalDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300BFF0, void, ctor, (app::ConditionalDecorator * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::ConditionalDecorator
