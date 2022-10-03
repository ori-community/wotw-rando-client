#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossRainOfFeathersBehaviour {
    IL2CPP_REGISTER_METHOD(0x0177ADE0, float, get_TimeBetweenProjectiles, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A64220, app::StateMachine_2*, get_StateMachine, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FDE00, app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet*, get_States, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177AE00, void, CopyData, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x017744F0, void, InitializeCancellableController, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177AF00, void, OnEntityInitialized, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177B350, void, OnEnter, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0177B560, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0177B730, void, OnExit, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0177B910, void, UpdateShooting, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177B9E0, app::Vector3, RandomOffScreenPosition, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177C080, app::Vector3, RandomOffsetPosition, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177C3B0, void, OnShootEvent, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477CD78, PetrifiedOwlBossRainOfFeathersBehaviour_OnShootEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0177C3C0, void, Shoot, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177C660, app::Projectile*, SpawnProjectile, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr, app::Vector2 shoot_point, app::Vector3 shoot_velocity, app::ProjectileSpawner* spawner))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShoulStopAttack, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177C9E0, void, ctor, (app::PetrifiedOwlBossRainOfFeathersBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossRainOfFeathersBehaviour
