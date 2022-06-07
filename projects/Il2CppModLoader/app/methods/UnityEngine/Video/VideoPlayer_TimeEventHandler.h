#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Video::VideoPlayer_TimeEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::VideoPlayer_TimeEventHandler * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x031B8060, void, Invoke, (app::VideoPlayer_TimeEventHandler * this_ptr, app::VideoPlayer * source, double seconds))
    IL2CPP_REGISTER_METHOD(0x031B85A0, app::IAsyncResult *, BeginInvoke, (app::VideoPlayer_TimeEventHandler * this_ptr, app::VideoPlayer * source, double seconds, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::VideoPlayer_TimeEventHandler * this_ptr, app::IAsyncResult * result))
}
