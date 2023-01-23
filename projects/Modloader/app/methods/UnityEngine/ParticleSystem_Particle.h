#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ParticleSystem_Particle__Boxed.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Color32.h>

namespace app::classes::UnityEngine::ParticleSystem_Particle {
    IL2CPP_REGISTER_METHOD(0x002487A0, void, set_lifetime, (app::ParticleSystem_Particle__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001EB5F0, app::Vector3, get_position, (app::ParticleSystem_Particle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB610, void, set_position, (app::ParticleSystem_Particle__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x001EB680, app::Vector3, get_velocity, (app::ParticleSystem_Particle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB6A0, void, set_velocity, (app::ParticleSystem_Particle__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x002487B0, float, get_remainingLifetime, (app::ParticleSystem_Particle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002487A0, void, set_remainingLifetime, (app::ParticleSystem_Particle__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002487C0, float, get_startLifetime, (app::ParticleSystem_Particle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002487D0, void, set_startLifetime, (app::ParticleSystem_Particle__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002487E0, app::Color32, get_startColor, (app::ParticleSystem_Particle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00111C30, void, set_startColor, (app::ParticleSystem_Particle__Boxed * this_ptr, app::Color32 value))
    IL2CPP_REGISTER_METHOD(0x001F0E60, uint32_t, get_randomSeed, (app::ParticleSystem_Particle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00116360, void, set_randomSeed, (app::ParticleSystem_Particle__Boxed * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x002487F0, app::Vector3, get_axisOfRotation, (app::ParticleSystem_Particle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00114600, void, set_axisOfRotation, (app::ParticleSystem_Particle__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00248810, float, get_startSize, (app::ParticleSystem_Particle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00248820, void, set_startSize, (app::ParticleSystem_Particle__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00248850, float, get_rotation, (app::ParticleSystem_Particle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00248860, void, set_rotation, (app::ParticleSystem_Particle__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00248890, void, set_rotation3D, (app::ParticleSystem_Particle__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x002488C0, float, get_angularVelocity, (app::ParticleSystem_Particle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002488D0, void, set_angularVelocity, (app::ParticleSystem_Particle__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00248900, void, set_angularVelocity3D, (app::ParticleSystem_Particle__Boxed * this_ptr, app::Vector3 value))
} // namespace app::classes::UnityEngine::ParticleSystem_Particle
