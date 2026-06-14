#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DistanceToClosestMortarPosition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BehaviourSystem::DistanceToClosestMortarPosition {
    IL2CPP_REGISTER_METHOD(0x00CB5D30, app::String*, get_Info, app::DistanceToClosestMortarPosition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CB5FB0, bool, OnCheck, app::DistanceToClosestMortarPosition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00CB62D0, void, ctor, app::DistanceToClosestMortarPosition* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::DistanceToClosestMortarPosition
