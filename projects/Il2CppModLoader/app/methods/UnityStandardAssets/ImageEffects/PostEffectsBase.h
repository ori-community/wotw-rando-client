#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::PostEffectsBase {
    IL2CPP_REGISTER_METHOD(0x02D5D890, app::Material *, CheckShaderAndCreateMaterial, (app::PostEffectsBase * this_ptr, app::Shader * s, app::Material * m2_create))
    IL2CPP_REGISTER_METHOD(0x02D5DE70, app::Material *, CreateMaterial, (app::PostEffectsBase * this_ptr, app::Shader * s, app::Material * m2_create))
    IL2CPP_REGISTER_METHOD(0x02D5E1E0, void, OnEnable, (app::PostEffectsBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5E1F0, bool, CheckSupport_1, (app::PostEffectsBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5E200, bool, CheckResources, (app::PostEffectsBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00980110, void, Start, (app::PostEffectsBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5E2E0, bool, CheckSupport_2, (app::PostEffectsBase * this_ptr, bool need_depth))
    IL2CPP_REGISTER_METHOD(0x02D5E520, bool, CheckSupport_3, (app::PostEffectsBase * this_ptr, bool need_depth, bool need_hdr))
    IL2CPP_REGISTER_METHOD(0x0052A070, bool, Dx11Support, (app::PostEffectsBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5E570, void, ReportAutoDisable, (app::PostEffectsBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5E640, bool, CheckShader, (app::PostEffectsBase * this_ptr, app::Shader * s))
    IL2CPP_REGISTER_METHOD(0x02D5E9B0, void, NotSupported, (app::PostEffectsBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5EA10, void, DrawBorder, (app::PostEffectsBase * this_ptr, app::RenderTexture * dest, app::Material * material))
    IL2CPP_REGISTER_METHOD(0x013270D0, void, ctor, (app::PostEffectsBase * this_ptr))
}
