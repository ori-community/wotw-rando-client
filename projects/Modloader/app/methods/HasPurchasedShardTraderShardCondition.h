#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HasPurchasedShardTraderShardCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HasPurchasedShardTraderShardCondition {
    IL2CPP_REGISTER_METHOD(0x0109EE40, bool, Validate, (app::HasPurchasedShardTraderShardCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HasPurchasedShardTraderShardCondition * this_ptr))
} // namespace app::classes::HasPurchasedShardTraderShardCondition
