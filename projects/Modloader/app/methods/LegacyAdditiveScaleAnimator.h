#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyAdditiveScaleAnimator.h>

namespace app::classes::LegacyAdditiveScaleAnimator {
    IL2CPP_REGISTER_METHOD(0x015CAF30, void, Start, (app::LegacyAdditiveScaleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CB140, void, AnimateIt, (app::LegacyAdditiveScaleAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A16F90, void, RestoreToOriginalState, (app::LegacyAdditiveScaleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CB3B0, void, ctor, (app::LegacyAdditiveScaleAnimator * this_ptr))
} // namespace app::classes::LegacyAdditiveScaleAnimator
