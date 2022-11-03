#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DistortionAnimator_RendererData {
    IL2CPP_REGISTER_METHOD(0x0011CE30, void, ctor, (app::DistortionAnimator_RendererData__Boxed * this_ptr, app::Renderer* renderer))
    IL2CPP_REGISTER_METHOD(0x0011CE40, void, SetStrength, (app::DistortionAnimator_RendererData__Boxed * this_ptr, float value))
} // namespace app::classes::DistortionAnimator_RendererData
