#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_TResult__ConfiguredTaskAwaiter_System_Nullable_1_ {
    IL2CPP_REGISTER_METHOD(0x0018EEE0, bool, get_IsCompleted, (app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470FEF0, ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1__get_IsCompleted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF6C0, app::Nullable_1_Int32_, GetResult, (app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04783EA8, ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1__GetResult__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00151890, void, ctor, (app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1___Boxed * this_ptr, app::Task_1_System_Nullable_1_* task, bool continue_on_captured_context))
    IL2CPP_REGISTER_METHOD(0x0018EF00, void, OnCompleted, (app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1___Boxed * this_ptr, app::Action* continuation))
    IL2CPP_REGISTER_METHOD(0x0018EF30, void, UnsafeOnCompleted, (app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1___Boxed * this_ptr, app::Action* continuation))
} // namespace app::classes::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_TResult__ConfiguredTaskAwaiter_System_Nullable_1_
