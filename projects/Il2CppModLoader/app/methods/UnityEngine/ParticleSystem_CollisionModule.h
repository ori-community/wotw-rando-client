#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::ParticleSystem_CollisionModule {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::ParticleSystem_CollisionModule__Boxed * this_ptr, app::ParticleSystem* particle_system))
    IL2CPP_REGISTER_METHOD(0x00247130, void, set_enabled, (app::ParticleSystem_CollisionModule__Boxed * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00247140, bool, get_enabled, (app::ParticleSystem_CollisionModule__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03133940, void, SetEnabled, (app::ParticleSystem * system, bool value))
    IL2CPP_REGISTER_METHOD(0x031339A0, bool, GetEnabled, (app::ParticleSystem * system))
} // namespace app::classes::UnityEngine::ParticleSystem_CollisionModule
