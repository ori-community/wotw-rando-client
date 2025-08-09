#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/GroundPatrolBehaviourNew.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Predicate_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::GroundPatrolBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x01492620, app::Vector3, get_EffectivePatrollOrigin, app::GroundPatrolBehaviourNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD30, void, SetPatrolPointPredicate, app::GroundPatrolBehaviourNew* this_ptr, app::Predicate_1_UnityEngine_Vector3_* predicate)
    IL2CPP_REGISTER_METHOD(0x01492660, void, OnEntityInitialized, app::GroundPatrolBehaviourNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01492830, void, OnEnter, app::GroundPatrolBehaviourNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01492E40, app::BehaviourStatus__Enum, OnExecute, app::GroundPatrolBehaviourNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01493110, void, OnExit, app::GroundPatrolBehaviourNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x014931C0, bool, KeepMoving, app::GroundPatrolBehaviourNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01493450, void, SetNextPoint, app::GroundPatrolBehaviourNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014939E0, app::BehaviourStatus__Enum, OnChangePatrolPoint, app::GroundPatrolBehaviourNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01493AD0, bool, PointInsideSphere, app::GroundPatrolBehaviourNew* this_ptr, app::Vector3 point, app::Vector3 center, float radius)
    IL2CPP_REGISTER_METHOD(0x01493BC0, app::Vector3, ClampToAllowedArea, app::GroundPatrolBehaviourNew* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x01493D80, app::Vector3, CastPositionToGround, app::GroundPatrolBehaviourNew* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x014940E0, void, ctor, app::GroundPatrolBehaviourNew* this_ptr)
} // namespace app::classes::Moon::GroundPatrolBehaviourNew
