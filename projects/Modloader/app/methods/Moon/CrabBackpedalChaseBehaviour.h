#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CrabBackpedalChaseBehaviour.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>

namespace app::classes::Moon::CrabBackpedalChaseBehaviour {
    IL2CPP_REGISTER_METHOD(0x00CC95D0, float, get_EffectiveTraversalSpeed, (app::CrabBackpedalChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F45C0, float, get_ChasingTime, (app::CrabBackpedalChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F45D0, void, set_ChasingTime, (app::CrabBackpedalChaseBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00CC97F0, app::Vector3, get_m_targetPos, (app::CrabBackpedalChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC98E0, float, get_TargetMoveDirection, (app::CrabBackpedalChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC9A20, void, OnEnter, (app::CrabBackpedalChaseBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CC9CC0, void, AssignLocomotionData, (app::CrabBackpedalChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC9DC0, app::BehaviourStatus__Enum, OnExecute, (app::CrabBackpedalChaseBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CCA170, bool, CheckMovementBehaviourEndCondition, (app::CrabBackpedalChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCA2D0, bool, CheckArriveTargetEndCondition, (app::CrabBackpedalChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCA380, void, UpdateNearbyBounds, (app::CrabBackpedalChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCA520, void, OnExit, (app::CrabBackpedalChaseBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CCA630, void, ctor, (app::CrabBackpedalChaseBehaviour * this_ptr))
} // namespace app::classes::Moon::CrabBackpedalChaseBehaviour
