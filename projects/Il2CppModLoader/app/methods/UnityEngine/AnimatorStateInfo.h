#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::AnimatorStateInfo {
    IL2CPP_REGISTER_METHOD(0x00242670, bool, IsName, (app::AnimatorStateInfo__Boxed * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x001D9BA0, float, get_normalizedTime, (app::AnimatorStateInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB430, int32_t, get_tagHash, (app::AnimatorStateInfo__Boxed * this_ptr))
}
