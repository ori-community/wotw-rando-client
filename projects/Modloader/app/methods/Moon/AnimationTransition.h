#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::AnimationTransition {
    IL2CPP_REGISTER_METHOD(0x01B053F0, app::Object*, Clone, (app::AnimationTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B055A0, void, ctor, (app::AnimationTransition * this_ptr))
} // namespace app::classes::Moon::AnimationTransition
