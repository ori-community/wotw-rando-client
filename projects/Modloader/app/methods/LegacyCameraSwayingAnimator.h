#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyCameraSwayingAnimator.h>

namespace app::classes::LegacyCameraSwayingAnimator {
    IL2CPP_REGISTER_METHOD(0x015DDFD0, void, AnimateIt, (app::LegacyCameraSwayingAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A35C00, void, ctor, (app::LegacyCameraSwayingAnimator * this_ptr))
} // namespace app::classes::LegacyCameraSwayingAnimator
