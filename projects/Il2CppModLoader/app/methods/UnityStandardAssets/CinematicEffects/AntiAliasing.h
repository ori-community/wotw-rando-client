#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityStandardAssets::CinematicEffects::AntiAliasing {
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_method, (app::AntiAliasing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FF930, void, set_method, (app::AntiAliasing * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x024FF940, app::IAntiAliasing*, get_current, (app::AntiAliasing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FF950, app::Camera*, get_cameraComponent, (app::AntiAliasing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FFA20, void, OnEnable, (app::AntiAliasing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FFB30, void, OnDisable, (app::AntiAliasing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FFD70, void, OnPreCull, (app::AntiAliasing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FFE30, void, OnPostRender, (app::AntiAliasing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FFEF0, void, OnRenderImage, (app::AntiAliasing * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02500040, void, IRenderPostprocessor_OnRenderImage, (app::AntiAliasing * this_ptr, app::PostProcessRenderContext* context))
    IL2CPP_REGISTER_METHOD(0x025000F0, void, ctor, (app::AntiAliasing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007893E0, bool, IRenderPostprocessor_get_enabled, (app::AntiAliasing * this_ptr))
} // namespace app::classes::UnityStandardAssets::CinematicEffects::AntiAliasing
