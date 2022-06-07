#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraTransformMetaDataDrivenAnimator {
    IL2CPP_REGISTER_METHOD(0x00B21100, int32_t, GetFrameAtTime, (app::CameraTransformMetaDataDrivenAnimator * this_ptr, float index))
    IL2CPP_REGISTER_METHOD(0x00B21290, void, AnimateIt, (app::CameraTransformMetaDataDrivenAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::CameraTransformMetaDataDrivenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005790B0, void, ctor, (app::CameraTransformMetaDataDrivenAnimator * this_ptr))
}
