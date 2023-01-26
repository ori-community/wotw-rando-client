#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/GroundPatrolWithDirectionBehaviourNew.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Moon::GroundPatrolWithDirectionBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x01494FE0, app::Vector3, get_PatrolOrigin, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01495030, app::Vector3, get_TargetPosition, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01495080, app::Vector2, get_MovingDirection, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014952A0, app::Vector2, get_MovingDirectionRotated, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014953E0, void, OnEntityInitialized, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01495480, void, OnEnter, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x014956F0, app::BehaviourStatus__Enum, OnExecute, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01495890, void, OnExit, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01495940, void, UpdateDirection, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01495A80, void, StartIdle, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01495C20, app::BehaviourStatus__Enum, UpdateIdle, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01495E60, void, StartMoving, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01496000, void, UpdateMoving, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014962F0, bool, KeepMoving, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01496C30, app::BehaviourStatus__Enum, ChangePatrolDirection, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01496C60, bool, PointInsideSphere, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr, app::Vector3 point, app::Vector3 center, float radius))
    IL2CPP_REGISTER_METHOD(0x00A9AA40, bool, ShouldFollowTarget, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01496D50, void, ctor, (app::GroundPatrolWithDirectionBehaviourNew * this_ptr))
} // namespace app::classes::Moon::GroundPatrolWithDirectionBehaviourNew
