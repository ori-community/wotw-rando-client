#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::LizardGroundChaseBehaviour {
    IL2CPP_REGISTER_METHOD(0x0074B530, float, get_ChasingTime, (app::LizardGroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074B540, void, set_ChasingTime, (app::LizardGroundChaseBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01104710, app::Vector3, get_TargetPostion, (app::LizardGroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00689CC0, float, get_ChaseDirection, (app::LizardGroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01104910, void, set_ChaseDirection, (app::LizardGroundChaseBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x011049E0, void, OnEnter, (app::LizardGroundChaseBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01104BD0, void, RestartTarget, (app::LizardGroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01104E00, void, AssignLocomotionData, (app::LizardGroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01105280, app::BehaviourStatus__Enum, OnExecute, (app::LizardGroundChaseBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011055A0, bool, CheckMovementBehaviourEndCondition, (app::LizardGroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01105620, void, OnDrawGizmos, (app::LizardGroundChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01016970, void, OnExit, (app::LizardGroundChaseBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01105890, bool, IsBlockingInterruption, (app::LizardGroundChaseBehaviour * this_ptr, app::EntityDamageEvent * damage_event, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason))
    IL2CPP_REGISTER_METHOD(0x01105900, void, ctor, (app::LizardGroundChaseBehaviour * this_ptr))
}
