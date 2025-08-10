#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KuJump.h>

namespace app::classes::KuJump {
    IL2CPP_REGISTER_METHOD(0x0123A3E0, bool, get_PerformingSpringJump, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0123A400, bool, get_WantsToJump, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0123A4C0, bool, get_CanJump, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01234B30, bool, get_IsStatePerforming, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0123A5C0, void, Start, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0123A7A0, void, OnDestroy, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0123A980, void, OnSetReferenceToKu, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0123A9B0, void, UpdateState, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0123AC00, void, CrouchGoThrough, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0123B2D0, void, Jump, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012365B0, bool, ShouldJumpAnimationKeepPlaying, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0123BB30, void, PerformSpringJump, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnJumpAnimationEnded, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01236310, void, StopJumpAnimation, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0123BEB0, void, OnPreDoubleJumpPerform, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0123BED0, bool, get_HasStartedTurning, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0123BF00, bool, get_HasFinishedTurning, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_WantsToFaceLeft, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B8970, void, set_WantsToFaceLeft, app::KuJump* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01235C70, bool, get_ShouldInterruptTurning, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0123BF20, bool, get_IsCancellable, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0123BEB0, void, InterruptTurning, app::KuJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0123BF40, void, Turn, app::KuJump* this_ptr, bool face_left)
    IL2CPP_REGISTER_METHOD(0x0123C080, void, ctor, app::KuJump* this_ptr)
} // namespace app::classes::KuJump
