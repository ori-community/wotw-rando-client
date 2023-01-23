#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/PlayerCollisionLeaveTrigger.h>

namespace app::classes::PlayerCollisionLeaveTrigger {
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::PlayerCollisionLeaveTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140B390, void, Awake, (app::PlayerCollisionLeaveTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140B570, void, FixedUpdate, (app::PlayerCollisionLeaveTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611C70, void, ctor, (app::PlayerCollisionLeaveTrigger * this_ptr))
} // namespace app::classes::PlayerCollisionLeaveTrigger
