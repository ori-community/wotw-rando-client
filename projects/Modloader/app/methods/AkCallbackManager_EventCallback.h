#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AkCallbackManager_EventCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::AkCallbackManager_EventCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x026D4230, void, Invoke, (app::AkCallbackManager_EventCallback * this_ptr, app::Object* in_cookie, app::AkCallbackType__Enum in_type, app::AkCallbackInfo* in_info))
    IL2CPP_REGISTER_METHOD(0x026D47A0, app::IAsyncResult*, BeginInvoke, (app::AkCallbackManager_EventCallback * this_ptr, app::Object* in_cookie, app::AkCallbackType__Enum in_type, app::AkCallbackInfo* in_info, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AkCallbackManager_EventCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::AkCallbackManager_EventCallback
