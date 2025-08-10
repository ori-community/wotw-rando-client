#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationOffsetPlayable.h>
#include <Modloader/app/structs/AnimationOffsetPlayable__Boxed.h>
#include <Modloader/app/structs/PlayableHandle.h>

namespace app::classes::UnityEngine::Animations::AnimationOffsetPlayable {
    IL2CPP_REGISTER_METHOD(0x00241C30, void, ctor, app::AnimationOffsetPlayable__Boxed* this_ptr, app::PlayableHandle handle)
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, app::AnimationOffsetPlayable__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00241C50, bool, Equals, app::AnimationOffsetPlayable__Boxed* this_ptr, app::AnimationOffsetPlayable other)
    IL2CPP_REGISTER_METHOD(0x0307DC30, void, cctor, )
} // namespace app::classes::UnityEngine::Animations::AnimationOffsetPlayable
