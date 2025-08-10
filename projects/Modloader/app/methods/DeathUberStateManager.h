#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeathUberStateManager.h>
#include <Modloader/app/structs/IDeathUberStateSetter.h>

namespace app::classes::DeathUberStateManager {
    IL2CPP_REGISTER_METHOD(0x00DDEDC0, void, Awake, app::DeathUberStateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DDEF50, void, Register, app::IDeathUberStateSetter* setter)
    IL2CPP_REGISTER_METHOD(0x00DDF010, void, Unregister, app::IDeathUberStateSetter* setter)
    IL2CPP_REGISTER_METHOD(0x00DDF0D0, void, OnDestroy, app::DeathUberStateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DDF260, void, OnDeath, )
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::DeathUberStateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DDF550, void, cctor, )
} // namespace app::classes::DeathUberStateManager
