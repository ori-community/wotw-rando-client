#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CanSkipRaceCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Race::CanSkipRaceCondition {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, Validate, (app::CanSkipRaceCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CanSkipRaceCondition * this_ptr))
} // namespace app::classes::Moon::Race::CanSkipRaceCondition
