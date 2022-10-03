#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityStandardAssets::CinematicEffects::FXAA {
    IL2CPP_REGISTER_METHOD(0x02504DF0, void, ctor, (app::FXAA * this_ptr, bool use_separate_alpha))
    IL2CPP_REGISTER_METHOD(0x02504EC0, app::Shader*, get_shader, (app::FXAA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02504FC0, app::Material*, get_material, (app::FXAA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_validSourceFormat, (app::FXAA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_validSourceFormat, (app::FXAA * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x025050A0, void, OnEnable, (app::FXAA * this_ptr, app::AntiAliasing* owner))
    IL2CPP_REGISTER_METHOD(0x02505130, void, OnDisable, (app::FXAA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPreCull, (app::FXAA * this_ptr, app::Camera* camera))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostRender, (app::FXAA * this_ptr, app::Camera* camera))
    IL2CPP_REGISTER_METHOD(0x02505210, void, SetSeparateAlpha, (app::FXAA * this_ptr, app::CommandBuffer* cmd, bool state))
    IL2CPP_REGISTER_METHOD(0x025053A0, void, SetAlphaMask, (app::FXAA * this_ptr, app::CommandBuffer* cmd, bool state))
    IL2CPP_REGISTER_METHOD(0x02505530, void, UpdateMaterial_1, (app::FXAA * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02505780, void, UpdateMaterial_2, (app::FXAA * this_ptr, app::FXAA_QualitySettings quality_settings))
    IL2CPP_REGISTER_METHOD(0x02505920, void, OnRenderImage_1, (app::FXAA * this_ptr, app::Camera* camera, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02505BD0, void, OnRenderImage_2, (app::FXAA * this_ptr, app::PostProcessRenderContext* ctx))
    IL2CPP_REGISTER_METHOD(0x02506000, void, cctor, ())
} // namespace app::classes::UnityStandardAssets::CinematicEffects::FXAA
