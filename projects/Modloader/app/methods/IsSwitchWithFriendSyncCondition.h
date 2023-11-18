#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IsSwitchWithFriendSyncCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::IsSwitchWithFriendSyncCondition {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, Validate, (app::IsSwitchWithFriendSyncCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsSwitchWithFriendSyncCondition * this_ptr))
} // namespace app::classes::IsSwitchWithFriendSyncCondition
