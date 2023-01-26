#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ParticleSystem_ForceOverLifetimeModule__Boxed.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/ParticleSystem_MinMaxCurve.h>

namespace app::classes::UnityEngine::ParticleSystem_ForceOverLifetimeModule {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::ParticleSystem_ForceOverLifetimeModule__Boxed * this_ptr, app::ParticleSystem* particle_system))
    IL2CPP_REGISTER_METHOD(0x002479A0, void, set_x, (app::ParticleSystem_ForceOverLifetimeModule__Boxed * this_ptr, app::ParticleSystem_MinMaxCurve value))
    IL2CPP_REGISTER_METHOD(0x00247A10, app::ParticleSystem_MinMaxCurve, get_x, (app::ParticleSystem_ForceOverLifetimeModule__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00247AA0, void, set_y, (app::ParticleSystem_ForceOverLifetimeModule__Boxed * this_ptr, app::ParticleSystem_MinMaxCurve value))
    IL2CPP_REGISTER_METHOD(0x00247B10, app::ParticleSystem_MinMaxCurve, get_y, (app::ParticleSystem_ForceOverLifetimeModule__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00247BA0, void, set_z, (app::ParticleSystem_ForceOverLifetimeModule__Boxed * this_ptr, app::ParticleSystem_MinMaxCurve value))
    IL2CPP_REGISTER_METHOD(0x00247C10, app::ParticleSystem_MinMaxCurve, get_z, (app::ParticleSystem_ForceOverLifetimeModule__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03134470, void, SetX, (app::ParticleSystem * system, app::ParticleSystem_MinMaxCurve* curve))
    IL2CPP_REGISTER_METHOD(0x031344D0, void, GetX, (app::ParticleSystem * system, app::ParticleSystem_MinMaxCurve* curve))
    IL2CPP_REGISTER_METHOD(0x03134530, void, SetY, (app::ParticleSystem * system, app::ParticleSystem_MinMaxCurve* curve))
    IL2CPP_REGISTER_METHOD(0x03134590, void, GetY, (app::ParticleSystem * system, app::ParticleSystem_MinMaxCurve* curve))
    IL2CPP_REGISTER_METHOD(0x031345F0, void, SetZ, (app::ParticleSystem * system, app::ParticleSystem_MinMaxCurve* curve))
    IL2CPP_REGISTER_METHOD(0x03134650, void, GetZ, (app::ParticleSystem * system, app::ParticleSystem_MinMaxCurve* curve))
} // namespace app::classes::UnityEngine::ParticleSystem_ForceOverLifetimeModule
