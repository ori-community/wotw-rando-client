#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyParticleEmissionRateAnimator.h>

namespace app::classes::LegacyParticleEmissionRateAnimator {
    IL2CPP_REGISTER_METHOD(0x00A2F380, void, FetchInitialEmitterValues, (app::LegacyParticleEmissionRateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2F4A0, void, Awake, (app::LegacyParticleEmissionRateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2F5D0, void, AnimateIt, (app::LegacyParticleEmissionRateAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00579090, void, RestoreToOriginalState, (app::LegacyParticleEmissionRateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005790B0, void, ctor, (app::LegacyParticleEmissionRateAnimator * this_ptr))
} // namespace app::classes::LegacyParticleEmissionRateAnimator
