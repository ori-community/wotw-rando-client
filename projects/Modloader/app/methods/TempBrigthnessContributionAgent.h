#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TempBrigthnessContributionAgent {
    IL2CPP_REGISTER_METHOD(0x0011DCE0, void, ctor_1, (app::TempBrigthnessContributionAgent__Boxed * this_ptr, app::IBrigthnessContributionAgent* agent, app::Ease_Easing__Enum easing, float speed, float timer))
    IL2CPP_REGISTER_METHOD(0x0011DCF0, void, ctor_2, (app::TempBrigthnessContributionAgent__Boxed * this_ptr, app::IBrigthnessContributionAgent* agent, app::WeightController* weight_controller))
    IL2CPP_REGISTER_METHOD(0x0010E170, app::GlobalBrightnessController_BrigthnessContributionOrder__Enum, get_BrightnessInfluceOrder, (app::TempBrigthnessContributionAgent__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_BrightnessInfluceOrder, (app::TempBrigthnessContributionAgent__Boxed * this_ptr, app::GlobalBrightnessController_BrigthnessContributionOrder__Enum value))
    IL2CPP_REGISTER_METHOD(0x0010FDE0, float, get_BrightnessInfluceAdditive, (app::TempBrigthnessContributionAgent__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001155C0, void, set_BrightnessInfluceAdditive, (app::TempBrigthnessContributionAgent__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00111970, float, get_BrightnessInfluceMultiplicative, (app::TempBrigthnessContributionAgent__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00115B30, void, set_BrightnessInfluceMultiplicative, (app::TempBrigthnessContributionAgent__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0011DD00, bool, get_ContributeToAdditive, (app::TempBrigthnessContributionAgent__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011DD10, void, set_ContributeToAdditive, (app::TempBrigthnessContributionAgent__Boxed * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0011DD20, bool, get_ContributeToMultiplicative, (app::TempBrigthnessContributionAgent__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011DD30, void, set_ContributeToMultiplicative, (app::TempBrigthnessContributionAgent__Boxed * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0011DD40, float, get_BrightnessInfluceWeight, (app::TempBrigthnessContributionAgent__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011DD60, void, UpdateBrigthnessInfluence, (app::TempBrigthnessContributionAgent__Boxed * this_ptr, float delta_time))
} // namespace app::classes::TempBrigthnessContributionAgent
