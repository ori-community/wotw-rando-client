#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityStandardAssets::ImageEffects::MotionBlur {
    IL2CPP_REGISTER_METHOD(0x02D5AA90, void, Start, (app::MotionBlur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5AAA0, void, OnDisable, (app::MotionBlur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5AC00, void, OnRenderImage, (app::MotionBlur * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02D5B2E0, void, ctor, (app::MotionBlur * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::MotionBlur
