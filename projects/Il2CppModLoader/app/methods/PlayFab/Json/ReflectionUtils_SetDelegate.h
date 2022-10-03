#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PlayFab::Json::ReflectionUtils_SetDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ReflectionUtils_SetDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (app::ReflectionUtils_SetDelegate * this_ptr, app::Object* source, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::ReflectionUtils_SetDelegate * this_ptr, app::Object* source, app::Object* value, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ReflectionUtils_SetDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::PlayFab::Json::ReflectionUtils_SetDelegate
