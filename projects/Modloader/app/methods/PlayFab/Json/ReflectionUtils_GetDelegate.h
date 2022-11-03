#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlayFab::Json::ReflectionUtils_GetDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ReflectionUtils_GetDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, app::Object*, Invoke, (app::ReflectionUtils_GetDelegate * this_ptr, app::Object* source))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::ReflectionUtils_GetDelegate * this_ptr, app::Object* source, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::ReflectionUtils_GetDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::PlayFab::Json::ReflectionUtils_GetDelegate
