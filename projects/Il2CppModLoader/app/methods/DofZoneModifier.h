#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DofZoneModifier {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_VisibleOnInspector, (app::DofZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_VisibleOnInspector, (app::DofZoneModifier * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0043C0F0, float, get_SliceRenderSettingsWeight, (app::DofZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043C100, void, set_SliceRenderSettingsWeight, (app::DofZoneModifier * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00B9C600, app::SliceRenderSettingsInfluencerOrder__Enum, get_SliceRenderInfluenceOrder, (app::DofZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_SliceRenderInfluenceOrderOffset, (app::DofZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9C610, void, InitializeModifier, (app::DofZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9C6B0, void, CleanUpModifier, (app::DofZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043C100, void, UpdateModifier, (app::DofZoneModifier * this_ptr, float weight, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00B9C750, float, GetBlurOffsetForLayer, (app::DofZoneModifier * this_ptr, int32_t layer, app::SliceRenderSettings* settings))
    IL2CPP_REGISTER_METHOD(0x00B9C7B0, float, GetDownsamplingOffsetForLayer, (app::DofZoneModifier * this_ptr, int32_t layer, app::SliceRenderSettings* settings))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DofZoneModifier * this_ptr))
} // namespace app::classes::DofZoneModifier
