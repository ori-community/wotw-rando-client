#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/VideoPlayer.h>
#include <Modloader/app/structs/VideoPlayer_EventHandler.h>

namespace app::classes::UnityEngine::Video::VideoPlayer_EventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::VideoPlayer_EventHandler* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, app::VideoPlayer_EventHandler* this_ptr, app::VideoPlayer* source)
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::VideoPlayer_EventHandler* this_ptr,
        app::VideoPlayer* source,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::VideoPlayer_EventHandler* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::Video::VideoPlayer_EventHandler
