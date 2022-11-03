#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ParticleSuspender {
    IL2CPP_REGISTER_METHOD(0x00444910, void, OnPoolSpawned, (app::ParticleSuspender * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::ParticleSuspender * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444920, void, Awake, (app::ParticleSuspender * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444A90, void, Suspend, (app::ParticleSuspender * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444B60, void, Resume, (app::ParticleSuspender * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444C30, void, set_IsSuspended, (app::ParticleSuspender * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_IsSuspended, (app::ParticleSuspender * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::ParticleSuspender * this_ptr))
} // namespace app::classes::ParticleSuspender
