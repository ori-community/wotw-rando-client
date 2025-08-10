#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/ParticleSystemForceAnimator.h>

namespace app::classes::ParticleSystemForceAnimator {
    IL2CPP_REGISTER_METHOD(0x00445770, void, CacheOriginals, app::ParticleSystemForceAnimator* this_ptr, app::ParticleSystem* particle_system_to_animate)
    IL2CPP_REGISTER_METHOD(
        0x004458E0,
        void,
        SampleValue,
        app::ParticleSystemForceAnimator* this_ptr,
        float value,
        app::ParticleSystem* particle_system_to_animate
    )
    IL2CPP_REGISTER_METHOD(
        0x00445BF0,
        void,
        RestoreToOriginalState,
        app::ParticleSystemForceAnimator* this_ptr,
        app::ParticleSystem* particle_system_to_animate
    )
    IL2CPP_REGISTER_METHOD(0x00445DB0, void, ctor, app::ParticleSystemForceAnimator* this_ptr)
} // namespace app::classes::ParticleSystemForceAnimator
