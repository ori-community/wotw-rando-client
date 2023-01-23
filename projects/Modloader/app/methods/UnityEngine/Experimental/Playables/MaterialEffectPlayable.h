#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayableHandle.h>
#include <Modloader/app/structs/MaterialEffectPlayable__Boxed.h>
#include <Modloader/app/structs/MaterialEffectPlayable.h>

namespace app::classes::UnityEngine::Experimental::Playables::MaterialEffectPlayable {
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, (app::MaterialEffectPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EC430, bool, Equals, (app::MaterialEffectPlayable__Boxed * this_ptr, app::MaterialEffectPlayable other))
} // namespace app::classes::UnityEngine::Experimental::Playables::MaterialEffectPlayable
