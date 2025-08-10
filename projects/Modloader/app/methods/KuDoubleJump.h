#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/KuDoubleJump.h>
#include <Modloader/app/structs/KuJump.h>

namespace app::classes::KuDoubleJump {
    IL2CPP_REGISTER_METHOD(0x01234A70, int32_t, get_ExtraJumpsAvailable, )
    IL2CPP_REGISTER_METHOD(0x01234B00, app::KuJump*, get_Jump, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01234B30, bool, get_IsStatePerforming, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01234B40, bool, get_WantsToJump, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01234C10, bool, get_CanDoubleJump, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01234CE0, void, Start, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01234E90, void, OnDestroy, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01235040, void, OnResetAirLimits, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01235050, void, OnSetReferenceToKu, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01235080, void, Serialize, app::KuDoubleJump* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x012350F0, void, PerformDoubleJump, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012356B0, bool, ShouldDoubleJumpAnimationKeepPlaying, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01235710, void, UpdateState, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01235AC0, void, ResetDoubleJump, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01235B60, void, LockForDuration, app::KuDoubleJump* this_ptr, float duration)
    IL2CPP_REGISTER_METHOD(0x00763150, void, ResetLock, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01235C20, bool, get_HasStartedTurning, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01235C50, bool, get_HasFinishedTurning, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_WantsToFaceLeft, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C14D0, void, set_WantsToFaceLeft, app::KuDoubleJump* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01235C70, bool, get_ShouldInterruptTurning, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01235D60, bool, get_IsCancellable, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01235D80, void, InterruptTurning, app::KuDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01235DA0, void, Turn, app::KuDoubleJump* this_ptr, bool face_left)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::KuDoubleJump* this_ptr)
} // namespace app::classes::KuDoubleJump
