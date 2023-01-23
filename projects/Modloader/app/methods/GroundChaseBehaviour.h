#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/GroundChaseBehaviour.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>

namespace app::classes::GroundChaseBehaviour {
    IL2CPP_REGISTER_METHOD(0x0064D930, app::Vector3, get_TargetPosition, (app::GroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064D950, void, set_TargetPosition, (app::GroundChaseBehaviour * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x0074AB10, bool, get_UsePredictedOriPosition, (app::GroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074AB20, void, set_UsePredictedOriPosition, (app::GroundChaseBehaviour * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0108CEB0, bool, get_ClampPredictedPosition, (app::GroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0108CEC0, void, set_ClampPredictedPosition, (app::GroundChaseBehaviour * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00B32900, float, get_TraversalSpeed, (app::GroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE09F0, void, set_TraversalSpeed, (app::GroundChaseBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00623240, float, get_NearTargetTraversalSpeed, (app::GroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623250, void, set_NearTargetTraversalSpeed, (app::GroundChaseBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_LookAtTargetAfterArrive, (app::GroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_LookAtTargetAfterArrive, (app::GroundChaseBehaviour * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0108CED0, float, get_EffectiveTraversalSpeed, (app::GroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FDD60, float, get_ChasingTime, (app::GroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0108D0E0, void, set_ChasingTime, (app::GroundChaseBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0108D0F0, app::Vector3, get_m_targetPos, (app::GroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0108D4B0, void, OnExecute, (app::GroundChaseBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x0108D610, void, AssignLocomotionData, (app::GroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0108D6C0, void, OnUpdateBehaviour, (app::GroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0108D9C0, void, CheckMovementBehaviourEndCondition, (app::GroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0108DAA0, void, CheckArriveTargetEndCondition, (app::GroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0108DB50, void, UpdateNearbyBounds, (app::GroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0108DCF0, void, OnEndBehaviour, (app::GroundChaseBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::GroundChaseBehaviour * this_ptr))
} // namespace app::classes::GroundChaseBehaviour
