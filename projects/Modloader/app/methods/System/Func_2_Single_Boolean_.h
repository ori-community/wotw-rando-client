#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_Single_Boolean_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_2_Single_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Single_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02A51AA0, bool, Invoke, (app::Func_2_Single_Boolean_ * this_ptr, float arg))
    IL2CPP_REGISTER_METHOD(0x02FA1DF0, app::IAsyncResult*, BeginInvoke, (app::Func_2_Single_Boolean_ * this_ptr, float arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Func_2_Single_Boolean_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Single_Boolean_
