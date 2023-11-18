#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritLightAffectorRadiusAnimator.h>

namespace app::classes::SpiritLightAffectorRadiusAnimator {
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::SpiritLightAffectorRadiusAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D60BB0, void, CacheOriginals, (app::SpiritLightAffectorRadiusAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D60BE0, void, SampleValue, (app::SpiritLightAffectorRadiusAnimator * this_ptr, float time, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::SpiritLightAffectorRadiusAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D60CD0, void, RestoreToOriginalState, (app::SpiritLightAffectorRadiusAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D60D00, void, Reset, (app::SpiritLightAffectorRadiusAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D60DD0, void, ctor, (app::SpiritLightAffectorRadiusAnimator * this_ptr))
} // namespace app::classes::SpiritLightAffectorRadiusAnimator
