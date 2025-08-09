#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_System_Threading_Tasks_VoidTaskResult___Boxed.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_Syste_Threadin_Task_VoidTaskResul_.h>
#include <Modloader/app/structs/Task_1_VoidTaskResult_.h>

namespace app::classes::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_System_Threading_Tasks_VoidTaskResult_ {
    IL2CPP_REGISTER_METHOD(
        0x001FF760,
        void,
        ctor,
        app::ConfiguredTaskAwaitable_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::Task_1_VoidTaskResult_* task,
        bool continue_on_captured_context
    )
    IL2CPP_REGISTER_METHOD(
        0x0010A980,
        app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_VoidTaskResult_,
        GetAwaiter,
        app::ConfiguredTaskAwaitable_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr
    )
} // namespace app::classes::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_System_Threading_Tasks_VoidTaskResult_
