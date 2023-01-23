#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CameraOffsetAnimator.h>

namespace app::classes::CameraOffsetAnimator {
    IL2CPP_REGISTER_METHOD(0x01696D20, void, Restart, (app::CameraOffsetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01696D40, void, AnimateIt, (app::CameraOffsetAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::CameraOffsetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005790B0, void, ctor, (app::CameraOffsetAnimator * this_ptr))
} // namespace app::classes::CameraOffsetAnimator
