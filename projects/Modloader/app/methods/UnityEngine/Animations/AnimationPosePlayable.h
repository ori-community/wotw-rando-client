#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationPosePlayable__Boxed.h>
#include <Modloader/app/structs/AnimationPosePlayable.h>
#include <Modloader/app/structs/PlayableHandle.h>

namespace app::classes::UnityEngine::Animations::AnimationPosePlayable {
    IL2CPP_REGISTER_METHOD(0x00241DC0, void, ctor, (app::AnimationPosePlayable__Boxed * this_ptr, app::PlayableHandle handle))
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, (app::AnimationPosePlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00241DE0, bool, Equals, (app::AnimationPosePlayable__Boxed * this_ptr, app::AnimationPosePlayable other))
    IL2CPP_REGISTER_METHOD(0x0307E3A0, void, cctor, ())
} // namespace app::classes::UnityEngine::Animations::AnimationPosePlayable
