#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_3_AsyncCallback_Object_IAsyncResult_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Func_3_AsyncCallback_Object_IAsyncResult_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_3_AsyncCallback_Object_IAsyncResult_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04772E20, Func_3_AsyncCallback_Object_IAsyncResult___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D117F0, app::IAsyncResult*, Invoke, (app::Func_3_AsyncCallback_Object_IAsyncResult_ * this_ptr, app::AsyncCallback* arg1, app::Object* arg2))
    IL2CPP_REGISTER_METHODINFO(0x04738B28, Func_3_AsyncCallback_Object_IAsyncResult__Invoke__MethodInfo)
} // namespace app::classes::System::Func_3_AsyncCallback_Object_IAsyncResult_
