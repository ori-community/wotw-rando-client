#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::AnimationContext {
    IL2CPP_REGISTER_METHOD(0x0011DC50, bool, get_ShouldRecord, (app::AnimationContext__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001C0A50, void, ctor, (app::AnimationContext__Boxed * this_ptr, float normalized_time, bool should_record))
} // namespace app::classes::Moon::Timeline::AnimationContext
