#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter {
    IL2CPP_REGISTER_METHOD(0x00151890, void, ctor, (app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Boxed * this_ptr, app::Task* task, bool continue_on_captured_context))
    IL2CPP_REGISTER_METHOD(0x0018EEE0, bool, get_IsCompleted, (app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0018EF00, void, OnCompleted, (app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Boxed * this_ptr, app::Action* continuation))
    IL2CPP_REGISTER_METHOD(0x0018EF30, void, UnsafeOnCompleted, (app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Boxed * this_ptr, app::Action* continuation))
    IL2CPP_REGISTER_METHOD(0x0018EF60, void, GetResult, (app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Boxed * this_ptr))
} // namespace app::classes::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter
