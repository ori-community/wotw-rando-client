#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayerHoldingTorchCondition {
    IL2CPP_REGISTER_METHOD(0x0140F850, bool, Validate, (app::PlayerHoldingTorchCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::PlayerHoldingTorchCondition * this_ptr))
}
