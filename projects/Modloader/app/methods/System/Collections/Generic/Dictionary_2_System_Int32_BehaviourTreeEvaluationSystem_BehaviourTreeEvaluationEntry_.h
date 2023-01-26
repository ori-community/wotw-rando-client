#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry_.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry_ * this_ptr, int32_t key, app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry** value))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry_ * this_ptr, int32_t key, app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry* value))
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, (app::Dictionary_2_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry*, get_Item, (app::Dictionary_2_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry_
