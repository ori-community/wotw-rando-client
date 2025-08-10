#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ParticlesSuspendable.h>

namespace app::classes::ParticlesSuspendable {
    IL2CPP_REGISTER_METHOD(0x00446340, void, Awake, app::ParticlesSuspendable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004463D0, void, Suspend, app::ParticlesSuspendable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446440, void, Resume, app::ParticlesSuspendable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004464B0, void, set_IsSuspended, app::ParticlesSuspendable* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsSuspended, app::ParticlesSuspendable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, app::ParticlesSuspendable* this_ptr)
} // namespace app::classes::ParticlesSuspendable
