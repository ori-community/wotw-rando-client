#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ParticleSystemSpeedAnimator {
    IL2CPP_REGISTER_METHOD(0x00445E40, void, CacheOriginals, (app::ParticleSystemSpeedAnimator * this_ptr, app::ParticleSystem* particle_system_to_animate))
    IL2CPP_REGISTER_METHOD(0x00445EB0, void, SampleValue, (app::ParticleSystemSpeedAnimator * this_ptr, float value, app::ParticleSystem* particle_system_to_animate))
    IL2CPP_REGISTER_METHOD(0x00445F90, void, RestoreToOriginalState, (app::ParticleSystemSpeedAnimator * this_ptr, app::ParticleSystem* particle_system_to_animate))
    IL2CPP_REGISTER_METHOD(0x00446000, void, ctor, (app::ParticleSystemSpeedAnimator * this_ptr))
} // namespace app::classes::ParticleSystemSpeedAnimator
