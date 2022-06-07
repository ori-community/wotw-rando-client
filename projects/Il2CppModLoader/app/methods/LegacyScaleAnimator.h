#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LegacyScaleAnimator {
    IL2CPP_REGISTER_METHOD(0x00A34EC0, void, Awake, (app::LegacyScaleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A35140, void, AnimateIt, (app::LegacyScaleAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00579090, void, RestoreToOriginalState, (app::LegacyScaleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A354B0, void, ctor, (app::LegacyScaleAnimator * this_ptr))
}
