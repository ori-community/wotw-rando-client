#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpiritLightAffectorIntensityAnimator {
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::SpiritLightAffectorIntensityAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D60750, void, CacheOriginals, (app::SpiritLightAffectorIntensityAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D60780, void, SampleValue, (app::SpiritLightAffectorIntensityAnimator * this_ptr, float time, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::SpiritLightAffectorIntensityAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D60870, void, RestoreToOriginalState, (app::SpiritLightAffectorIntensityAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D608A0, void, Reset, (app::SpiritLightAffectorIntensityAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D60970, void, ctor, (app::SpiritLightAffectorIntensityAnimator * this_ptr))
} // namespace app::classes::SpiritLightAffectorIntensityAnimator
