#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/PlayerCollisionUberStateTrigger.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>

namespace app::classes::PlayerCollisionUberStateTrigger {
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, app::PlayerCollisionUberStateTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0140D130, void, OnTriggerEnter, app::PlayerCollisionUberStateTrigger* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x0140D290, bool, ActivateTrigger, app::PlayerCollisionUberStateTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0140D460, void, Awake, app::PlayerCollisionUberStateTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0140D640, void, FixedUpdate, app::PlayerCollisionUberStateTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0140DC20, void, OnRestoreCheckpoint, app::PlayerCollisionUberStateTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00611C70, void, ctor, app::PlayerCollisionUberStateTrigger* this_ptr)
} // namespace app::classes::PlayerCollisionUberStateTrigger
