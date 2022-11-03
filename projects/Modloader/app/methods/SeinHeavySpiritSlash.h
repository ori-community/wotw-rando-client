#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinHeavySpiritSlash {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DE870, bool, get_SpriteMirrorLock, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFFB00, void, set_SpriteMirrorLock, (app::SeinHeavySpiritSlash * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x005CB2B0, bool, get_HasEnoughEnergy, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFFBC0, bool, get_OverrideSpriteRotation, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFFBC0, bool, get_IsStatePerforming, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFFBC0, bool, get_IsAttacking, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFFBE0, void, OnSetReferenceToSein, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFFCC0, void, Start, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFFE60, void, OnDestroy, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01000000, void, ModifyGravityPlatformMovementSettings, (app::SeinHeavySpiritSlash * this_ptr, app::GravityPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x0471DB50, SeinHeavySpiritSlash_ModifyGravityPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010000C0, void, ChangeState, (app::SeinHeavySpiritSlash * this_ptr, app::SeinHeavySpiritSlash_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x010004A0, void, UpdateCharacterState, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01000550, void, UpdateIdle, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01000B70, void, UpdateCharge, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01000EA0, void, UpdateSlash, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFFBC0, bool, ShouldAnimationKeepPlaying, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04799A80, SeinHeavySpiritSlash_ShouldAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005CB2F0, void, SpendEnergy, (app::SeinHeavySpiritSlash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010019D0, void, ctor, (app::SeinHeavySpiritSlash * this_ptr))
} // namespace app::classes::SeinHeavySpiritSlash
