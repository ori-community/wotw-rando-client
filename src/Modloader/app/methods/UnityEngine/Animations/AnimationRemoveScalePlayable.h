#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationRemoveScalePlayable.h>
#include <Modloader/app/structs/AnimationRemoveScalePlayable__Boxed.h>
#include <Modloader/app/structs/PlayableHandle.h>

namespace app::classes::UnityEngine::Animations::AnimationRemoveScalePlayable {
    IL2CPP_REGISTER_METHOD(0x00241EC0, void, ctor, app::AnimationRemoveScalePlayable__Boxed* this_ptr, app::PlayableHandle handle)
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, app::AnimationRemoveScalePlayable__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00241EE0, bool, Equals, app::AnimationRemoveScalePlayable__Boxed* this_ptr, app::AnimationRemoveScalePlayable other)
    IL2CPP_REGISTER_METHOD(0x0307E5E0, void, cctor, )
} // namespace app::classes::UnityEngine::Animations::AnimationRemoveScalePlayable
