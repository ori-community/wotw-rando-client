#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UWPVideoPlayer {
    IL2CPP_REGISTER_METHOD(0x013DDDB0, void, Play, (app::UWPVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013DDF50, void, Pause, (app::UWPVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013DE020, void, Stop, (app::UWPVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013DE0D0, void, XAMLFinished, (app::UWPVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04731088, UWPVideoPlayer_XAMLFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::OnDelegate*, get_OnPlaybackFinished, (app::UWPVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_OnPlaybackFinished, (app::UWPVideoPlayer * this_ptr, app::OnDelegate* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Filename, (app::UWPVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Filename, (app::UWPVideoPlayer * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsPlaying, (app::UWPVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IsPlaying, (app::UWPVideoPlayer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00DF3DF0, bool, get_IsPaused, (app::UWPVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DF3E00, void, set_IsPaused, (app::UWPVideoPlayer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UWPVideoPlayer * this_ptr))
} // namespace app::classes::UWPVideoPlayer
