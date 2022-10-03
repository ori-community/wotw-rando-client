#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ColorVariationZoneModifier {
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_VisibleOnInspector, (app::ColorVariationZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_VisibleOnInspector, (app::ColorVariationZoneModifier * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00724020, float, get_ColorVariationWeight, (app::ColorVariationZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724030, void, set_ColorVariationWeight, (app::ColorVariationZoneModifier * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::ColorVariationSettings*, get_ColorVariationSettings, (app::ColorVariationZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ColorVariationManager_ColorVariationInfluencerOrder__Enum, get_ColorVariationInfluencerOrder, (app::ColorVariationZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DA600, void, InitializeModifier, (app::ColorVariationZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DA6A0, void, CleanUpModifier, (app::ColorVariationZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724030, void, UpdateModifier, (app::ColorVariationZoneModifier * this_ptr, float weight, float delta_time))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ColorVariationZoneModifier * this_ptr))
} // namespace app::classes::ColorVariationZoneModifier
