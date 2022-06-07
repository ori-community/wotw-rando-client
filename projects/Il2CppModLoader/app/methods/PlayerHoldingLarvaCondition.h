#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayerHoldingLarvaCondition {
    IL2CPP_REGISTER_METHOD(0x0140F600, bool, Validate, (app::PlayerHoldingLarvaCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::PlayerHoldingLarvaCondition * this_ptr))
}
