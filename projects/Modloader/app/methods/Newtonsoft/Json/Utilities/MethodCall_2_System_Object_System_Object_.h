#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MethodCall_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::Newtonsoft::Json::Utilities::MethodCall_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::MethodCall_2_System_Object_System_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D117F0, app::Object*, Invoke, (app::MethodCall_2_System_Object_System_Object_ * this_ptr, app::Object* target, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::MethodCall_2_System_Object_System_Object_ * this_ptr, app::Object* target, app::Object__Array* args, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::MethodCall_2_System_Object_System_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Newtonsoft::Json::Utilities::MethodCall_2_System_Object_System_Object_
