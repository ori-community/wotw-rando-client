#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PickupCollectedCondition {
    IL2CPP_REGISTER_METHOD(0x011594A0, bool, Validate, (app::PickupCollectedCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PickupCollectedCondition * this_ptr))
} // namespace app::classes::PickupCollectedCondition
