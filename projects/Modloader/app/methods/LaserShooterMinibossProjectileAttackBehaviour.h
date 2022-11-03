#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LaserShooterMinibossProjectileAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x00F1D150, void, OnEnter, (app::LaserShooterMinibossProjectileAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F1D250, void, OnExit, (app::LaserShooterMinibossProjectileAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F1D2F0, app::BehaviourStatus__Enum, OnExecute, (app::LaserShooterMinibossProjectileAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F1D540, void, OnShoot, (app::LaserShooterMinibossProjectileAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1D990, float, GetAngleToTarget, (app::LaserShooterMinibossProjectileAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1DBA0, void, ctor, (app::LaserShooterMinibossProjectileAttackBehaviour * this_ptr))
} // namespace app::classes::LaserShooterMinibossProjectileAttackBehaviour
