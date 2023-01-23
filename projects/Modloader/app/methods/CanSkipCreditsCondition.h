#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CanSkipCreditsCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::CanSkipCreditsCondition {
    IL2CPP_REGISTER_METHOD(0x00B220A0, bool, Validate, (app::CanSkipCreditsCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CanSkipCreditsCondition * this_ptr))
} // namespace app::classes::CanSkipCreditsCondition
