#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VideoPlayer_ErrorEventHandler.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/VideoPlayer.h>

namespace app::classes::UnityEngine::Video::VideoPlayer_ErrorEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::VideoPlayer_ErrorEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::VideoPlayer_ErrorEventHandler * this_ptr, app::VideoPlayer* source, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::VideoPlayer_ErrorEventHandler * this_ptr, app::VideoPlayer* source, app::String* message, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::VideoPlayer_ErrorEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::Video::VideoPlayer_ErrorEventHandler
