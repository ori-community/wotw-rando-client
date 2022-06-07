#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinCrouch {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E23E0, app::CharacterCapsuleController *, get_CapsuleController, (app::SeinCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement *, get_CharacterLeftRightMovement, (app::SeinCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement *, get_PlatformMovement, (app::SeinCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E2410, void, Start, (app::SeinCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E25B0, void, OnDestroy, (app::SeinCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E2750, void, ModifyHorizontalPlatformMovementSettings, (app::SeinCrouch * this_ptr, app::HorizontalPlatformMovementSettings * settings))
    IL2CPP_REGISTER_METHODINFO(0x0476AAB8, SeinCrouch_ModifyHorizontalPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006E2790, void, OnEnter, (app::SeinCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E2820, void, OnExit, (app::SeinCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E2880, void, UpdateCharacterState, (app::SeinCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E3030, bool, get_ShouldCrouchIdleAnimationPlay, (app::SeinCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E3040, bool, ShouldCrouchIdleAnimationKeepPlaying, (app::SeinCrouch * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04704E68, SeinCrouch_ShouldCrouchIdleAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006E31F0, bool, ShouldPlayFlipAnimation, (app::SeinCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063D070, bool, get_IsStatePerforming, (app::SeinCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063D070, bool, get_IsCrouching, (app::SeinCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E32F0, void, set_IsCrouching, (app::SeinCrouch * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006E3510, void, OnSetReferenceToSein, (app::SeinCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinCrouch * this_ptr))
}
