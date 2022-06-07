#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_1_System_Threading_Tasks_VoidTaskResult_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_1_System_Threading_Tasks_VoidTaskResult_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x008A18F0, app::VoidTaskResult, Invoke, (app::Func_1_System_Threading_Tasks_VoidTaskResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::Func_1_System_Threading_Tasks_VoidTaskResult_ * this_ptr, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, app::VoidTaskResult, EndInvoke, (app::Func_1_System_Threading_Tasks_VoidTaskResult_ * this_ptr, app::IAsyncResult * result))
}
