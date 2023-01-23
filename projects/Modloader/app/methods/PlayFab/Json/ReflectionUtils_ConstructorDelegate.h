#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReflectionUtils_ConstructorDelegate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::PlayFab::Json::ReflectionUtils_ConstructorDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ReflectionUtils_ConstructorDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, app::Object*, Invoke, (app::ReflectionUtils_ConstructorDelegate * this_ptr, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::ReflectionUtils_ConstructorDelegate * this_ptr, app::Object__Array* args, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::ReflectionUtils_ConstructorDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::PlayFab::Json::ReflectionUtils_ConstructorDelegate
