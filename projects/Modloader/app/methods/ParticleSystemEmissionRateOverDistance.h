#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ParticleSystemEmissionRateOverDistance.h>

namespace app::classes::ParticleSystemEmissionRateOverDistance {
    IL2CPP_REGISTER_METHOD(0x00444FB0, void, OnPoolSpawned, (app::ParticleSystemEmissionRateOverDistance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::ParticleSystemEmissionRateOverDistance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00445060, void, OnEnable, (app::ParticleSystemEmissionRateOverDistance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004451B0, void, OnDisable, (app::ParticleSystemEmissionRateOverDistance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00445300, void, Awake, (app::ParticleSystemEmissionRateOverDistance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00445390, void, Start, (app::ParticleSystemEmissionRateOverDistance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00445470, void, OnUpdate, (app::ParticleSystemEmissionRateOverDistance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004456C0, void, OnBuild, (app::ParticleSystemEmissionRateOverDistance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004456E0, void, CacheComponents, (app::ParticleSystemEmissionRateOverDistance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ParticleSystemEmissionRateOverDistance * this_ptr))
} // namespace app::classes::ParticleSystemEmissionRateOverDistance
