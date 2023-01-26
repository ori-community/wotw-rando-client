#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_System_Object_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PlayFabEvents_PlayFabRequestEvent_1_System_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabRequestEvent_1_System_Object_ * this_ptr, app::Object* request))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::PlayFabEvents_PlayFabRequestEvent_1_System_Object_ * this_ptr, app::Object* request, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::PlayFabEvents_PlayFabRequestEvent_1_System_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_System_Object_
