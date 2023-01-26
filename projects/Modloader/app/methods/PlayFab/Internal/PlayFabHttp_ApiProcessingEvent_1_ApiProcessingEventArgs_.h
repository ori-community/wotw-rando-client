#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs_.h>
#include <Modloader/app/structs/ApiProcessingEventArgs.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs_ * this_ptr, app::ApiProcessingEventArgs* e))
} // namespace app::classes::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs_
