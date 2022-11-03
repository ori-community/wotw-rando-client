#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::IsShardEquippedCondition {
    IL2CPP_REGISTER_METHOD(0x00647B30, bool, Validate, (app::IsShardEquippedCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsShardEquippedCondition * this_ptr))
} // namespace app::classes::IsShardEquippedCondition
