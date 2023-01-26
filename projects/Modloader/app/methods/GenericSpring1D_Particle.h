#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericSpring1D_Particle.h>

namespace app::classes::GenericSpring1D_Particle {
    IL2CPP_REGISTER_METHOD(0x00CFCF00, void, ctor, (app::GenericSpring1D_Particle * this_ptr, float value, float velocity, float mass))
}
