#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrightnessZoneModifier.h>
#include <Modloader/app/structs/GlobalBrightnessController_BrigthnessContributionOrder__Enum.h>

namespace app::classes::BrightnessZoneModifier {
    IL2CPP_REGISTER_METHOD(
        0x00D51450,
        app::GlobalBrightnessController_BrigthnessContributionOrder__Enum,
        get_BrightnessInfluceOrder,
        app::BrightnessZoneModifier* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_BrightnessInfluceAdditive, app::BrightnessZoneModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_BrightnessInfluceMultiplicative, app::BrightnessZoneModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ContributeToAdditive, app::BrightnessZoneModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ContributeToMultiplicative, app::BrightnessZoneModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_BrightnessInfluceWeight, app::BrightnessZoneModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_BrightnessInfluceWeight, app::BrightnessZoneModifier* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00446970, bool, get_VisibleOnInspector, app::BrightnessZoneModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446980, void, set_VisibleOnInspector, app::BrightnessZoneModifier* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00D51460, void, InitializeModifier, app::BrightnessZoneModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D51500, void, CleanUpModifier, app::BrightnessZoneModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A5EC0, void, UpdateModifier, app::BrightnessZoneModifier* this_ptr, float weight, float delta_time)
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, app::BrightnessZoneModifier* this_ptr)
} // namespace app::classes::BrightnessZoneModifier
