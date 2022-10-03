#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinEdgeClamber {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinEdgeClamber * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACB210, app::SeinClamberPuppet*, get_Puppet, (app::SeinEdgeClamber * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_PlatformMovement, (app::SeinEdgeClamber * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_LeftRightMovement, (app::SeinEdgeClamber * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACB2D0, void, OnSetReferenceToSein, (app::SeinEdgeClamber * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E4240, app::CharacterGravity*, get_CharacterGravity, (app::SeinEdgeClamber * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_CharacterLeftRightMovement, (app::SeinEdgeClamber * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACB3B0, void, Start, (app::SeinEdgeClamber * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACB660, void, OnDestroy, (app::SeinEdgeClamber * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACB920, void, ModifyGravityPlatformMovementSettings, (app::SeinEdgeClamber * this_ptr, app::GravityPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x04728848, SeinEdgeClamber_ModifyGravityPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ACB9A0, void, ModifyHorizontalPlatformMovementSettings, (app::SeinEdgeClamber * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x0472A008, SeinEdgeClamber_ModifyHorizontalPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ACBA40, bool, IsLandOnTrigger, (app::SeinEdgeClamber * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00ACBB90, void, UpdateCharacterState, (app::SeinEdgeClamber * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAE2B0, void, OnAnimationStart, (app::SeinEdgeClamber * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04799418, SeinEdgeClamber_OnAnimationStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AAE250, void, OnAnimationEnd, (app::SeinEdgeClamber * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478D298, SeinEdgeClamber_OnAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ACC530, void, PerformEdgeClamber, (app::SeinEdgeClamber * this_ptr, bool no_deceleration))
    IL2CPP_REGISTER_METHOD(0x00ACCE90, void, ExecuteClamberEffects, (app::SeinEdgeClamber * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E1300, bool, ShouldAnimationKeepPlaying, (app::SeinEdgeClamber * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047645B0, SeinEdgeClamber_ShouldAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ACD190, void, ctor, (app::SeinEdgeClamber * this_ptr))
} // namespace app::classes::SeinEdgeClamber
