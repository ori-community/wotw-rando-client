#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_DateTime_Object_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_2_DateTime_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_DateTime_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B34D70, app::Object*, Invoke, (app::Func_2_DateTime_Object_ * this_ptr, app::DateTime arg))
    IL2CPP_REGISTER_METHOD(0x02F9EB90, app::IAsyncResult*, BeginInvoke, (app::Func_2_DateTime_Object_ * this_ptr, app::DateTime arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::Func_2_DateTime_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_DateTime_Object_
