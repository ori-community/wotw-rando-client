#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AnimatorStateInfo__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::AnimatorStateInfo {
    IL2CPP_REGISTER_METHOD(0x00242670, bool, IsName, (app::AnimatorStateInfo__Boxed * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x001D9BA0, float, get_normalizedTime, (app::AnimatorStateInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB430, int32_t, get_tagHash, (app::AnimatorStateInfo__Boxed * this_ptr))
} // namespace app::classes::UnityEngine::AnimatorStateInfo
