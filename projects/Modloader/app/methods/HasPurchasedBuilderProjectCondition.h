#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HasPurchasedBuilderProjectCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HasPurchasedBuilderProjectCondition {
    IL2CPP_REGISTER_METHOD(0x0109EC10, bool, Validate, app::HasPurchasedBuilderProjectCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::HasPurchasedBuilderProjectCondition* this_ptr)
} // namespace app::classes::HasPurchasedBuilderProjectCondition
