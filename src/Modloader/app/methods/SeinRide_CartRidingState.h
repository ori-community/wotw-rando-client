#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IRideable.h>
#include <Modloader/app/structs/SeinRide_CartRidingState.h>

namespace app::classes::SeinRide_CartRidingState {
    IL2CPP_REGISTER_METHOD(0x005D3AC0, void, OnBegin, app::SeinRide_CartRidingState* this_ptr, app::IRideable* rideable, bool skip_mount_animation)
    IL2CPP_REGISTER_METHOD(0x005D3C70, void, Update, app::SeinRide_CartRidingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D41E0, void, OnJumpAnimationEnd, app::SeinRide_CartRidingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D41F0, void, OnJumpLandAnimationEnd, app::SeinRide_CartRidingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D4200, void, OnJump, app::SeinRide_CartRidingState* this_ptr, float y_speed)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_MatchRotation, app::SeinRide_CartRidingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_LockPlayerToAttachmentPoint, app::SeinRide_CartRidingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D44A0, bool, IsCartFalling, app::SeinRide_CartRidingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SeinRide_CartRidingState* this_ptr)
} // namespace app::classes::SeinRide_CartRidingState
