#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnableOnRestoreCheckpoint.h>

namespace app::classes::EnableOnRestoreCheckpoint {
    IL2CPP_REGISTER_METHOD(0x00BFC8A0, void, Awake, app::EnableOnRestoreCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BFCA40, void, OnDestroy, app::EnableOnRestoreCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00443CC0, void, OnRestoreCheckpoint, app::EnableOnRestoreCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::EnableOnRestoreCheckpoint* this_ptr)
} // namespace app::classes::EnableOnRestoreCheckpoint
