#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_1_Object_.h>
#include <Modloader/app/structs/Func_1_System_Threading_ManualResetEvent_.h>
#include <Modloader/app/structs/Func_1_System_Threading_SemaphoreSlim_.h>
#include <Modloader/app/structs/Func_1_System_Threading_Tasks_Task_ContingentProperties_.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SemaphoreSlim.h>
#include <Modloader/app/structs/Task_ContingentProperties.h>

namespace app::classes::System::Threading::LazyInitializer {
    IL2CPP_REGISTER_METHOD(0x0157AA30, app::Object*, EnsureInitialized_1, app::Object** target, app::Func_1_Object_* value_factory)
    IL2CPP_REGISTER_METHOD(0x0157AA60, app::Object*, EnsureInitializedCore, app::Object** target, app::Func_1_Object_* value_factory)
    IL2CPP_REGISTER_METHOD(
        0x0157AA30,
        app::SemaphoreSlim*,
        EnsureInitialized_2,
        app::SemaphoreSlim** target,
        app::Func_1_System_Threading_SemaphoreSlim_* value_factory
    )
    IL2CPP_REGISTER_METHOD(
        0x0157AA30,
        app::ManualResetEvent*,
        EnsureInitialized_3,
        app::ManualResetEvent** target,
        app::Func_1_System_Threading_ManualResetEvent_* value_factory
    )
    IL2CPP_REGISTER_METHOD(
        0x0157AA30,
        app::Task_ContingentProperties*,
        EnsureInitialized_4,
        app::Task_ContingentProperties** target,
        app::Func_1_System_Threading_Tasks_Task_ContingentProperties_* value_factory
    )
} // namespace app::classes::System::Threading::LazyInitializer
