#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BipedIKvsAnimatorIK.h>

namespace app::classes::RootMotion::Demos::BipedIKvsAnimatorIK {
    IL2CPP_REGISTER_METHOD(0x0220BAD0, void, OnAnimatorIK, (app::BipedIKvsAnimatorIK * this_ptr, int32_t layer))
    IL2CPP_REGISTER_METHOD(0x0220CF20, void, ctor, (app::BipedIKvsAnimatorIK * this_ptr))
} // namespace app::classes::RootMotion::Demos::BipedIKvsAnimatorIK
