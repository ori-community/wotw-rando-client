#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OnDelegate.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnityVideoPlayer.h>
#include <Modloader/app/structs/VideoPlayer.h>

namespace app::classes::UnityVideoPlayer {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::OnDelegate*, get_OnPlaybackFinished, (app::UnityVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_OnPlaybackFinished, (app::UnityVideoPlayer * this_ptr, app::OnDelegate* value))
    IL2CPP_REGISTER_METHOD(0x013ABA20, void, set_Filename, (app::UnityVideoPlayer * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsPlaying, (app::UnityVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004379C0, bool, get_IsPaused, (app::UnityVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013ABB00, void, Play, (app::UnityVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013ABD90, void, Pause, (app::UnityVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013ABDF0, void, Stop, (app::UnityVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013ABE50, void, Update, (app::UnityVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013ABE60, void, EndReached, (app::UnityVideoPlayer * this_ptr, app::VideoPlayer* vp))
    IL2CPP_REGISTER_METHOD(0x013ABEA0, void, EnsureImgui, (app::UnityVideoPlayer * this_ptr, bool registered))
    IL2CPP_REGISTER_METHOD(0x013ABF90, void, OnDestroy, (app::UnityVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UnityVideoPlayer * this_ptr))
} // namespace app::classes::UnityVideoPlayer
