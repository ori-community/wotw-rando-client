#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/ParticleSystemSimulationSpace__Enum.h>
#include <Modloader/app/structs/ParticleSystem_MainModule__Boxed.h>
#include <Modloader/app/structs/ParticleSystem_MinMaxCurve.h>
#include <Modloader/app/structs/ParticleSystem_MinMaxGradient.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::UnityEngine::ParticleSystem_MainModule {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, app::ParticleSystem_MainModule__Boxed* this_ptr, app::ParticleSystem* particle_system)
    IL2CPP_REGISTER_METHOD(0x00247CC0, float, get_duration, app::ParticleSystem_MainModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00247D20, bool, get_loop, app::ParticleSystem_MainModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00247D80, bool, get_prewarm, app::ParticleSystem_MainModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00247DE0, void, set_startLifetime, app::ParticleSystem_MainModule__Boxed* this_ptr, app::ParticleSystem_MinMaxCurve value)
    IL2CPP_REGISTER_METHOD(0x00247E50, app::ParticleSystem_MinMaxCurve, get_startLifetime, app::ParticleSystem_MainModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00247EE0, void, set_startSpeed, app::ParticleSystem_MainModule__Boxed* this_ptr, app::ParticleSystem_MinMaxCurve value)
    IL2CPP_REGISTER_METHOD(0x00247F50, app::ParticleSystem_MinMaxCurve, get_startSpeed, app::ParticleSystem_MainModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00247FE0, float, get_startSpeedMultiplier, app::ParticleSystem_MainModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00248040, void, set_startSpeedMultiplier, app::ParticleSystem_MainModule__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00248050, void, set_startSizeX, app::ParticleSystem_MainModule__Boxed* this_ptr, app::ParticleSystem_MinMaxCurve value)
    IL2CPP_REGISTER_METHOD(0x002480C0, app::ParticleSystem_MinMaxCurve, get_startSizeX, app::ParticleSystem_MainModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00248150, void, set_startSizeY, app::ParticleSystem_MainModule__Boxed* this_ptr, app::ParticleSystem_MinMaxCurve value)
    IL2CPP_REGISTER_METHOD(0x002481C0, app::ParticleSystem_MinMaxCurve, get_startSizeY, app::ParticleSystem_MainModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00248250, void, set_startSizeZ, app::ParticleSystem_MainModule__Boxed* this_ptr, app::ParticleSystem_MinMaxCurve value)
    IL2CPP_REGISTER_METHOD(0x002482C0, app::ParticleSystem_MinMaxCurve, get_startSizeZ, app::ParticleSystem_MainModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00248350, void, set_startRotation, app::ParticleSystem_MainModule__Boxed* this_ptr, app::ParticleSystem_MinMaxCurve value)
    IL2CPP_REGISTER_METHOD(0x002483C0, void, set_startColor, app::ParticleSystem_MainModule__Boxed* this_ptr, app::ParticleSystem_MinMaxGradient value)
    IL2CPP_REGISTER_METHOD(0x00248440, app::ParticleSystem_MinMaxGradient, get_startColor, app::ParticleSystem_MainModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00248480, float, get_gravityModifierMultiplier, app::ParticleSystem_MainModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002484E0, void, set_gravityModifierMultiplier, app::ParticleSystem_MainModule__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(
        0x002484F0,
        void,
        set_simulationSpace,
        app::ParticleSystem_MainModule__Boxed* this_ptr,
        app::ParticleSystemSimulationSpace__Enum value
    )
    IL2CPP_REGISTER_METHOD(0x00248550, void, set_customSimulationSpace, app::ParticleSystem_MainModule__Boxed* this_ptr, app::Transform* value)
    IL2CPP_REGISTER_METHOD(0x00248560, float, get_simulationSpeed, app::ParticleSystem_MainModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002485C0, void, set_simulationSpeed, app::ParticleSystem_MainModule__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x002485D0, bool, get_playOnAwake, app::ParticleSystem_MainModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00248630, void, set_playOnAwake, app::ParticleSystem_MainModule__Boxed* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00248640, int32_t, get_maxParticles, app::ParticleSystem_MainModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002486A0, void, set_maxParticles, app::ParticleSystem_MainModule__Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x031349E0, float, GetDuration, app::ParticleSystem* system)
    IL2CPP_REGISTER_METHOD(0x03134A30, bool, GetLoop, app::ParticleSystem* system)
    IL2CPP_REGISTER_METHOD(0x03134A80, bool, GetPrewarm, app::ParticleSystem* system)
    IL2CPP_REGISTER_METHOD(0x03134AD0, void, SetStartLifetime, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03134B30, void, GetStartLifetime, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03134B90, void, SetStartSpeed, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03134BF0, void, GetStartSpeed, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03134C50, void, SetStartSpeedMultiplier, app::ParticleSystem* system, float value)
    IL2CPP_REGISTER_METHOD(0x03134CB0, float, GetStartSpeedMultiplier, app::ParticleSystem* system)
    IL2CPP_REGISTER_METHOD(0x03134D00, void, SetStartSizeX, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03134D60, void, GetStartSizeX, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03134DC0, void, SetStartSizeY, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03134E20, void, GetStartSizeY, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03134E80, void, SetStartSizeZ, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03134EE0, void, GetStartSizeZ, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03134F40, void, SetStartRotationZ, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03134FA0, void, SetStartColor, app::ParticleSystem* system, app::ParticleSystem_MinMaxGradient* gradient)
    IL2CPP_REGISTER_METHOD(0x03135000, void, GetStartColor, app::ParticleSystem* system, app::ParticleSystem_MinMaxGradient* gradient)
    IL2CPP_REGISTER_METHOD(0x03135060, void, SetGravityModifierMultiplier, app::ParticleSystem* system, float value)
    IL2CPP_REGISTER_METHOD(0x031350C0, float, GetGravityModifierMultiplier, app::ParticleSystem* system)
    IL2CPP_REGISTER_METHOD(0x03135110, void, SetSimulationSpace, app::ParticleSystem* system, app::ParticleSystemSimulationSpace__Enum value)
    IL2CPP_REGISTER_METHOD(0x03135170, void, SetCustomSimulationSpace, app::ParticleSystem* system, app::Transform* value)
    IL2CPP_REGISTER_METHOD(0x031351D0, void, SetSimulationSpeed, app::ParticleSystem* system, float value)
    IL2CPP_REGISTER_METHOD(0x03135230, float, GetSimulationSpeed, app::ParticleSystem* system)
    IL2CPP_REGISTER_METHOD(0x03135280, void, SetPlayOnAwake, app::ParticleSystem* system, bool value)
    IL2CPP_REGISTER_METHOD(0x031352E0, bool, GetPlayOnAwake, app::ParticleSystem* system)
    IL2CPP_REGISTER_METHOD(0x03135330, void, SetMaxParticles, app::ParticleSystem* system, int32_t value)
    IL2CPP_REGISTER_METHOD(0x03135390, int32_t, GetMaxParticles, app::ParticleSystem* system)
} // namespace app::classes::UnityEngine::ParticleSystem_MainModule
