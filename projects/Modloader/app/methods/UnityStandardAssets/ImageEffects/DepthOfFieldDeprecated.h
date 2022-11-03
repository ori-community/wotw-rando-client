#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated {
    IL2CPP_REGISTER_METHOD(0x02D54500, void, CreateMaterials, (app::DepthOfFieldDeprecated * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D54680, bool, CheckResources, (app::DepthOfFieldDeprecated * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D54820, void, OnDisable, (app::DepthOfFieldDeprecated * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D548B0, void, OnEnable, (app::DepthOfFieldDeprecated * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D549E0, float, FocalDistance01, (app::DepthOfFieldDeprecated * this_ptr, float world_dist))
    IL2CPP_REGISTER_METHOD(0x02D54E10, int32_t, GetDividerBasedOnQuality, (app::DepthOfFieldDeprecated * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D54E30, int32_t, GetLowResolutionDividerBasedOnQuality, (app::DepthOfFieldDeprecated * this_ptr, int32_t base_divider))
    IL2CPP_REGISTER_METHOD(0x02D54E50, void, OnRenderImage, (app::DepthOfFieldDeprecated * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02D55DC0, void, Blur, (app::DepthOfFieldDeprecated * this_ptr, app::RenderTexture* from, app::RenderTexture* to, app::DepthOfFieldDeprecated_DofBlurriness__Enum iterations, int32_t blur_pass, float spread))
    IL2CPP_REGISTER_METHOD(0x02D56220, void, BlurFg, (app::DepthOfFieldDeprecated * this_ptr, app::RenderTexture* from, app::RenderTexture* to, app::DepthOfFieldDeprecated_DofBlurriness__Enum iterations, int32_t blur_pass, float spread))
    IL2CPP_REGISTER_METHOD(0x02D56710, void, BlurHex, (app::DepthOfFieldDeprecated * this_ptr, app::RenderTexture* from, app::RenderTexture* to, int32_t blur_pass, float spread, app::RenderTexture* tmp))
    IL2CPP_REGISTER_METHOD(0x02D56B30, void, Downsample, (app::DepthOfFieldDeprecated * this_ptr, app::RenderTexture* from, app::RenderTexture* to))
    IL2CPP_REGISTER_METHOD(0x02D56D70, void, AddBokeh, (app::DepthOfFieldDeprecated * this_ptr, app::RenderTexture* bokeh_info, app::RenderTexture* temp_tex, app::RenderTexture* final_target))
    IL2CPP_REGISTER_METHOD(0x02D57480, void, ReleaseTextures, (app::DepthOfFieldDeprecated * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D57800, void, AllocateTextures, (app::DepthOfFieldDeprecated * this_ptr, bool blur_foreground, app::RenderTexture* source, int32_t divider, int32_t low_tex_divider))
    IL2CPP_REGISTER_METHOD(0x02D58040, void, ctor, (app::DepthOfFieldDeprecated * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D58100, void, cctor, ())
} // namespace app::classes::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated
