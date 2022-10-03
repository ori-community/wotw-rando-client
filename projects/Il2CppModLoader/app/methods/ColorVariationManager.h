#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ColorVariationManager {
    IL2CPP_REGISTER_METHOD(0x006D41F0, float, get_WorkingTime, (app::ColorVariationManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044E710, app::MoonRenderPipelineAsset*, get_MoonRenderAsset, (app::ColorVariationManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011D8F20, bool, get_ColorVariationDebugEnabled, ())
    IL2CPP_REGISTER_METHOD(0x011D8FC0, void, set_ColorVariationDebugEnabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x011D9070, void, CollectePropertiesForShaders, (app::ColorVariationManager * this_ptr, app::ColorVariationSettings* settings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x011D9360, void, RegisterColorVariationInfluencer, (app::ColorVariationManager_IColorVariationInfluencer * influencer))
    IL2CPP_REGISTER_METHOD(0x011D9610, void, UnregisterColorVariationInfluencer, (app::ColorVariationManager_IColorVariationInfluencer * influencer))
    IL2CPP_REGISTER_METHOD(0x011D96D0, void, MixInfluences, (app::ColorVariationManager * this_ptr, app::ColorVariationSettings** settings))
    IL2CPP_REGISTER_METHOD(0x011D98C0, void, ApplyColorVariation, (app::ColorVariationManager * this_ptr, app::ColorVariationSettings* settings))
    IL2CPP_REGISTER_METHOD(0x011D9B90, void, ApplyCustomColorVariationBrightness, (app::ColorVariationManager * this_ptr, float val))
    IL2CPP_REGISTER_METHOD(0x011D9C10, void, DoUpdate, (app::ColorVariationManager * this_ptr, float delta_time, app::ColorVariationSettings* settings))
    IL2CPP_REGISTER_METHOD(0x011D9E00, void, ctor, (app::ColorVariationManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DA010, void, cctor, ())
} // namespace app::classes::ColorVariationManager
