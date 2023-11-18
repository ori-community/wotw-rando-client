#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OnDelegate.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SwitchVideoPlayer.h>

namespace app::classes::SwitchVideoPlayer {
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::OnDelegate*, get_OnPlaybackFinished, (app::SwitchVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_OnPlaybackFinished, (app::SwitchVideoPlayer * this_ptr, app::OnDelegate* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::SwitchVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005135E0, void, set_Filename, (app::SwitchVideoPlayer * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsPlaying, (app::SwitchVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsPaused, (app::SwitchVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Play, (app::SwitchVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UnitySwitchVideoPlayerOnMovieEvent, (app::SwitchVideoPlayer * this_ptr, int32_t event_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::SwitchVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Pause, (app::SwitchVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::SwitchVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::SwitchVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SwitchVideoPlayer * this_ptr))
} // namespace app::classes::SwitchVideoPlayer
