#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Playables::Playable {
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, (app::Playable__Boxed * this_ptr, app::PlayableHandle handle))
    IL2CPP_REGISTER_METHOD(0x02963DB0, app::Playable, get_Null, ())
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, (app::Playable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00216570, app::Type*, GetPlayableType, (app::Playable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00216590, bool, Equals, (app::Playable__Boxed * this_ptr, app::Playable other))
    IL2CPP_REGISTER_METHOD(0x02963FC0, void, cctor, ())
} // namespace app::classes::UnityEngine::Playables::Playable
