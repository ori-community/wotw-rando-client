#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NaruController.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::NaruController {
    IL2CPP_REGISTER_METHOD(0x00883A60, bool, get_LockedInput, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00883B30, void, Awake, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00883C10, void, OnDestroy, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00883CB0, void, Start, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00883D10, void, FixedUpdate, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008848B0, void, OnNaruLand, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008848E0, void, UpdateAnimations, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008854F0, bool, ShouldAgainstWallAnimationPlay, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00885630, bool, ShouldLookUpAnimationPlay, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00885770, bool, ShouldWalkAnimationPlay, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00885860, bool, ShouldIdleAnimationPlay, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00885950, bool, ShouldFallAnimationPlay, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008859C0, bool, ShouldFallIdleAnimationPlay, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00885A30, bool, ShouldJumpIdleAnimationPlay, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00885AE0, bool, ShouldJumpAnimationPlay, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsSuspended, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00585320, void, set_IsSuspended, app::NaruController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FF2B0, app::SuspendableMask__Enum, get_Mask, app::NaruController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00885B90, void, set_Mask, app::NaruController* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00885C40, void, ctor, app::NaruController* this_ptr)
} // namespace app::classes::NaruController
