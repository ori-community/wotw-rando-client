#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_3_Object_Double_Boolean_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_3_Object_Double_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_3_Object_Double_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02FA6610, bool, Invoke, (app::Func_3_Object_Double_Boolean_ * this_ptr, app::Object* arg1, double arg2))
    IL2CPP_REGISTER_METHOD(0x02FA6B50, app::IAsyncResult*, BeginInvoke, (app::Func_3_Object_Double_Boolean_ * this_ptr, app::Object* arg1, double arg2, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Func_3_Object_Double_Boolean_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_3_Object_Double_Boolean_
