#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyMaterialColorAnimator.h>

namespace app::classes::LegacyMaterialColorAnimator {
    IL2CPP_REGISTER_METHOD(0x00A2BD10, int32_t, get_PropertyID, (app::LegacyMaterialColorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2BD90, void, Start, (app::LegacyMaterialColorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2C340, void, AnimateIt, (app::LegacyMaterialColorAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A16F90, void, RestoreToOriginalState, (app::LegacyMaterialColorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2C8E0, void, ctor, (app::LegacyMaterialColorAnimator * this_ptr))
} // namespace app::classes::LegacyMaterialColorAnimator
