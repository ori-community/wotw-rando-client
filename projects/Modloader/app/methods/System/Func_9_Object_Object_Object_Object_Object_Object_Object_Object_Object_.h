#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_9_Object_Object_Object_Object_Object_Object_Object_Object_Object_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_9_Object_Object_Object_Object_Object_Object_Object_Object_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_9_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0289F9F0, app::Object*, Invoke, (app::Func_9_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::Object* arg1, app::Object* arg2, app::Object* arg3, app::Object* arg4, app::Object* arg5, app::Object* arg6, app::Object* arg7, app::Object* arg8))
    IL2CPP_REGISTER_METHOD(0x0297E270, app::IAsyncResult*, BeginInvoke, (app::Func_9_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::Object* arg1, app::Object* arg2, app::Object* arg3, app::Object* arg4, app::Object* arg5, app::Object* arg6, app::Object* arg7, app::Object* arg8, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::Func_9_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_9_Object_Object_Object_Object_Object_Object_Object_Object_Object_
