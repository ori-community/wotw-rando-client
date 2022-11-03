#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Playables::PlayableDirector {
    IL2CPP_REGISTER_METHOD(0x031C4A90, void, SendOnPlayableDirectorPlay, (app::PlayableDirector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C4B20, void, SendOnPlayableDirectorPause, (app::PlayableDirector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C4BB0, void, SendOnPlayableDirectorStop, (app::PlayableDirector * this_ptr))
} // namespace app::classes::UnityEngine::Playables::PlayableDirector
