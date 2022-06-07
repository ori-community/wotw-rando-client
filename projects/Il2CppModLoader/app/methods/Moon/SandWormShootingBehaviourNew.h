#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::SandWormShootingBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x00EC3C60, void, OnEnter, (app::SandWormShootingBehaviourNew * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x006B1960, void, ShootingEventEnd, (app::SandWormShootingBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04740DF8, SandWormShootingBehaviourNew_ShootingEventEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EC4180, void, OnExit, (app::SandWormShootingBehaviourNew * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00EC44D0, app::BehaviourStatus__Enum, OnExecute, (app::SandWormShootingBehaviourNew * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00EC4A20, void, SpawnProjectile_1, (app::SandWormShootingBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047786A8, SandWormShootingBehaviourNew_SpawnProjectile__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EC4D80, app::Vector2, get_ProjectilePeak, (app::SandWormShootingBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EC50A0, app::Vector3, get_ProjectileSpawnerPositionToPlayerPosition, (app::SandWormShootingBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EC52B0, void, SpawnProjectile_2, (app::SandWormShootingBehaviourNew * this_ptr, app::Vector3 speed, float projectile_gravity))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::SandWormShootingBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EC5470, void, ctor, (app::SandWormShootingBehaviourNew * this_ptr))
}
