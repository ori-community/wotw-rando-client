#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::ColorCorrectionLookup {
    IL2CPP_REGISTER_METHOD(0x0251CA30, bool, CheckResources, (app::ColorCorrectionLookup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251CAC0, void, OnDisable, (app::ColorCorrectionLookup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251CBA0, void, OnDestroy, (app::ColorCorrectionLookup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251CC80, void, SetIdentityLut, (app::ColorCorrectionLookup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251CF70, bool, ValidDimensions, (app::ColorCorrectionLookup * this_ptr, app::Texture2D * tex2d))
    IL2CPP_REGISTER_METHOD(0x0251D0A0, void, Convert, (app::ColorCorrectionLookup * this_ptr, app::Texture2D * temp2_d_tex, app::String * path))
    IL2CPP_REGISTER_METHOD(0x0251D5B0, void, OnRenderImage, (app::ColorCorrectionLookup * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x0251D8C0, void, ctor, (app::ColorCorrectionLookup * this_ptr))
}
