#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MultiplatformVideoPlayer {
    IL2CPP_REGISTER_METHOD(0x00879500, void, Perform, (app::MultiplatformVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00879830, void, OnApplicationFocus, (app::MultiplatformVideoPlayer * this_ptr, bool focus_status))
    IL2CPP_REGISTER_METHOD(0x00879910, void, Stop, (app::MultiplatformVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008799A0, void, Pause, (app::MultiplatformVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00879A30, bool, IsPaused, (app::MultiplatformVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00879AC0, bool, IsPlaying, (app::MultiplatformVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00879B50, void, OnPlaybackFinished, (app::MultiplatformVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475C658, MultiplatformVideoPlayer_OnPlaybackFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00879D50, void, OnDestroy, (app::MultiplatformVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MultiplatformVideoPlayer * this_ptr))
}
