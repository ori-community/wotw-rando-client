#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HasPurchasedGardenerProjectCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HasPurchasedGardenerProjectCondition {
    IL2CPP_REGISTER_METHOD(0x0109ECD0, bool, Validate, (app::HasPurchasedGardenerProjectCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HasPurchasedGardenerProjectCondition * this_ptr))
} // namespace app::classes::HasPurchasedGardenerProjectCondition
