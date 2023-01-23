#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GroundChaseBehaviourNew.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>

namespace app::classes::Moon::GroundChaseBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x0148C470, float, get_EffectiveTraversalSpeed, (app::GroundChaseBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070BAF0, float, get_ChasingTime, (app::GroundChaseBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0148C690, void, set_ChasingTime, (app::GroundChaseBehaviourNew * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0148C6A0, app::Vector3, get_m_targetPos, (app::GroundChaseBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0148CB50, void, OnEnter, (app::GroundChaseBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0148CD10, void, AssignLocomotionData, (app::GroundChaseBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0148CDA0, app::BehaviourStatus__Enum, OnExecute, (app::GroundChaseBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0148D100, bool, CheckMovementBehaviourEndCondition, (app::GroundChaseBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01334270, bool, CheckArriveTargetEndCondition, (app::GroundChaseBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0148D260, void, UpdateNearbyBounds, (app::GroundChaseBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0148D400, void, OnExit, (app::GroundChaseBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01105890, bool, IsBlockingInterruption, (app::GroundChaseBehaviourNew * this_ptr, app::EntityDamageEvent* damage_event, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x0148D410, void, ctor, (app::GroundChaseBehaviourNew * this_ptr))
} // namespace app::classes::Moon::GroundChaseBehaviourNew
