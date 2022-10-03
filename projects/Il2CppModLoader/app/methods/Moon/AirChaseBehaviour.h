#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::AirChaseBehaviour {
    IL2CPP_REGISTER_METHOD(0x013334C0, float, get_EffectiveTraversalSpeed, (app::AirChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01256740, float, get_ChasingTime, (app::AirChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01256750, void, set_ChasingTime, (app::AirChaseBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01202540, bool, get_HasLineOfSight, (app::AirChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01202550, void, set_HasLineOfSight, (app::AirChaseBehaviour * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x013336E0, app::Vector3, get_TargetPos, (app::AirChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01333BD0, void, OnEnter, (app::AirChaseBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01333CB0, void, AssignLocomotionData, (app::AirChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01333DB0, app::BehaviourStatus__Enum, OnExecute, (app::AirChaseBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01334110, bool, CheckMovementBehaviourEndCondition, (app::AirChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01334270, bool, CheckArriveTargetEndCondition, (app::AirChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01334320, void, UpdateNearbyBounds, (app::AirChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013344C0, void, OnExit, (app::AirChaseBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x013344D0, void, ctor, (app::AirChaseBehaviour * this_ptr))
} // namespace app::classes::Moon::AirChaseBehaviour
