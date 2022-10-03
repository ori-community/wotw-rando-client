#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::ParticleSystem_ColorOverLifetimeModule {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::ParticleSystem_ColorOverLifetimeModule__Boxed * this_ptr, app::ParticleSystem* particle_system))
    IL2CPP_REGISTER_METHOD(0x002471C0, void, set_color, (app::ParticleSystem_ColorOverLifetimeModule__Boxed * this_ptr, app::ParticleSystem_MinMaxGradient value))
    IL2CPP_REGISTER_METHOD(0x00247240, app::ParticleSystem_MinMaxGradient, get_color, (app::ParticleSystem_ColorOverLifetimeModule__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03133AA0, void, SetColor, (app::ParticleSystem * system, app::ParticleSystem_MinMaxGradient* gradient))
    IL2CPP_REGISTER_METHOD(0x03133B00, void, GetColor, (app::ParticleSystem * system, app::ParticleSystem_MinMaxGradient* gradient))
} // namespace app::classes::UnityEngine::ParticleSystem_ColorOverLifetimeModule
