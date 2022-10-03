#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Playables::PlayableOutput {
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, (app::PlayableOutput__Boxed * this_ptr, app::PlayableOutputHandle handle))
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableOutputHandle, GetHandle, (app::PlayableOutput__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00216DF0, bool, Equals, (app::PlayableOutput__Boxed * this_ptr, app::PlayableOutput other))
    IL2CPP_REGISTER_METHOD(0x02966A80, void, cctor, ())
} // namespace app::classes::UnityEngine::Playables::PlayableOutput
