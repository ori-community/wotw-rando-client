#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_2_Single_Single_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Func_2_Single_Single_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Single_Single_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04725440, Func_2_Single_Single___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FA1EC0, float, Invoke, (app::Func_2_Single_Single_ * this_ptr, float arg))
    IL2CPP_REGISTER_METHODINFO(0x04756228, Func_2_Single_Single__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FA2210, app::IAsyncResult*, BeginInvoke, (app::Func_2_Single_Single_ * this_ptr, float arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke, (app::Func_2_Single_Single_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Single_Single_
