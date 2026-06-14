#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/ParticleSystemSimulationSpace__Enum.h>
#include <Modloader/app/structs/ParticleSystemStopBehavior__Enum.h>
#include <Modloader/app/structs/ParticleSystem_CollisionModule.h>
#include <Modloader/app/structs/ParticleSystem_ColorOverLifetimeModule.h>
#include <Modloader/app/structs/ParticleSystem_EmissionModule.h>
#include <Modloader/app/structs/ParticleSystem_EmitParams.h>
#include <Modloader/app/structs/ParticleSystem_ForceOverLifetimeModule.h>
#include <Modloader/app/structs/ParticleSystem_MainModule.h>
#include <Modloader/app/structs/ParticleSystem_Particle.h>
#include <Modloader/app/structs/ParticleSystem_Particle__Array.h>
#include <Modloader/app/structs/ParticleSystem_ShapeModule.h>
#include <Modloader/app/structs/ParticleSystem_VelocityOverLifetimeModule.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::ParticleSystem {
    IL2CPP_REGISTER_METHOD(
        0x03132610,
        void,
        Emit_1,
        app::ParticleSystem* this_ptr,
        app::Vector3 position,
        app::Vector3 velocity,
        float size,
        float lifetime,
        app::Color32 color
    )
    IL2CPP_REGISTER_METHOD(0x031327D0, void, Emit_2, app::ParticleSystem* this_ptr, app::ParticleSystem_Particle particle)
    IL2CPP_REGISTER_METHOD(0x03132830, bool, get_loop, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03132880, void, set_playOnAwake, app::ParticleSystem* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x031328E0, float, get_duration, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03132930, bool, get_enableEmission, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03132980, void, set_enableEmission, app::ParticleSystem* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x031329E0, float, get_emissionRate, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03132A30, void, set_emissionRate, app::ParticleSystem* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03132AC0, float, get_startSpeed, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03132B10, void, set_startSpeed, app::ParticleSystem* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03132B70, app::Color, get_startColor, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03132C00, void, set_startColor, app::ParticleSystem* this_ptr, app::Color value)
    IL2CPP_REGISTER_METHOD(0x03132CB0, int32_t, get_maxParticles, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03132D00, void, set_simulationSpace, app::ParticleSystem* this_ptr, app::ParticleSystemSimulationSpace__Enum value)
    IL2CPP_REGISTER_METHOD(0x03132D60, bool, get_isPlaying, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03132DB0, int32_t, get_particleCount, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03132E00, void, set_randomSeed, app::ParticleSystem* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x0238D4F0, app::ParticleSystem_MainModule, get_main, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0238D4F0, app::ParticleSystem_EmissionModule, get_emission, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0238D4F0, app::ParticleSystem_ShapeModule, get_shape, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0238D4F0, app::ParticleSystem_VelocityOverLifetimeModule, get_velocityOverLifetime, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0238D4F0, app::ParticleSystem_ForceOverLifetimeModule, get_forceOverLifetime, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0238D4F0, app::ParticleSystem_ColorOverLifetimeModule, get_colorOverLifetime, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0238D4F0, app::ParticleSystem_CollisionModule, get_collision, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x03132E60,
        void,
        SetParticles_1,
        app::ParticleSystem* this_ptr,
        app::ParticleSystem_Particle__Array* particles,
        int32_t size,
        int32_t offset
    )
    IL2CPP_REGISTER_METHOD(0x03132EE0, void, SetParticles_2, app::ParticleSystem* this_ptr, app::ParticleSystem_Particle__Array* particles, int32_t size)
    IL2CPP_REGISTER_METHOD(
        0x03132F60,
        int32_t,
        GetParticles_1,
        app::ParticleSystem* this_ptr,
        app::ParticleSystem_Particle__Array* particles,
        int32_t size,
        int32_t offset
    )
    IL2CPP_REGISTER_METHOD(0x03132FE0, int32_t, GetParticles_2, app::ParticleSystem* this_ptr, app::ParticleSystem_Particle__Array* particles, int32_t size)
    IL2CPP_REGISTER_METHOD(0x03133060, int32_t, GetParticles_3, app::ParticleSystem* this_ptr, app::ParticleSystem_Particle__Array* particles)
    IL2CPP_REGISTER_METHOD(0x031330D0, void, Simulate_1, app::ParticleSystem* this_ptr, float t, bool with_children, bool restart, bool fixed_time_step)
    IL2CPP_REGISTER_METHOD(0x03133160, void, Simulate_2, app::ParticleSystem* this_ptr, float t, bool with_children, bool restart)
    IL2CPP_REGISTER_METHOD(0x031331F0, void, Simulate_3, app::ParticleSystem* this_ptr, float t, bool with_children)
    IL2CPP_REGISTER_METHOD(0x03133210, void, Simulate_4, app::ParticleSystem* this_ptr, float t)
    IL2CPP_REGISTER_METHOD(0x03133230, void, Play_1, app::ParticleSystem* this_ptr, bool with_children)
    IL2CPP_REGISTER_METHOD(0x03133290, void, Play_2, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031332F0, void, Pause_1, app::ParticleSystem* this_ptr, bool with_children)
    IL2CPP_REGISTER_METHOD(0x03133350, void, Pause_2, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031333B0, void, Stop_1, app::ParticleSystem* this_ptr, bool with_children, app::ParticleSystemStopBehavior__Enum stop_behavior)
    IL2CPP_REGISTER_METHOD(0x03133420, void, Stop_2, app::ParticleSystem* this_ptr, bool with_children)
    IL2CPP_REGISTER_METHOD(0x03133490, void, Stop_3, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031334F0, void, Clear_1, app::ParticleSystem* this_ptr, bool with_children)
    IL2CPP_REGISTER_METHOD(0x03133550, void, Clear_2, app::ParticleSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031335B0, void, Emit_3, app::ParticleSystem* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x031335B0, void, Emit_Internal, app::ParticleSystem* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x03133610, void, Emit_4, app::ParticleSystem* this_ptr, app::ParticleSystem_EmitParams emit_params, int32_t count)
    IL2CPP_REGISTER_METHOD(0x03133680, bool, GetDeallocateInactiveParticles, )
    IL2CPP_REGISTER_METHOD(0x031336D0, void, SetDeallocateInactiveParticles, bool value)
    IL2CPP_REGISTER_METHOD(0x03133720, bool, GetDisableAllParticles, )
    IL2CPP_REGISTER_METHOD(0x03133770, void, SetDisableAllParticles, bool value)
    IL2CPP_REGISTER_METHOD(0x00490410, bool, GetDisableFixedTimestep, )
    IL2CPP_REGISTER_METHOD(0x031337C0, void, SetDisableFixedTimestep, bool value)
    IL2CPP_REGISTER_METHOD(0x03133810, void, Internal_EmitOld, app::ParticleSystem* this_ptr, app::ParticleSystem_Particle* particle)
    IL2CPP_REGISTER_METHOD(0x03133870, void, Emit_Injected, app::ParticleSystem* this_ptr, app::ParticleSystem_EmitParams* emit_params, int32_t count)
} // namespace app::classes::UnityEngine::ParticleSystem
