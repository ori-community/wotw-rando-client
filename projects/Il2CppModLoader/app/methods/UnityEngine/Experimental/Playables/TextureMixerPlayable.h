#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Playables::TextureMixerPlayable {
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, (app::TextureMixerPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EC590, bool, Equals, (app::TextureMixerPlayable__Boxed * this_ptr, app::TextureMixerPlayable other))
}
