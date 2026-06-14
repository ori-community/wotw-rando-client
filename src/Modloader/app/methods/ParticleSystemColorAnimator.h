#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/ParticleSystemColorAnimator.h>

namespace app::classes::ParticleSystemColorAnimator {
    IL2CPP_REGISTER_METHOD(0x00444DE0, void, CacheOriginals, app::ParticleSystemColorAnimator* this_ptr, app::ParticleSystem* particle_system_to_animate)
    IL2CPP_REGISTER_METHOD(
        0x00444E80,
        void,
        SampleValue,
        app::ParticleSystemColorAnimator* this_ptr,
        float value,
        app::ParticleSystem* particle_system_to_animate
    )
    IL2CPP_REGISTER_METHOD(
        0x00444F60,
        void,
        RestoreToOriginalState,
        app::ParticleSystemColorAnimator* this_ptr,
        app::ParticleSystem* particle_system_to_animate
    )
    IL2CPP_REGISTER_METHOD(0x00444F90, void, ctor, app::ParticleSystemColorAnimator* this_ptr)
} // namespace app::classes::ParticleSystemColorAnimator
