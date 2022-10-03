#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LaserShooterShieldAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x00F210E0, void, OnEntityInitialized, (app::LaserShooterShieldAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F21180, void, OnEnter, (app::LaserShooterShieldAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F211C0, void, OnExit, (app::LaserShooterShieldAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F21220, app::BehaviourStatus__Enum, OnExecute, (app::LaserShooterShieldAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F21320, void, ChangeState, (app::LaserShooterShieldAttackBehaviour * this_ptr, app::LaserShooterShieldAttackBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F217E0, void, UpdateAnticPull, (app::LaserShooterShieldAttackBehaviour * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00F21A60, void, UpdateAnticHold, (app::LaserShooterShieldAttackBehaviour * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00F21AB0, void, UpdateAnticShooting, (app::LaserShooterShieldAttackBehaviour * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00F21AD0, void, ApplyOscilation, (app::LaserShooterShieldAttackBehaviour * this_ptr, float strength))
    IL2CPP_REGISTER_METHOD(0x00F21C60, void, ctor, (app::LaserShooterShieldAttackBehaviour * this_ptr))
} // namespace app::classes::LaserShooterShieldAttackBehaviour
