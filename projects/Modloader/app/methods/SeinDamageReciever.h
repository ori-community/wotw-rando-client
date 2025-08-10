#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Damage_.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CharacterGravity.h>
#include <Modloader/app/structs/CharacterInstantStop.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/EnemyEntity.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Ku.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SeinDamageReceiverPuppet.h>
#include <Modloader/app/structs/SeinDamageReciever.h>
#include <Modloader/app/structs/SeinHealthController.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinDamageReciever {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E4180, app::SeinDamageReceiverPuppet*, get_Puppet, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_CharacterLeftRightMovement, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E4240, app::CharacterGravity*, get_CharacterGravity, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E4270, app::CharacterInstantStop*, get_CharacterInstantStop, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E42A0, app::SeinHealthController*, get_HealthController, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E42D0, app::Renderer*, get_Sprite, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E4310, app::Ku*, get_Ku, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E43A0, bool, get_IsRidingKu, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E44F0, bool, get_IsDrowning, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E4500, void, set_IsDrowning, app::SeinDamageReciever* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x006E4510, bool, get_KickbackEnabled, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E4520, void, set_KickbackEnabled, app::SeinDamageReciever* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x006E4530, void, add_OnTakeDamage, app::SeinDamageReciever* this_ptr, app::Action_1_Damage_* value)
    IL2CPP_REGISTER_METHOD(0x006E4620, void, remove_OnTakeDamage, app::SeinDamageReciever* this_ptr, app::Action_1_Damage_* value)
    IL2CPP_REGISTER_METHOD(0x006E4710, void, add_OnKickback, app::SeinDamageReciever* this_ptr, app::Action_1_Damage_* value)
    IL2CPP_REGISTER_METHOD(0x006E4800, void, remove_OnKickback, app::SeinDamageReciever* this_ptr, app::Action_1_Damage_* value)
    IL2CPP_REGISTER_METHOD(0x006E48F0, void, OnAwake, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x006E4B60,
        bool,
        CheckForDamageBeforeMovement,
        app::SeinDamageReciever* this_ptr,
        app::Vector3 direction,
        float distance,
        app::RaycastHit* hit_info
    )
    IL2CPP_REGISTER_METHOD(0x006E4D30, void, Start, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E5210, void, OnDestroy, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E5700, void, OnEnter, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E5760, void, OnExit, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E57C0, bool, IsActiveAndPlaying, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E57E0, void, OnRecieveDamage, app::SeinDamageReciever* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x006E6B80, void, HandleAnimationAndKickback, app::SeinDamageReciever* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(
        0x006E6E60,
        void,
        HandleGroundAnimationAndKickback,
        app::SeinDamageReciever* this_ptr,
        app::Damage* damage,
        bool kickback_enabled,
        float* hurt_timeremaining,
        app::ActiveAnimationHandle* active_animation,
        app::SeinDamageReceiverPuppet* puppet
    )
    IL2CPP_REGISTER_METHOD(0x006E7960, app::Vector2, ComputeSpeedTransfer, app::SeinDamageReciever* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x006E7C90, float, GetAdjustedDamageAmountAfterShards, app::SeinDamageReciever* this_ptr, float amount, app::DamageType__Enum type)
    IL2CPP_REGISTER_METHOD(0x006E7F20, void, HandleDamageBoostShard, app::SeinDamageReciever* this_ptr, app::Damage** damage)
    IL2CPP_REGISTER_METHOD(0x006E80F0, void, HandleCounterstrikeShard, app::SeinDamageReciever* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x006E8A60, void, HandleHardMode, app::SeinDamageReciever* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x006E8B90, void, PerformCounterstrikeEffects, app::SeinDamageReciever* this_ptr, app::EnemyEntity* enemy)
    IL2CPP_REGISTER_METHOD(
        0x006E8E30,
        void,
        PerformCounterstrikeDamage,
        app::SeinDamageReciever* this_ptr,
        app::Damage* damage,
        app::EnemyEntity* enemy,
        app::DamageReceiver* damage_receiver
    )
    IL2CPP_REGISTER_METHOD(0x006E93B0, void, UpdateCharacterState, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E9990, void, UpdateColliderState, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x006E9AD0,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinDamageReciever* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x006E9C40,
        void,
        ModifyGravityPlatformMovementSettings,
        app::SeinDamageReciever* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x006E9D00, void, MakeInvincible, app::SeinDamageReciever* this_ptr, float duration)
    IL2CPP_REGISTER_METHOD(0x006E9DC0, void, MakeInvincibleToEnemies, app::SeinDamageReciever* this_ptr, float duration)
    IL2CPP_REGISTER_METHOD(0x006E9E80, void, MakeInvincibleOnRespawn, app::SeinDamageReciever* this_ptr, float duration)
    IL2CPP_REGISTER_METHOD(0x006E9F40, void, MakeInvincibleToEnemyEntity, app::SeinDamageReciever* this_ptr, app::Entity* entity, float duration)
    IL2CPP_REGISTER_METHOD(0x006E9F50, void, MakeInvincibleToDamageOfType, app::SeinDamageReciever* this_ptr, app::DamageType__Enum damage_type, float duration)
    IL2CPP_REGISTER_METHOD(0x006EA100, void, ResetInviciblity, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006EA110, void, OnRestoreCheckpoint, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006EA340, void, OnLoad, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006EA370, void, Flash, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006EA4C0, app::IEnumerator*, FlashSprite, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006EA610, void, SpriteMaterialTintColor, app::SeinDamageReciever* this_ptr, app::Color color)
    IL2CPP_REGISTER_METHOD(0x006EAA30, void, OnEnable, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006EAA70, bool, get_IsInvinsible, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E1300, bool, ShouldHurtAnimationKeepPlaying, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006EAA90, bool, ShouldHurtAnimationKeepPlayingStartedOnGround, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006EAAE0, void, OnKill, app::SeinDamageReciever* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x006EB700, void, ToggleColliders, app::SeinDamageReciever* this_ptr, bool on)
    IL2CPP_REGISTER_METHOD(0x006EBB20, void, FinishDeathSequence, app::SeinDamageReciever* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x006EC3D0, void, InstantiateDeathEffect, app::SeinDamageReciever* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x006EC8A0, app::IEnumerator*, OnKillRoutine, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006EC9F0, void, OnKillFadeInComplete, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006ECAE0, bool, CanDetonateProjectiles, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006ECB00, void, Serialize, app::SeinDamageReciever* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x006ECB60, bool, get_IsLeached, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006ECB70, app::Vector3, get_LastLeachPosition, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006ECB90, void, ILeachable_StartLeach, app::SeinDamageReciever* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x006ECBB0, void, ILeachable_ReleaseLeach, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006ECC70, void, ILeachable_UpdateLeach, app::SeinDamageReciever* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x006ECC90, bool, get_IsPinned, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006ECCA0, app::Vector3, get_LastPinPosition, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006ECCC0, void, IPinnable_StartPin, app::SeinDamageReciever* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x006ECCE0, void, IPinnable_ReleasePin, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006ECDA0, void, IPinnable_UpdatePin, app::SeinDamageReciever* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x006ECDC0, bool, get_IsRavage, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006ECDD0, void, IPinnable_StartRavage, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006ECDE0, void, IPinnable_EndRavage, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IPinnable_UpdateRavage, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006ECDF0, void, ctor, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::SeinDamageReciever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::SeinDamageReciever* this_ptr)
} // namespace app::classes::SeinDamageReciever
