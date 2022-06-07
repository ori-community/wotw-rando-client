#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::ContrastStretch {
    IL2CPP_REGISTER_METHOD(0x0251E1E0, app::Material *, get_materialLum, (app::ContrastStretch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251E3C0, app::Material *, get_materialReduce, (app::ContrastStretch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251E5A0, app::Material *, get_materialAdapt, (app::ContrastStretch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251E780, app::Material *, get_materialApply, (app::ContrastStretch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251E970, void, Start, (app::ContrastStretch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251EB50, void, OnEnable, (app::ContrastStretch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251EDC0, void, OnDisable, (app::ContrastStretch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251F070, void, OnRenderImage, (app::ContrastStretch * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x0251F3A0, void, CalculateAdaptation, (app::ContrastStretch * this_ptr, app::Texture * cur_texture))
    IL2CPP_REGISTER_METHOD(0x0251F7A0, void, ctor, (app::ContrastStretch * this_ptr))
}
