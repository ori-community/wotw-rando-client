#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEmitEventCallback.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IPlayFabEmitEventResponse.h>
#include <Modloader/app/structs/IPlayFabEvent.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::PlayFab::PlayFabEmitEventCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PlayFabEmitEventCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (app::PlayFabEmitEventCallback * this_ptr, app::IPlayFabEvent* play_fab_event, app::IPlayFabEmitEventResponse* emit_event_response))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::PlayFabEmitEventCallback * this_ptr, app::IPlayFabEvent* play_fab_event, app::IPlayFabEmitEventResponse* emit_event_response, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::PlayFabEmitEventCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::PlayFab::PlayFabEmitEventCallback
