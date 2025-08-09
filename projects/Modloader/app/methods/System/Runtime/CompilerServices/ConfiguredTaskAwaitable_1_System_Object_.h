#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_System_Object___Boxed.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object_.h>
#include <Modloader/app/structs/Task_1_System_Object_.h>

namespace app::classes::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x001FF760,
        void,
        ctor,
        app::ConfiguredTaskAwaitable_1_System_Object___Boxed* this_ptr,
        app::Task_1_System_Object_* task,
        bool continue_on_captured_context
    )
    IL2CPP_REGISTER_METHOD(
        0x0010A980,
        app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object_,
        GetAwaiter,
        app::ConfiguredTaskAwaitable_1_System_Object___Boxed* this_ptr
    )
} // namespace app::classes::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_System_Object_
