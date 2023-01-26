#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectConstructor_1_System_Object_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::Newtonsoft::Json::Serialization::ObjectConstructor_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ObjectConstructor_1_System_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, app::Object*, Invoke, (app::ObjectConstructor_1_System_Object_ * this_ptr, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::ObjectConstructor_1_System_Object_ * this_ptr, app::Object__Array* args, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::ObjectConstructor_1_System_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Newtonsoft::Json::Serialization::ObjectConstructor_1_System_Object_
