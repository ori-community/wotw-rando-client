#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Conversions {
    IL2CPP_REGISTER_METHOD(0x011F6220, app::CinematicCharacterAnimator_Character__Enum, AsCharacter, (app::LegacyCinematicCharacterAnimator_Character__Enum character))
    IL2CPP_REGISTER_METHODINFO(0x04726A40, Conversions_AsCharacter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011F6310, app::CinematicCharacterAnimator_FacingDirection__Enum, AsFacingDirection, (app::LegacyCinematicCharacterAnimator_FacingDirection__Enum direction))
    IL2CPP_REGISTER_METHODINFO(0x04784FB0, Conversions_AsFacingDirection__MethodInfo)
}
