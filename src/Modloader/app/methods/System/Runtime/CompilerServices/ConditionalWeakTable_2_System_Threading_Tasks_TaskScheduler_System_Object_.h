#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TaskScheduler.h>

namespace app::classes::System::Runtime::CompilerServices::ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02770450, void, ctor, app::ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02770CE0,
        void,
        Add,
        app::ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object_* this_ptr,
        app::TaskScheduler* key,
        app::Object* value
    )
} // namespace app::classes::System::Runtime::CompilerServices::ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object_
