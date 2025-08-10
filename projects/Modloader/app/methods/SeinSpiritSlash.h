#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/ISpiritSlashAttackable.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/SeinSpiritSlash.h>
#include <Modloader/app/structs/SeinSpiritSlash_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinSpiritSlash {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6D210, bool, get_IsStatePerforming, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6D210, bool, get_IsAttacking, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6D220, bool, get_OverrideSpriteRotation, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6D240, app::Vector3, get_SeinPosition, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6D2B0, app::Vector3, get_GetTargetPosition, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6D5F0, bool, get_HasStringerShardEquipped, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6D6B0, bool, get_SpriteMirrorLock, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6D6C0, void, set_SpriteMirrorLock, app::SeinSpiritSlash* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00A6D780, void, OnSetReferenceToSein, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6D860, void, Start, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6DB60, void, OnDestroy, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A6DE70,
        void,
        ModifyGravityPlatformMovementSettings,
        app::SeinSpiritSlash* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00A6DEA0, void, ChangeState, app::SeinSpiritSlash* this_ptr, app::SeinSpiritSlash_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x00A6DF20, bool, CanPerformStinger, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6DFD0, void, BeginAttack, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6D210, bool, ShouldAnimationKeepPlaying, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6E7C0, void, UpdateCharacterState, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6E940, void, UpdateClosestAttackable, app::SeinSpiritSlash* this_ptr, bool both_directions)
    IL2CPP_REGISTER_METHOD(0x00A6EA50, void, UpdateIdle, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6EB40, bool, get_OnAttackButtonPressed, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6EC40, void, LimitSpeedNearTarget, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6EF30, void, UpdateSlashAngle, app::SeinSpiritSlash* this_ptr, bool instant)
    IL2CPP_REGISTER_METHOD(0x00A6F390, void, UpdateAttacking, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A701B0, bool, CanLightAttack, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A706F0, void, DealDamage, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A71100, void, OnResetAirLimits, app::SeinSpiritSlash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A71120, app::ISpiritSlashAttackable*, FindClosestAttackHandler, app::SeinSpiritSlash* this_ptr, bool both_directions)
    IL2CPP_REGISTER_METHOD(0x00A71810, void, ctor, app::SeinSpiritSlash* this_ptr)
} // namespace app::classes::SeinSpiritSlash
