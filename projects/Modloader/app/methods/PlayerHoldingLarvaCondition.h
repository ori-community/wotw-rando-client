#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerHoldingLarvaCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::PlayerHoldingLarvaCondition {
    IL2CPP_REGISTER_METHOD(0x0140F600, bool, Validate, (app::PlayerHoldingLarvaCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::PlayerHoldingLarvaCondition * this_ptr))
} // namespace app::classes::PlayerHoldingLarvaCondition
