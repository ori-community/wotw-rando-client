#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BooleanUberStateMatcher {
    IL2CPP_REGISTER_METHOD(0x01B55E90, void, ctor, (app::BooleanUberStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B56010, bool, get_StateAValue, (app::BooleanUberStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B560C0, int32_t, get_StateAIndex, (app::BooleanUberStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B56170, bool, get_StateBValue, (app::BooleanUberStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B56220, int32_t, get_StateBIndex, (app::BooleanUberStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B562D0, int32_t, Resolve, (app::BooleanUberStateMatcher * this_ptr, app::IUberState* descriptor))
} // namespace app::classes::BooleanUberStateMatcher
