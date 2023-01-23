#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/ShurikenParticleAnimator.h>

namespace app::classes::ShurikenParticleAnimator {
    IL2CPP_REGISTER_METHOD(0x0073E1F0, app::ParticleSystem*, get_ParticleSystem, (app::ShurikenParticleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073E2C0, void, OnPoolSpawned, (app::ShurikenParticleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073E310, void, CacheOriginals, (app::ShurikenParticleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073E3F0, void, CacheAnimators, (app::ShurikenParticleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073E5D0, void, SampleValue, (app::ShurikenParticleAnimator * this_ptr, float time, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x0073E750, void, SampleAnimators, (app::ShurikenParticleAnimator * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x0073E870, void, RestoreToOriginalState, (app::ShurikenParticleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073E990, void, RestoreAnimatorsToOriginalState, (app::ShurikenParticleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073EAA0, float, get_Duration, (app::ShurikenParticleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073EB10, bool, get_IsLooping, (app::ShurikenParticleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073EB80, void, ctor, (app::ShurikenParticleAnimator * this_ptr))
} // namespace app::classes::ShurikenParticleAnimator
