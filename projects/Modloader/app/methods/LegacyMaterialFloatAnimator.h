#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LegacyMaterialFloatAnimator {
    IL2CPP_REGISTER_METHOD(0x00A2DEC0, int32_t, get_PropertyID, (app::LegacyMaterialFloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2DF40, void, Start, (app::LegacyMaterialFloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2E430, void, OnDestroy, (app::LegacyMaterialFloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2E5C0, void, AnimateIt, (app::LegacyMaterialFloatAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A16F90, void, RestoreToOriginalState, (app::LegacyMaterialFloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2E7C0, void, ctor, (app::LegacyMaterialFloatAnimator * this_ptr))
} // namespace app::classes::LegacyMaterialFloatAnimator
