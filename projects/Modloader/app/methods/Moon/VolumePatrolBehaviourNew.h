#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::VolumePatrolBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x002FBD30, void, SetPatrolPointPredicate, (app::VolumePatrolBehaviourNew * this_ptr, app::Predicate_1_UnityEngine_Vector3_* predicate))
    IL2CPP_REGISTER_METHOD(0x011A20E0, void, OnEnter, (app::VolumePatrolBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011A2300, app::BehaviourStatus__Enum, OnExecute, (app::VolumePatrolBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011A25E0, bool, KeepMoving, (app::VolumePatrolBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011A2830, bool, PickNextPoint, (app::VolumePatrolBehaviourNew * this_ptr, app::Vector2* target))
    IL2CPP_REGISTER_METHOD(0x011A2AB0, void, SetNextPoint, (app::VolumePatrolBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011A2BC0, app::BehaviourStatus__Enum, OnChangePatrolPoint, (app::VolumePatrolBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011A2CD0, void, OnExit, (app::VolumePatrolBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011A2D80, bool, PointInsideSphere, (app::VolumePatrolBehaviourNew * this_ptr, app::Vector3 point, app::Vector3 center, float radius))
    IL2CPP_REGISTER_METHOD(0x011A2E70, void, ctor, (app::VolumePatrolBehaviourNew * this_ptr))
} // namespace app::classes::Moon::VolumePatrolBehaviourNew
