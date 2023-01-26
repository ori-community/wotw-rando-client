#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RacesEnabledCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::RacesEnabledCondition {
    IL2CPP_REGISTER_METHOD(0x00724960, bool, Validate, (app::RacesEnabledCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RacesEnabledCondition * this_ptr))
} // namespace app::classes::RacesEnabledCondition
