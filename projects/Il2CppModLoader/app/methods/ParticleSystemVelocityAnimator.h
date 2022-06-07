#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ParticleSystemVelocityAnimator {
    IL2CPP_REGISTER_METHOD(0x00446040, void, CacheOriginals, (app::ParticleSystemVelocityAnimator * this_ptr, app::ParticleSystem * particle_system_to_animate))
    IL2CPP_REGISTER_METHOD(0x00446140, void, SampleValue, (app::ParticleSystemVelocityAnimator * this_ptr, float value, app::ParticleSystem * particle_system_to_animate))
    IL2CPP_REGISTER_METHOD(0x00446280, void, RestoreToOriginalState, (app::ParticleSystemVelocityAnimator * this_ptr, app::ParticleSystem * particle_system_to_animate))
    IL2CPP_REGISTER_METHOD(0x00446000, void, ctor, (app::ParticleSystemVelocityAnimator * this_ptr))
}
