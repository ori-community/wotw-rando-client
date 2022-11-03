#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityStandardAssets::ImageEffects::GlobalFog {
    IL2CPP_REGISTER_METHOD(0x02D589F0, bool, CheckResources, (app::GlobalFog * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D58A40, void, OnRenderImage, (app::GlobalFog * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02D597F0, void, CustomGraphicsBlit, (app::RenderTexture * source, app::RenderTexture* dest, app::Material* fx_material, int32_t pass_nr))
    IL2CPP_REGISTER_METHOD(0x02D59D70, void, ctor, (app::GlobalFog * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::GlobalFog
