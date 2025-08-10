#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DistanceComparisonCondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BehaviourSystem::DistanceComparisonCondition {
    IL2CPP_REGISTER_METHOD(0x0300D340, app::String*, get_Info, app::DistanceComparisonCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0300D420, bool, OnCheck, app::DistanceComparisonCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0300D790, void, ctor, app::DistanceComparisonCondition* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::DistanceComparisonCondition
