#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RigidbodySuspendable.h>

namespace app::classes::RigidbodySuspendable {
    IL2CPP_REGISTER_METHOD(0x013548F0, void, OnPoolSpawned, app::RigidbodySuspendable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::RigidbodySuspendable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013549D0, void, Awake, app::RigidbodySuspendable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01354AD0, void, Suspend, app::RigidbodySuspendable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01354D60, void, Resume, app::RigidbodySuspendable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01354F20, void, set_IsSuspended, app::RigidbodySuspendable* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_IsSuspended, app::RigidbodySuspendable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, app::RigidbodySuspendable* this_ptr)
} // namespace app::classes::RigidbodySuspendable
