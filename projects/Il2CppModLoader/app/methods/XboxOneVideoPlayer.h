#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::XboxOneVideoPlayer {
    IL2CPP_REGISTER_METHOD(0x01C5C140, void, OnRenderImage, (app::XboxOneVideoPlayer * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::XboxOneVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C5C2E0, void, set_Filename, (app::XboxOneVideoPlayer * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsPlaying, (app::XboxOneVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_IsPaused, (app::XboxOneVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::OnDelegate*, get_OnPlaybackFinished, (app::XboxOneVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_OnPlaybackFinished, (app::XboxOneVideoPlayer * this_ptr, app::OnDelegate* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Play, (app::XboxOneVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Pause, (app::XboxOneVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::XboxOneVideoPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C5C380, void, ctor, (app::XboxOneVideoPlayer * this_ptr))
} // namespace app::classes::XboxOneVideoPlayer
