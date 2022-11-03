#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Animations::AnimationClipPlayable {
    IL2CPP_REGISTER_METHOD(0x002414B0, void, ctor, (app::AnimationClipPlayable__Boxed * this_ptr, app::PlayableHandle handle))
    IL2CPP_REGISTER_METHODINFO(0x047126E8, AnimationClipPlayable__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0307C320, app::AnimationClipPlayable, Create, (app::PlayableGraph graph, app::AnimationClip* clip))
    IL2CPP_REGISTER_METHOD(0x0307C4A0, app::PlayableHandle, CreateHandle, (app::PlayableGraph graph, app::AnimationClip* clip))
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, (app::AnimationClipPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307C600, app::Playable, op_Implicit, (app::AnimationClipPlayable playable))
    IL2CPP_REGISTER_METHOD(0x002414D0, bool, Equals, (app::AnimationClipPlayable__Boxed * this_ptr, app::AnimationClipPlayable other))
    IL2CPP_REGISTER_METHOD(0x00241630, app::AnimationClip*, GetAnimationClip, (app::AnimationClipPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00241690, bool, GetApplyFootIK, (app::AnimationClipPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002416F0, bool, GetApplyPlayableIK, (app::AnimationClipPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00241750, bool, GetRemoveStartOffset, (app::AnimationClipPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307C610, bool, CreateHandleInternal, (app::PlayableGraph graph, app::AnimationClip* clip, app::PlayableHandle* handle))
    IL2CPP_REGISTER_METHOD(0x0307C680, app::AnimationClip*, GetAnimationClipInternal, (app::PlayableHandle * handle))
    IL2CPP_REGISTER_METHOD(0x0307C6D0, bool, GetApplyFootIKInternal, (app::PlayableHandle * handle))
    IL2CPP_REGISTER_METHOD(0x0307C720, bool, GetApplyPlayableIKInternal, (app::PlayableHandle * handle))
    IL2CPP_REGISTER_METHOD(0x0307C770, bool, GetRemoveStartOffsetInternal, (app::PlayableHandle * handle))
    IL2CPP_REGISTER_METHOD(0x0307C7C0, bool, CreateHandleInternal_Injected, (app::PlayableGraph * graph, app::AnimationClip* clip, app::PlayableHandle* handle))
} // namespace app::classes::UnityEngine::Animations::AnimationClipPlayable
