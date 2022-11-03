#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityStandardAssets::ImageEffects::ColorCorrectionCurves {
    IL2CPP_REGISTER_METHOD(0x0251AC50, void, Start, (app::ColorCorrectionCurves * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::ColorCorrectionCurves * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251AC80, bool, CheckResources, (app::ColorCorrectionCurves * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251B330, void, UpdateParameters, (app::ColorCorrectionCurves * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251B890, void, UpdateTextures, (app::ColorCorrectionCurves * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251B8A0, void, OnRenderImage, (app::ColorCorrectionCurves * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x0251BDE0, void, ctor, (app::ColorCorrectionCurves * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::ColorCorrectionCurves
