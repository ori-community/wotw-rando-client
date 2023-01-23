#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_3_Object_Object_Int32Enum_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Action_3_Object_Object_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_3_Object_Object_Int32Enum_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0241CE70, void, Invoke, (app::Action_3_Object_Object_Int32Enum_ * this_ptr, app::Object* arg1, app::Object* arg2, app::Int32Enum__Enum arg3))
    IL2CPP_REGISTER_METHOD(0x02C15BD0, app::IAsyncResult*, BeginInvoke, (app::Action_3_Object_Object_Int32Enum_ * this_ptr, app::Object* arg1, app::Object* arg2, app::Int32Enum__Enum arg3, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_3_Object_Object_Int32Enum_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_3_Object_Object_Int32Enum_
