#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SkeetoMoveToSemiRandomPositionBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SkeetoMoveToSemiRandomPositionBehaviour {
    IL2CPP_REGISTER_METHOD(0x0075A130, int32_t, get_RandomIndex, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075A210, app::Vector3, get_TargetToAttackPosition, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075A3B0, int32_t, get_RandomIndexOffset, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075A3F0, void, set_RandomIndexOffset, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0075A400, app::SkeetoLocomotion*, get_Locomotion, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075A4E0, void, OnEntityInitialized, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075A7B0, void, ScheduleRaycasts, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075AA90, app::BehaviourStatus__Enum, UpdateJobScheduled, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075B230, void, OnEnter, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0075B3D0, void, OnExit, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00754B80, void, OnWontReachTarget, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075B6F0, void, CalculateTargetOffsets, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075C2D0, bool, TryCalculateTargetPosition, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr, int32_t longtitude_index, int32_t latitude_index, app::Vector3* move_target))
    IL2CPP_REGISTER_METHOD(0x0075C7C0, bool, NoGoZoneOnTheWay, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr, app::Vector3 candidate_position))
    IL2CPP_REGISTER_METHOD(0x0075CB20, app::BehaviourStatus__Enum, OnExecute, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0075CB50, app::BehaviourStatus__Enum, UpdateTraverse, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075CE80, void, OnDrawGizmos, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075D1E0, void, OnDestroy, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075D390, void, ctor, (app::SkeetoMoveToSemiRandomPositionBehaviour * this_ptr))
} // namespace app::classes::SkeetoMoveToSemiRandomPositionBehaviour
