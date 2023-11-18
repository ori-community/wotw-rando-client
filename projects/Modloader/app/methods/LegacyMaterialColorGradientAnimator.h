#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator.h>

namespace app::classes::LegacyMaterialColorGradientAnimator {
    IL2CPP_REGISTER_METHOD(0x00A2CA90, int32_t, get_PropertyID, (app::LegacyMaterialColorGradientAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2CB10, void, Start, (app::LegacyMaterialColorGradientAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2D140, void, AnimateIt, (app::LegacyMaterialColorGradientAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A16F90, void, RestoreToOriginalState, (app::LegacyMaterialColorGradientAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2D680, void, ResetToEnd, (app::LegacyMaterialColorGradientAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2D980, void, ResetToStart, (app::LegacyMaterialColorGradientAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2DC70, void, ctor, (app::LegacyMaterialColorGradientAnimator * this_ptr))
} // namespace app::classes::LegacyMaterialColorGradientAnimator
