#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WindSpeedAnimator.h>

namespace app::classes::WindSpeedAnimator {
    IL2CPP_REGISTER_METHOD(0x00578EE0, void, Start, app::WindSpeedAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00579060, void, AnimateIt, app::WindSpeedAnimator* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00579090, void, RestoreToOriginalState, app::WindSpeedAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005790B0, void, ctor, app::WindSpeedAnimator* this_ptr)
} // namespace app::classes::WindSpeedAnimator
