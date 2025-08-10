#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PrewarmParticles.h>

namespace app::classes::PrewarmParticles {
    IL2CPP_REGISTER_METHOD(0x03190E30, void, Save, app::PrewarmParticles* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03190E40, void, Awake, app::PrewarmParticles* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03191180, void, CacheParticleSystem, app::PrewarmParticles* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::PrewarmParticles* this_ptr)
} // namespace app::classes::PrewarmParticles
