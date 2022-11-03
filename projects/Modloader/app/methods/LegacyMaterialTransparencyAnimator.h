#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LegacyMaterialTransparencyAnimator {
    IL2CPP_REGISTER_METHOD(0x00A24880, int32_t, get_PropertyID, (app::LegacyMaterialTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2E940, app::Material*, get_Mat, (app::LegacyMaterialTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2EA10, void, Awake, (app::LegacyMaterialTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2EAB0, void, Start, (app::LegacyMaterialTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2EFB0, void, AnimateIt, (app::LegacyMaterialTransparencyAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A16F90, void, RestoreToOriginalState, (app::LegacyMaterialTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2F1C0, void, OnDestroy, (app::LegacyMaterialTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2F2D0, void, ctor, (app::LegacyMaterialTransparencyAnimator * this_ptr))
} // namespace app::classes::LegacyMaterialTransparencyAnimator
