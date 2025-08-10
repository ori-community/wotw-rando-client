#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/ParticleSystem_MinMaxCurve.h>
#include <Modloader/app/structs/ParticleSystem_VelocityOverLifetimeModule__Boxed.h>

namespace app::classes::UnityEngine::ParticleSystem_VelocityOverLifetimeModule {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr, app::ParticleSystem* particle_system)
    IL2CPP_REGISTER_METHOD(0x00248A70, void, set_x, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr, app::ParticleSystem_MinMaxCurve value)
    IL2CPP_REGISTER_METHOD(0x00248AE0, app::ParticleSystem_MinMaxCurve, get_x, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00248B70, void, set_y, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr, app::ParticleSystem_MinMaxCurve value)
    IL2CPP_REGISTER_METHOD(0x00248BE0, app::ParticleSystem_MinMaxCurve, get_y, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00248C70, void, set_z, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr, app::ParticleSystem_MinMaxCurve value)
    IL2CPP_REGISTER_METHOD(0x00248CE0, app::ParticleSystem_MinMaxCurve, get_z, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00248D70,
        void,
        set_orbitalX,
        app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr,
        app::ParticleSystem_MinMaxCurve value
    )
    IL2CPP_REGISTER_METHOD(0x00248DE0, app::ParticleSystem_MinMaxCurve, get_orbitalX, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00248E70,
        void,
        set_orbitalY,
        app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr,
        app::ParticleSystem_MinMaxCurve value
    )
    IL2CPP_REGISTER_METHOD(0x00248EE0, app::ParticleSystem_MinMaxCurve, get_orbitalY, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00248F70,
        void,
        set_orbitalZ,
        app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr,
        app::ParticleSystem_MinMaxCurve value
    )
    IL2CPP_REGISTER_METHOD(0x00248FE0, app::ParticleSystem_MinMaxCurve, get_orbitalZ, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00249070,
        void,
        set_orbitalOffsetX,
        app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr,
        app::ParticleSystem_MinMaxCurve value
    )
    IL2CPP_REGISTER_METHOD(0x002490E0, app::ParticleSystem_MinMaxCurve, get_orbitalOffsetX, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00249170,
        void,
        set_orbitalOffsetY,
        app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr,
        app::ParticleSystem_MinMaxCurve value
    )
    IL2CPP_REGISTER_METHOD(0x002491E0, app::ParticleSystem_MinMaxCurve, get_orbitalOffsetY, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00249270,
        void,
        set_orbitalOffsetZ,
        app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr,
        app::ParticleSystem_MinMaxCurve value
    )
    IL2CPP_REGISTER_METHOD(0x002492E0, app::ParticleSystem_MinMaxCurve, get_orbitalOffsetZ, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00249370, void, set_radial, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr, app::ParticleSystem_MinMaxCurve value)
    IL2CPP_REGISTER_METHOD(0x002493E0, app::ParticleSystem_MinMaxCurve, get_radial, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00249470,
        void,
        set_speedModifier,
        app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr,
        app::ParticleSystem_MinMaxCurve value
    )
    IL2CPP_REGISTER_METHOD(0x002494E0, app::ParticleSystem_MinMaxCurve, get_speedModifier, app::ParticleSystem_VelocityOverLifetimeModule__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03135810, void, SetX, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135870, void, GetX, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x031358D0, void, SetY, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135930, void, GetY, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135990, void, SetZ, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x031359F0, void, GetZ, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135A50, void, SetOrbitalX, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135AB0, void, GetOrbitalX, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135B10, void, SetOrbitalY, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135B70, void, GetOrbitalY, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135BD0, void, SetOrbitalZ, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135C30, void, GetOrbitalZ, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135C90, void, SetOrbitalOffsetX, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135CF0, void, GetOrbitalOffsetX, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135D50, void, SetOrbitalOffsetY, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135DB0, void, GetOrbitalOffsetY, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135E10, void, SetOrbitalOffsetZ, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135E70, void, GetOrbitalOffsetZ, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135ED0, void, SetRadial, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135F30, void, GetRadial, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135F90, void, SetSpeedModifier, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03135FF0, void, GetSpeedModifier, app::ParticleSystem* system, app::ParticleSystem_MinMaxCurve* curve)
} // namespace app::classes::UnityEngine::ParticleSystem_VelocityOverLifetimeModule
