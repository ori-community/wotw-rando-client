#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MoonDataPlatform::QualityModeTweakAsset {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyVsyncInterval, (app::QualityModeTweakAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F48BF0, void, ApplyMasterTextureLimit, (app::QualityModeTweakAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F48CA0, void, ApplyMipBias, (app::QualityModeTweakAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F48F10, void, ApplyTimesliceScaling, (app::QualityModeTweakAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F49060, void, ApplyLightLimit, (app::QualityModeTweakAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F49250, void, ApplyFXLimit, (app::QualityModeTweakAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F492F0, void, ApplyUseSwitchSlicing, (app::QualityModeTweakAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F493A0, void, ApplyWaterSimOverrides, (app::QualityModeTweakAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F49440, void, Apply, (app::QualityModeTweakAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F497D0, void, ctor, (app::QualityModeTweakAsset * this_ptr))
} // namespace app::classes::MoonDataPlatform::QualityModeTweakAsset
