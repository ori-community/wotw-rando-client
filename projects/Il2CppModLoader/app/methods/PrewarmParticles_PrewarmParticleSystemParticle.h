#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PrewarmParticles_PrewarmParticleSystemParticle {
    IL2CPP_REGISTER_METHOD(0x03191620, void, ctor, (app::PrewarmParticles_PrewarmParticleSystemParticle * this_ptr, app::ParticleSystem_Particle particle))
    IL2CPP_REGISTER_METHOD(0x03191710, app::ParticleSystem_Particle, ToParticle, (app::PrewarmParticles_PrewarmParticleSystemParticle * this_ptr))
} // namespace app::classes::PrewarmParticles_PrewarmParticleSystemParticle
