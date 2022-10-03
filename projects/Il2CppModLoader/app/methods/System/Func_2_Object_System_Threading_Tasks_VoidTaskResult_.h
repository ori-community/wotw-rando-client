#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_2_Object_System_Threading_Tasks_VoidTaskResult_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Object_System_Threading_Tasks_VoidTaskResult_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0167EC80, app::VoidTaskResult, Invoke, (app::Func_2_Object_System_Threading_Tasks_VoidTaskResult_ * this_ptr, app::Object* arg))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Func_2_Object_System_Threading_Tasks_VoidTaskResult_ * this_ptr, app::Object* arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, app::VoidTaskResult, EndInvoke, (app::Func_2_Object_System_Threading_Tasks_VoidTaskResult_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Object_System_Threading_Tasks_VoidTaskResult_
