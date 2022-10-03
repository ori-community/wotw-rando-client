#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PlayFabHttp_ApiProcessErrorEvent * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::PlayFabHttp_ApiProcessErrorEvent * this_ptr, app::PlayFabRequestCommon* request, app::PlayFabError* error))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::PlayFabHttp_ApiProcessErrorEvent * this_ptr, app::PlayFabRequestCommon* request, app::PlayFabError* error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::PlayFabHttp_ApiProcessErrorEvent * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent
