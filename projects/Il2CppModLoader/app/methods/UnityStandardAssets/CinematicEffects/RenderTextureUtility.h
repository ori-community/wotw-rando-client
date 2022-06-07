#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityStandardAssets::CinematicEffects::RenderTextureUtility {
    IL2CPP_REGISTER_METHOD(0x025088F0, app::RenderTexture *, GetTemporaryRenderTexture, (app::RenderTextureUtility * this_ptr, int32_t width, int32_t height, int32_t depth_buffer, app::RenderTextureFormat__Enum format, app::FilterMode__Enum filter_mode))
    IL2CPP_REGISTER_METHOD(0x02508A80, void, ReleaseTemporaryRenderTexture, (app::RenderTextureUtility * this_ptr, app::RenderTexture * rt))
    IL2CPP_REGISTER_METHOD(0x02508C60, void, ReleaseAllTemporaryRenderTextures, (app::RenderTextureUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02508DD0, void, ctor, (app::RenderTextureUtility * this_ptr))
}
