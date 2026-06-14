#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/LocomotionAirMoveBehaviour.h>
#include <Modloader/app/structs/LocomotionAirMoveTimelineBehaviour.h>
#include <Modloader/app/structs/LocomotionGroundMoveBehaviour.h>
#include <Modloader/app/structs/LocomotionVolumeMoveTimelineBehaviour.h>
#include <Modloader/app/structs/MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_.h>
#include <Modloader/app/structs/SkeetoAirMoveBehaviour.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_ {
    IL2CPP_REGISTER_METHOD(0x01584050, app::LocomotionAirMoveBehaviour*, GetValueOfType_1, app::MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01584050,
        app::LocomotionAirMoveTimelineBehaviour*,
        GetValueOfType_2,
        app::MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01584050,
        app::LocomotionGroundMoveBehaviour*,
        GetValueOfType_3,
        app::MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02AF7950, void, PopulateFromChildren, app::MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_* this_ptr, app::Transform* parent)
    IL2CPP_REGISTER_METHOD(0x02AF78F0, app::EntityLocomotionTask*, GetValue, app::MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02AF7920, int32_t, get_Count, app::MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AF7B00, void, ctor, app::MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01584050, app::SkeetoAirMoveBehaviour*, GetValueOfType_4, app::MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01584050,
        app::LocomotionVolumeMoveTimelineBehaviour*,
        GetValueOfType_5,
        app::MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_* this_ptr
    )
} // namespace app::classes::MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_
