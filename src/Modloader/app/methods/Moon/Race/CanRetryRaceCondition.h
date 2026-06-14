#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CanRetryRaceCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Race::CanRetryRaceCondition {
    IL2CPP_REGISTER_METHOD(0x00C3EF70, bool, Validate, app::CanRetryRaceCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CanRetryRaceCondition* this_ptr)
} // namespace app::classes::Moon::Race::CanRetryRaceCondition
