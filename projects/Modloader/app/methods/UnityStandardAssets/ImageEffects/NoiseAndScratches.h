#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityStandardAssets::ImageEffects::NoiseAndScratches {
    IL2CPP_REGISTER_METHOD(0x02D5C780, void, Start, (app::NoiseAndScratches * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5C9C0, app::Material*, get_material, (app::NoiseAndScratches * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5CCF0, void, OnDisable, (app::NoiseAndScratches * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5CE30, void, SanitizeParameters, (app::NoiseAndScratches * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5CFC0, void, OnRenderImage, (app::NoiseAndScratches * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02D5D850, void, ctor, (app::NoiseAndScratches * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::NoiseAndScratches
