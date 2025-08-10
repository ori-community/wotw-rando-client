#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IPushable.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/SeinGrabBlock.h>

namespace app::classes::SeinGrabBlock {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_InRange, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_InRange, app::SeinGrabBlock* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00CA2550, bool, get_IsGrabbing, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CA2560, void, set_IsGrabbing, app::SeinGrabBlock* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00CA2550, bool, get_IsStatePerforming, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AD7E0, bool, IsFailingPushPull, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D0720, app::CharacterSpriteMirror*, get_Mirror, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_CharacterLeftRightMovement, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AD800, float, get_HorizontalInput, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0100B000, bool, get_FaceLeft, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AD870, bool, get_IsPushing, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00706210, bool, get_IsPulling, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AD880, bool, get_PushablePresent, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AD970, float, get_GrabDistance, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AD980, float, get_ReachDistance, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AD990, void, OnSetReferenceToSein, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014ADA60, void, OnRestoreCheckpoint, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014ADA80, void, OnAwake, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014ADC30, void, Start, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014ADDD0, void, OnDestroy, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x014AE090,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinGrabBlock* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x014AE340, void, HandleMovingBlock, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AE820, void, UpdateCharacterState, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AEF30, void, ExitRange, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AEFE0, void, EnterRange, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AF180, void, UpdateGrabIdleState, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AF1F0, void, UpdateGrabPushState, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AF280, void, UpdateGrabPullState, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AF310, void, ReleaseBlock, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D6470, bool, get_SpriteMirrorLock, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AF570, void, set_SpriteMirrorLock, app::SeinGrabBlock* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x014AF630, void, GrabBlock, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AF8F0, app::IPushable*, FindPushableNearby, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AF900, bool, ShouldGrabBlockIdleAnimationKeepPlaying, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AF920, bool, ShouldGrabBlockCantPullAnimationKeepPlaying, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AF940, bool, ShouldGrabBlockCantPushAnimationKeepPlaying, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AF960, bool, ShouldGrabBlockPullAnimationKeepPlaying, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AF980, bool, ShouldGrabBlockPushAnimationKeepPlaying, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AF9A0, void, EnterGrabIdleState, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AFB80, void, UpdatePushAnim, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AFEA0, void, EnterGrabPushState, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014AFEC0, void, UpdatePullAnim, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B01E0, void, EnterGrabPullState, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B0200, bool, StillCloseToPushable, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B0220, app::IPushable*, DetectPushPullBlock, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B0A20, app::IPushable*, DetectIPushable, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B12D0, void, UpdateSounds, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B1B70, void, FinishPullSound, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B1CD0, void, FinishPushSound, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B1E30, bool, WantsToPush, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B1F30, bool, WantsToPull, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B23E0, bool, WantsToStopPushOrPull, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B2450, bool, ShouldLetGo, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B2590, void, ctor, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C4B90, void, _UpdateSounds_b__92_0, app::SeinGrabBlock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6C1D0, void, _UpdateSounds_b__92_1, app::SeinGrabBlock* this_ptr)
} // namespace app::classes::SeinGrabBlock
