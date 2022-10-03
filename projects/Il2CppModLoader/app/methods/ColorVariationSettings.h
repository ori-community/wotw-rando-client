#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ColorVariationSettings {
    IL2CPP_REGISTER_METHOD(0x011DA260, void, Copy, (app::ColorVariationSettings * this_ptr, app::ColorVariationSettings* source))
    IL2CPP_REGISTER_METHOD(0x011DA290, app::ColorVariationSettings*, Clone, (app::ColorVariationSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DA410, void, Lerp, (app::ColorVariationSettings * from, app::ColorVariationSettings* to, app::ColorVariationSettings** destination, float t))
    IL2CPP_REGISTER_METHOD(0x011DA5B0, void, CopyFrom, (app::ColorVariationSettings * this_ptr, app::ColorVariationSettings* settings_color_variation_settings))
    IL2CPP_REGISTER_METHOD(0x011DA5E0, void, ctor, (app::ColorVariationSettings * this_ptr))
} // namespace app::classes::ColorVariationSettings
