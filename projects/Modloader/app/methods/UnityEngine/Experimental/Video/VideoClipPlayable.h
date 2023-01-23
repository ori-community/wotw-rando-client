#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayableHandle.h>
#include <Modloader/app/structs/VideoClipPlayable__Boxed.h>
#include <Modloader/app/structs/VideoClipPlayable.h>

namespace app::classes::UnityEngine::Experimental::Video::VideoClipPlayable {
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, (app::VideoClipPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024B4B0, bool, Equals, (app::VideoClipPlayable__Boxed * this_ptr, app::VideoClipPlayable other))
} // namespace app::classes::UnityEngine::Experimental::Video::VideoClipPlayable
