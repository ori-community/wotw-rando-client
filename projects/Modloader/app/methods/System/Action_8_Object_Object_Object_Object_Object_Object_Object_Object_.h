#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_8_Object_Object_Object_Object_Object_Object_Object_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Action_8_Object_Object_Object_Object_Object_Object_Object_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_8_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C1B0A0, void, Invoke, (app::Action_8_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::Object* arg1, app::Object* arg2, app::Object* arg3, app::Object* arg4, app::Object* arg5, app::Object* arg6, app::Object* arg7, app::Object* arg8))
    IL2CPP_REGISTER_METHOD(0x0297E270, app::IAsyncResult*, BeginInvoke, (app::Action_8_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::Object* arg1, app::Object* arg2, app::Object* arg3, app::Object* arg4, app::Object* arg5, app::Object* arg6, app::Object* arg7, app::Object* arg8, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_8_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_8_Object_Object_Object_Object_Object_Object_Object_Object_
