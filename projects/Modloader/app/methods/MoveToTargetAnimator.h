#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MoveToTargetAnimator {
    IL2CPP_REGISTER_METHOD(0x00868870, app::Vector3, get_OriginalPosition, (app::MoveToTargetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00868890, bool, get_IsLooping, (app::MoveToTargetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00868970, void, CacheOriginals, (app::MoveToTargetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00868980, void, SetEffectiveTransform, (app::MoveToTargetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00868B40, void, SampleValue, (app::MoveToTargetAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00868EE0, float, get_Duration, (app::MoveToTargetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00868F10, void, RestoreToOriginalState, (app::MoveToTargetAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00869350, void, ctor, (app::MoveToTargetAnimator * this_ptr))
} // namespace app::classes::MoveToTargetAnimator
