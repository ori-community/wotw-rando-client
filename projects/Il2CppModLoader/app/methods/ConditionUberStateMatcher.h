#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ConditionUberStateMatcher {
    IL2CPP_REGISTER_METHOD(0x01B575A0, void, ctor, (app::ConditionUberStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B57720, int32_t, Resolve, (app::ConditionUberStateMatcher * this_ptr, app::IUberState * descriptor))
}
