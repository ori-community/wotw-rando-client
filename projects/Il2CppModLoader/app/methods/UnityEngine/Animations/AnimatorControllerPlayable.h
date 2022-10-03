#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Animations::AnimatorControllerPlayable {
    IL2CPP_REGISTER_METHOD(0x00242380, void, ctor, (app::AnimatorControllerPlayable__Boxed * this_ptr, app::PlayableHandle handle))
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, (app::AnimatorControllerPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002423A0, void, SetHandle, (app::AnimatorControllerPlayable__Boxed * this_ptr, app::PlayableHandle handle))
    IL2CPP_REGISTER_METHODINFO(0x04706130, AnimatorControllerPlayable_SetHandle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002423C0, bool, Equals, (app::AnimatorControllerPlayable__Boxed * this_ptr, app::AnimatorControllerPlayable other))
    IL2CPP_REGISTER_METHOD(0x0307F060, void, cctor, ())
} // namespace app::classes::UnityEngine::Animations::AnimatorControllerPlayable
