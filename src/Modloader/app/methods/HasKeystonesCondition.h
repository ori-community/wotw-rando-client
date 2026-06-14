#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HasKeystonesCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HasKeystonesCondition {
    IL2CPP_REGISTER_METHOD(0x0109E880, bool, Validate, app::HasKeystonesCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::HasKeystonesCondition* this_ptr)
} // namespace app::classes::HasKeystonesCondition
