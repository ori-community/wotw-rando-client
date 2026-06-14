#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GlobalBrightnessController.h>
#include <Modloader/app/structs/IBrigthnessContributionAgent.h>

namespace app::classes::GlobalBrightnessController {
    IL2CPP_REGISTER_METHOD(0x007F5EF0, float, get_GlobalBrightness, )
    IL2CPP_REGISTER_METHOD(0x007F5F90, void, set_GlobalBrightness, float value)
    IL2CPP_REGISTER_METHOD(0x007F6040, float, get_GlobalBrightnessDebugOverride, )
    IL2CPP_REGISTER_METHOD(0x007F60E0, void, set_GlobalBrightnessDebugOverride, float value)
    IL2CPP_REGISTER_METHOD(0x007F6190, float, get_EffectiveGlobalBrightness, )
    IL2CPP_REGISTER_METHOD(0x007F6270, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x007F6370, void, RegisterContribution, app::IBrigthnessContributionAgent* agent)
    IL2CPP_REGISTER_METHOD(0x007F6620, void, UnregisterContribution, app::IBrigthnessContributionAgent* agent)
    IL2CPP_REGISTER_METHOD(0x007F6740, float, GetAdditiveInfluence, )
    IL2CPP_REGISTER_METHOD(0x007F6A90, float, GetMultiplicativeInfluence, )
    IL2CPP_REGISTER_METHOD(0x007F6F60, void, OnUpdate, float delta_time)
    IL2CPP_REGISTER_METHOD(0x007F73A0, void, ApplyBrightnessValue, float value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartListeningToSceneEvents, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StopListeningToSceneEvents, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GlobalBrightnessController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007F7500, void, cctor, )
} // namespace app::classes::GlobalBrightnessController
