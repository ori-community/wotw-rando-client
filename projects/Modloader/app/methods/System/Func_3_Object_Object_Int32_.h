#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_3_Object_Object_Int32_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_3_Object_Object_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_3_Object_Object_Int32_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C7EDC0, int32_t, Invoke, (app::Func_3_Object_Object_Int32_ * this_ptr, app::Object* arg1, app::Object* arg2))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::Func_3_Object_Object_Int32_ * this_ptr, app::Object* arg1, app::Object* arg2, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Func_3_Object_Object_Int32_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_3_Object_Object_Int32_
