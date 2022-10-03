#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossFeatherFlurryBehaviour {
    IL2CPP_REGISTER_METHOD(0x01763DD0, app::Vector3, get_AttackPosition, (app::PetrifiedOwlBossFeatherFlurryBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01763F60, void, CopyData, (app::PetrifiedOwlBossFeatherFlurryBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x017640A0, void, InitializeCancellableController, (app::PetrifiedOwlBossFeatherFlurryBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017640F0, void, OnEnter, (app::PetrifiedOwlBossFeatherFlurryBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossFeatherFlurryBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01764520, void, OnExit, (app::PetrifiedOwlBossFeatherFlurryBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01764800, void, OnShootEvent, (app::PetrifiedOwlBossFeatherFlurryBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04760510, PetrifiedOwlBossFeatherFlurryBehaviour_OnShootEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01764AB0, void, SpawnFlurryCone, (int32_t total_proj, int32_t uniform_distributed_proj, app::Vector3 origin, app::Vector3 target, app::Vector3 left_bound, app::Vector3 right_bound, app::Vector2 speed_range, float gravity, float damage, app::ProjectileSpawner* spawner))
    IL2CPP_REGISTER_METHOD(0x01765130, app::Projectile*, SpawnProjectile, (app::Vector2 shoot_point, app::Vector3 shoot_velocity, app::ProjectileSpawner* spawner, float gravity, float damage))
    IL2CPP_REGISTER_METHOD(0x01765350, app::Enum__Array*, GetEntries, (app::PetrifiedOwlBossFeatherFlurryBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017653F0, app::Enum, Evaluate, (app::PetrifiedOwlBossFeatherFlurryBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossFeatherFlurryBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01765490, void, ctor, (app::PetrifiedOwlBossFeatherFlurryBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFeatherFlurryBehaviour
