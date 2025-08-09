#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PlayerHoldingTorchCondition.h>

namespace app::classes::PlayerHoldingTorchCondition {
    IL2CPP_REGISTER_METHOD(0x0140F850, bool, Validate, app::PlayerHoldingTorchCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, app::PlayerHoldingTorchCondition* this_ptr)
} // namespace app::classes::PlayerHoldingTorchCondition
