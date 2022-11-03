#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::AnimatorControllerParameter {
    IL2CPP_REGISTER_METHOD(0x030861A0, void, ctor, (app::AnimatorControllerParameter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2AB40, app::String*, get_name, (app::AnimatorControllerParameter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03086230, bool, Equals, (app::AnimatorControllerParameter * this_ptr, app::Object* o))
    IL2CPP_REGISTER_METHOD(0x0150BDE0, int32_t, GetHashCode, (app::AnimatorControllerParameter * this_ptr))
} // namespace app::classes::UnityEngine::AnimatorControllerParameter
