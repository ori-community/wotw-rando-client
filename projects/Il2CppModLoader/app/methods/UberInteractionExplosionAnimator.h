#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberInteractionExplosionAnimator {
    IL2CPP_REGISTER_METHOD(0x013F74A0, app::UberExplosionActor*, get_Actor, (app::UberInteractionExplosionAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F7570, void, CacheOriginals, (app::UberInteractionExplosionAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F7650, void, SampleValue, (app::UberInteractionExplosionAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x013F77F0, void, RestoreToOriginalState, (app::UberInteractionExplosionAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::UberInteractionExplosionAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::UberInteractionExplosionAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00990E80, void, ctor, (app::UberInteractionExplosionAnimator * this_ptr))
} // namespace app::classes::UberInteractionExplosionAnimator
