#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/SeinChargeShotSpell.h>
#include <Modloader/app/structs/SeinChargeShotSpell_State__Enum.h>

namespace app::classes::SeinChargeShotSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_PlatformMovement, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A53DA0, void, OnSetReferenceToSein, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A54090, void, OnDestroy, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A543F0,
        void,
        ModifyGravityPlatformMovementSettings,
        app::SeinChargeShotSpell* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00A54420, void, OnExit, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A54430, void, Start, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A54570, bool, get_IsStatePerforming, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A54580, void, UpdateCharacterState, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A54BF0, void, UpdateNormalState, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A54570, bool, KeepPlayingAnimation, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A553C0, bool, KeepPlayingRecoilAnimation, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A55480, void, UpdatePreChargeState, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A556D0, void, UpdatePreAirShotState, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A55800, void, UpdateAirShot, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A558D0, void, UpdateChargingState, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A55C50, void, UpdateFullyChargedState, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A55CC0, void, ChangeState, app::SeinChargeShotSpell* this_ptr, app::SeinChargeShotSpell_State__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x00A55FC0, void, UpdateProjectile, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A566B0,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinChargeShotSpell* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00A56700, void, InstantiateProjectile, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A56A30, bool, TestScatterShotShard, app::SeinChargeShotSpell* this_ptr, int32_t* count, float* interval, bool* split_damage)
    IL2CPP_REGISTER_METHOD(0x00A56B60, void, ReleaseProjectile, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A57350, void, ReleaseProjectileSingle, app::SeinChargeShotSpell* this_ptr, float angle_offset)
    IL2CPP_REGISTER_METHOD(0x00A57830, float, GetCooldown, app::SeinChargeShotSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A57850, void, ctor, app::SeinChargeShotSpell* this_ptr)
} // namespace app::classes::SeinChargeShotSpell
