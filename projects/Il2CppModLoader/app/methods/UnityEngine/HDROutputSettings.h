#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::HDROutputSettings {
    IL2CPP_REGISTER_METHOD(0x0252D330, void, SetPaperWhiteInNits, (float paper_white))
    IL2CPP_REGISTER_METHOD(0x0252D390, void, SetTvMaxBrightnessInNits, (float tv_max_brightness_nits))
    IL2CPP_REGISTER_METHOD(0x0252D3F0, void, SetTvMinBrightnessInNits, (float tv_min_brightness_nits))
    IL2CPP_REGISTER_METHOD(0x0252D450, void, SetSoftShoulderInNits, (float soft_shoulder))
    IL2CPP_REGISTER_METHOD(0x0252D4B0, void, SetImageLuminanceInNits, (float image_luminance))
    IL2CPP_REGISTER_METHOD(0x0252D510, void, SetColorGamutExpansion, (float color_gamut_exp))
}
