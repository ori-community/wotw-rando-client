#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HoldingTorchCondition {
    IL2CPP_REGISTER_METHOD(0x00B5B010, bool, Validate, (app::HoldingTorchCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00B5B030, bool, IsHoldingTorch, (app::IContext * context, bool is_holding))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::HoldingTorchCondition * this_ptr))
}
