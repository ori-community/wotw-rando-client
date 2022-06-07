#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RenderingSettingsPerScene {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DeferredLightingEnabled, (app::RenderingSettingsPerScene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C660, void, set_DeferredLightingEnabled, (app::RenderingSettingsPerScene * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x008FDBD0, float, get_DRSMagicPower, (app::RenderingSettingsPerScene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_DRSMagicPower, (app::RenderingSettingsPerScene * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x008FDC20, int32_t, get_SceneRTDRSDownscaleCap, (app::RenderingSettingsPerScene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529E90, void, set_SceneRTDRSDownscaleCap, (app::RenderingSettingsPerScene * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x008FDC50, int32_t, get_SceneRTDRSDownscaleYCap, (app::RenderingSettingsPerScene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C4000, void, set_SceneRTDRSDownscaleYCap, (app::RenderingSettingsPerScene * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x008FDC80, void, Lerp, (app::RenderingSettingsPerScene * from, app::RenderingSettingsPerScene * to, app::RenderingSettingsPerScene * * destination, float curve_value))
    IL2CPP_REGISTER_METHOD(0x008FE140, app::RenderingSettingsPerScene *, Clone, (app::RenderingSettingsPerScene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FE2B0, void, CopyFrom, (app::RenderingSettingsPerScene * this_ptr, app::RenderingSettingsPerScene * other))
    IL2CPP_REGISTER_METHOD(0x008FE390, void, ctor, (app::RenderingSettingsPerScene * this_ptr))
}
