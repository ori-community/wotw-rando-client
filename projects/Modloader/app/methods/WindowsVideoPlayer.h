#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WindowsVideoPlayer.h>
#include <Modloader/app/structs/OnDelegate.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::WindowsVideoPlayer {
    IL2CPP_REGISTER_METHOD(0x0057B9F0, void, set_Filename, (app::WindowsVideoPlayer * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::OnDelegate*, get_OnPlaybackFinished, (app::WindowsVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_OnPlaybackFinished, (app::WindowsVideoPlayer * this_ptr, app::OnDelegate* value))
    IL2CPP_REGISTER_METHOD(0x0057BAB0, bool, get_IsPlaying, (app::WindowsVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_IsPaused, (app::WindowsVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_IsPaused, (app::WindowsVideoPlayer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0057BAD0, void, Play, (app::WindowsVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057BAF0, void, Pause, (app::WindowsVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057BB40, void, MovieFinished, (app::WindowsVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057BB70, void, Stop, (app::WindowsVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057BBE0, void, ctor, (app::WindowsVideoPlayer * this_ptr))
} // namespace app::classes::WindowsVideoPlayer
