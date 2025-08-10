#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7.h>

namespace app::classes::System::Threading::Tasks::ThreadPoolTaskScheduler__FilterTasksFromWorkItems_d__7 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x023411D0, void, IDisposable_Dispose, app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02341210, bool, MoveNext, app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02341400, void, __m__Finally1, app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Task*, IEnumerator_Task__get_Current, app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023414A0, void, IEnumerator_Reset, app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x023414F0,
        app::IEnumerator_1_System_Threading_Tasks_Task_*,
        IEnumerable_Task__GetEnumerator,
        app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x023416E0, app::IEnumerator*, IEnumerable_GetEnumerator, app::ThreadPoolTaskScheduler_FilterTasksFromWorkItems_d_7* this_ptr)
} // namespace app::classes::System::Threading::Tasks::ThreadPoolTaskScheduler__FilterTasksFromWorkItems_d__7
