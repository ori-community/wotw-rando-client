#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossFinalComboBehaviour {
    IL2CPP_REGISTER_METHOD(0x0068A180, bool, CanSpawnSeekers, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01396CD0, app::StateMachine_2*, get_StateMachine, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176CE70, app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet*, get_States, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176CE80, void, OnEntityInitialized, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176DB20, void, OnEnter, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0176DCB0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0176DF20, void, OnExit, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0176DF60, void, ModifyDesiredDamageDirectionMode, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr, app::DamageDealer_DamageDirectionMode__Enum* mode))
    IL2CPP_REGISTER_METHOD(0x0176DFC0, bool, CanTakeDamage, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176E000, app::Vector3, RandomOffsetPosition, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176E320, void, UpdateShooting, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176E4C0, void, Shoot, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176E890, app::Projectile*, SpawnProjectile, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr, app::Vector2 shoot_point, app::Vector3 shoot_velocity, float gravity, float damage, app::ProjectileSpawner* spawner))
    IL2CPP_REGISTER_METHOD(0x0176EAC0, app::Enum__Array*, GetEntries, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176EB60, app::Enum, Evaluate, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176EC00, void, ctor, (app::PetrifiedOwlBossFinalComboBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFinalComboBehaviour
