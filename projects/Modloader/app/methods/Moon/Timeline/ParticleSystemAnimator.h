#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::ParticleSystemAnimator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::ParticleSystemAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E78090, app::ParticleSystem*, get_ResolvedParticleSystem, (app::ParticleSystemAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E781A0, int32_t, get_Hash, (app::ParticleSystemAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E78380, void, Awake, (app::ParticleSystemAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E783A0, void, OnStartPlayback, (app::ParticleSystemAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01E786D0, void, OnStopPlayback, (app::ParticleSystemAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E78910, void, OnPausePlayback, (app::ParticleSystemAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E78980, void, OnResumePlayback, (app::ParticleSystemAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E789F0, void, OnUpdateEntity, (app::ParticleSystemAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01E78B30, void, CheckAndCacheChildParticles, (app::ParticleSystemAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E78D90, void, ctor, (app::ParticleSystemAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::ParticleSystemAnimator
