#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityStandardAssets::CinematicEffects::SMAA {
    IL2CPP_REGISTER_METHOD(0x02508F20, app::Shader *, get_shader, (app::SMAA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02509030, app::Texture2D *, get_areaTexture, (app::SMAA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02509110, app::Texture2D *, get_searchTexture, (app::SMAA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025091F0, app::Material *, get_material, (app::SMAA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025092D0, void, OnEnable, (app::SMAA * this_ptr, app::AntiAliasing * owner))
    IL2CPP_REGISTER_METHOD(0x02509360, void, OnDisable, (app::SMAA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025094C0, void, OnPreCull, (app::SMAA * this_ptr, app::Camera * camera))
    IL2CPP_REGISTER_METHOD(0x025097E0, void, OnPostRender, (app::SMAA * this_ptr, app::Camera * camera))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRenderImage_1, (app::SMAA * this_ptr, app::PostProcessRenderContext * ctx))
    IL2CPP_REGISTER_METHOD(0x02509850, void, OnRenderImage_2, (app::SMAA * this_ptr, app::Camera * camera, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x0250AF90, app::RenderTexture *, TempRT, (app::SMAA * this_ptr, int32_t width, int32_t height, app::RenderTextureFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x0250B0C0, void, ctor, (app::SMAA * this_ptr))
}
