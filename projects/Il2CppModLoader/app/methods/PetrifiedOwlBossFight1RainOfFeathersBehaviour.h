#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedOwlBossFight1RainOfFeathersBehaviour {
    IL2CPP_REGISTER_METHOD(0x017694F0, float, get_TimeBetweenProjectiles, (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01769510, void, CopyData, (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour * other))
    IL2CPP_REGISTER_METHOD(0x01765700, void, InitializeHitReactionController, (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017695F0, void, OnEnter, (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01769850, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x017699A0, void, OnExit, (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01769B80, void, UpdateShooting, (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01769C50, app::Vector3, RandomOffScreenPosition, (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176A2F0, app::Vector3, RandomOffsetPosition, (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176A620, void, OnShootEvent, (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477D510, PetrifiedOwlBossFight1RainOfFeathersBehaviour_OnShootEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0176A630, void, Shoot, (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176A8D0, app::Projectile *, SpawnProjectile, (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour * this_ptr, app::Vector2 shoot_point, app::Vector3 shoot_velocity, app::ProjectileSpawner * spawner))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShoulStopAttack, (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176AC50, void, ctor, (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour * this_ptr))
}
