#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CinematicCharacterAnimator_Character__Enum.h>
#include <Modloader/app/structs/CinematicCharacterAnimator_FacingDirection__Enum.h>
#include <Modloader/app/structs/LegacyCinematicCharacterAnimator_Character__Enum.h>
#include <Modloader/app/structs/LegacyCinematicCharacterAnimator_FacingDirection__Enum.h>

namespace app::classes::Conversions {
    IL2CPP_REGISTER_METHOD(
        0x011F6220,
        app::CinematicCharacterAnimator_Character__Enum,
        AsCharacter,
        app::LegacyCinematicCharacterAnimator_Character__Enum character
    )
    IL2CPP_REGISTER_METHOD(
        0x011F6310,
        app::CinematicCharacterAnimator_FacingDirection__Enum,
        AsFacingDirection,
        app::LegacyCinematicCharacterAnimator_FacingDirection__Enum direction
    )
} // namespace app::classes::Conversions
