#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::VideoPlayer_FrameReadyEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::VideoPlayer_FrameReadyEventHandler * this_ptr, app::VideoPlayer* source, int64_t frame_idx))
    IL2CPP_REGISTER_METHOD(0x031B7F90, app::IAsyncResult*, BeginInvoke, (app::VideoPlayer_FrameReadyEventHandler * this_ptr, app::VideoPlayer* source, int64_t frame_idx, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::VideoPlayer_FrameReadyEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler
