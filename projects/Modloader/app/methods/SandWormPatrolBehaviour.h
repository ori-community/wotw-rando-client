#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SandWormPatrolBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SandWormPatrolBehaviour {
    IL2CPP_REGISTER_METHOD(0x00413160, bool, get_IsWaterWorm, (app::SandWormPatrolBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00413170, void, set_IsWaterWorm, (app::SandWormPatrolBehaviour * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00C1FE20, void, OnEntityInitialized, (app::SandWormPatrolBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1FEF0, void, OnEnter, (app::SandWormPatrolBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C20380, app::BehaviourStatus__Enum, OnExecute, (app::SandWormPatrolBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C20770, bool, PointIsInChaseZone, (app::SandWormPatrolBehaviour * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00C20910, void, ctor, (app::SandWormPatrolBehaviour * this_ptr))
} // namespace app::classes::SandWormPatrolBehaviour
