#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacySinMovementAnimator.h>

namespace app::classes::LegacySinMovementAnimator {
    IL2CPP_REGISTER_METHOD(0x00A359C0, void, AnimateIt, (app::LegacySinMovementAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A35BB0, void, RestoreToOriginalState, (app::LegacySinMovementAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A35C00, void, ctor, (app::LegacySinMovementAnimator * this_ptr))
} // namespace app::classes::LegacySinMovementAnimator
