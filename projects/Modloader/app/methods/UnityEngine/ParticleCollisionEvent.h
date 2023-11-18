#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/ParticleCollisionEvent__Boxed.h>

namespace app::classes::UnityEngine::ParticleCollisionEvent {
    IL2CPP_REGISTER_METHOD(0x001EB5F0, app::Vector3, get_intersection, (app::ParticleCollisionEvent__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB680, app::Vector3, get_normal, (app::ParticleCollisionEvent__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00247080, app::Vector3, get_velocity, (app::ParticleCollisionEvent__Boxed * this_ptr))
} // namespace app::classes::UnityEngine::ParticleCollisionEvent
