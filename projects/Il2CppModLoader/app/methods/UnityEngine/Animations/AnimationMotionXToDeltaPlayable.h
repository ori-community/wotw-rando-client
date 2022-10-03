#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Animations::AnimationMotionXToDeltaPlayable {
    IL2CPP_REGISTER_METHOD(0x00241AB0, void, ctor, (app::AnimationMotionXToDeltaPlayable__Boxed * this_ptr, app::PlayableHandle handle))
    IL2CPP_REGISTER_METHODINFO(0x04732F80, AnimationMotionXToDeltaPlayable__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, (app::AnimationMotionXToDeltaPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00241AD0, bool, Equals, (app::AnimationMotionXToDeltaPlayable__Boxed * this_ptr, app::AnimationMotionXToDeltaPlayable other))
    IL2CPP_REGISTER_METHOD(0x0307D9F0, void, cctor, ())
} // namespace app::classes::UnityEngine::Animations::AnimationMotionXToDeltaPlayable
