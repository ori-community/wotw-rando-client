#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MiscUpdater {
    IL2CPP_REGISTER_METHOD(0x01459880, app::MiscUpdater*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x01459920, void, set_Instance, (app::MiscUpdater * value))
    IL2CPP_REGISTER_METHOD(0x014599D0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x01459BA0, void, Awake, (app::MiscUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01459C40, void, OnDestroy, (app::MiscUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01459CD0, void, Register_1, (app::CollisionSoundSource * collision_sound_source))
    IL2CPP_REGISTER_METHOD(0x01459D90, void, Unregister_1, (app::CollisionSoundSource * collision_sound_source))
    IL2CPP_REGISTER_METHOD(0x01459E50, void, Register_2, (app::LimitedLifetime * limited_lifetime))
    IL2CPP_REGISTER_METHOD(0x01459F10, void, Unregister_2, (app::LimitedLifetime * limited_lifetime))
    IL2CPP_REGISTER_METHOD(0x01459FD0, void, Register_3, (app::ParticleSystemEmissionRateOverDistance * particle_system_emission_rate_over_distance))
    IL2CPP_REGISTER_METHOD(0x0145A090, void, Unregister_3, (app::ParticleSystemEmissionRateOverDistance * particle_system_emission_rate_over_distance))
    IL2CPP_REGISTER_METHOD(0x0145A150, void, Register_4, (app::ProtectiveLightRadial * protective_light_radial))
    IL2CPP_REGISTER_METHOD(0x0145A210, void, Unregister_4, (app::ProtectiveLightRadial * protective_light_radial))
    IL2CPP_REGISTER_METHOD(0x0145A2D0, void, Register_5, (app::UnparentTrailRenderer * unparent_trail_renderer))
    IL2CPP_REGISTER_METHOD(0x0145A390, void, Unregister_5, (app::UnparentTrailRenderer * unparent_trail_renderer))
    IL2CPP_REGISTER_METHOD(0x0145A450, void, Update, (app::MiscUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0145A930, void, FixedUpdate, (app::MiscUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MiscUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0145AC70, void, cctor, ())
} // namespace app::classes::MiscUpdater
