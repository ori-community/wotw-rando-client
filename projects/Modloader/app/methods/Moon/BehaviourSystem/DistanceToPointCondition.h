#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DistanceToPointCondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BehaviourSystem::DistanceToPointCondition {
    IL2CPP_REGISTER_METHOD(0x0300D7B0, app::String*, get_Info, app::DistanceToPointCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0300D890, bool, OnCheck, app::DistanceToPointCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0300DB20, void, ctor, app::DistanceToPointCondition* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::DistanceToPointCondition
