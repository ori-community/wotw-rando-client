#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HoldingTorchCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HoldingTorchCondition {
    IL2CPP_REGISTER_METHOD(0x00B5B010, bool, Validate, app::HoldingTorchCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B5B030, bool, IsHoldingTorch, app::IContext* context, bool is_holding)
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, app::HoldingTorchCondition* this_ptr)
} // namespace app::classes::HoldingTorchCondition
