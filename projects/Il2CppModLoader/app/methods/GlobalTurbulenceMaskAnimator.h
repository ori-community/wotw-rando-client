#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GlobalTurbulenceMaskAnimator {
    IL2CPP_REGISTER_METHOD(0x007FA2D0, app::SceneSettingsComponent *, get_SceneSettings, (app::GlobalTurbulenceMaskAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FA440, float, get_Duration, (app::GlobalTurbulenceMaskAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FA540, bool, get_IsLooping, (app::GlobalTurbulenceMaskAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::GlobalTurbulenceMaskAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::GlobalTurbulenceMaskAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (app::GlobalTurbulenceMaskAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x007FA950, void, ctor, (app::GlobalTurbulenceMaskAnimator * this_ptr))
}
