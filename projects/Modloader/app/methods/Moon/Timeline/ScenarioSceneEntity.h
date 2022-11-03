#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::ScenarioSceneEntity {
    IL2CPP_REGISTER_METHOD(0x007832B0, float, get_SceneDuration, (app::ScenarioSceneEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007832C0, void, set_SceneDuration, (app::ScenarioSceneEntity * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x007832D0, bool, ApproximateEvent, (app::ScenarioSceneEntity * this_ptr, int32_t evt, float* time))
    IL2CPP_REGISTER_METHOD(0x00783530, void, ctor, (app::ScenarioSceneEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::ScenarioSceneEntity
