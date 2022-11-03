#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HasAvailableShardUpgradeCondition {
    IL2CPP_REGISTER_METHOD(0x0109DA10, bool, Validate, (app::HasAvailableShardUpgradeCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HasAvailableShardUpgradeCondition * this_ptr))
} // namespace app::classes::HasAvailableShardUpgradeCondition
