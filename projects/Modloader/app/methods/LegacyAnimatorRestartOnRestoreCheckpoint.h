#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/LegacyAnimatorRestartOnRestoreCheckpoint.h>

namespace app::classes::LegacyAnimatorRestartOnRestoreCheckpoint {
    IL2CPP_REGISTER_METHOD(0x015CD120, void, OnValidate, app::LegacyAnimatorRestartOnRestoreCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD1B0, void, Serialize, app::LegacyAnimatorRestartOnRestoreCheckpoint* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::LegacyAnimatorRestartOnRestoreCheckpoint* this_ptr)
} // namespace app::classes::LegacyAnimatorRestartOnRestoreCheckpoint
