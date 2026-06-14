#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericSpring1D.h>
#include <Modloader/app/structs/GenericSpring1D_Particle.h>

namespace app::classes::GenericSpring1D {
    IL2CPP_REGISTER_METHOD(0x00E109B0, void, Step, app::GenericSpring1D* this_ptr, app::GenericSpring1D_Particle** particle)
    IL2CPP_REGISTER_METHOD(0x00E10B10, float, NormalizedValue, app::GenericSpring1D* this_ptr, app::GenericSpring1D_Particle* particle)
    IL2CPP_REGISTER_METHOD(
        0x00E10B40,
        float,
        DampenedHookeForce,
        app::GenericSpring1D* this_ptr,
        float displacement,
        float velocity,
        float stiffness,
        float damping
    )
    IL2CPP_REGISTER_METHOD(0x00E10B60, bool, IsParticleResting, app::GenericSpring1D* this_ptr, app::GenericSpring1D_Particle* particle)
    IL2CPP_REGISTER_METHOD(0x00E10C80, void, ctor, app::GenericSpring1D* this_ptr)
} // namespace app::classes::GenericSpring1D
