#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_TResult__ConfiguredTaskAwaiter_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x0018EEE0, bool, get_IsCompleted, (app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04786808, ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean__get_IsCompleted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF6C0, bool, GetResult, (app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C780, ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean__GetResult__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00151890, void, ctor, (app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___Boxed * this_ptr, app::Task_1_System_Boolean_ * task, bool continue_on_captured_context))
    IL2CPP_REGISTER_METHOD(0x0018EF00, void, OnCompleted, (app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___Boxed * this_ptr, app::Action * continuation))
    IL2CPP_REGISTER_METHOD(0x0018EF30, void, UnsafeOnCompleted, (app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___Boxed * this_ptr, app::Action * continuation))
}
