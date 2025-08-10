#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/VideoPlayer.h>
#include <Modloader/app/structs/VideoPlayer_TimeEventHandler.h>

namespace app::classes::UnityEngine::Video::VideoPlayer_TimeEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::VideoPlayer_TimeEventHandler* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x031B8060, void, Invoke, app::VideoPlayer_TimeEventHandler* this_ptr, app::VideoPlayer* source, double seconds)
    IL2CPP_REGISTER_METHOD(
        0x031B85A0,
        app::IAsyncResult*,
        BeginInvoke,
        app::VideoPlayer_TimeEventHandler* this_ptr,
        app::VideoPlayer* source,
        double seconds,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::VideoPlayer_TimeEventHandler* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::Video::VideoPlayer_TimeEventHandler
