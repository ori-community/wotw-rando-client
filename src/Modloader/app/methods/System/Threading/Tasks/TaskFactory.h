#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/IList_1_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/TaskContinuationOptions__Enum.h>
#include <Modloader/app/structs/TaskCreationOptions__Enum.h>
#include <Modloader/app/structs/TaskFactory.h>
#include <Modloader/app/structs/TaskScheduler.h>
#include <Modloader/app/structs/Task_1_System_Object_.h>
#include <Modloader/app/structs/Task_1_Task_.h>

namespace app::classes::System::Threading::Tasks::TaskFactory {
    IL2CPP_REGISTER_METHOD(0x0233DEB0, void, ctor_1, app::TaskFactory* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0233DEE0,
        void,
        ctor_2,
        app::TaskFactory* this_ptr,
        app::CancellationToken cancellation_token,
        app::TaskCreationOptions__Enum creation_options,
        app::TaskContinuationOptions__Enum continuation_options,
        app::TaskScheduler* scheduler
    )
    IL2CPP_REGISTER_METHOD(0x0233DF40, void, CheckCreationOptions, app::TaskCreationOptions__Enum creation_options)
    IL2CPP_REGISTER_METHOD(
        0x0233DFF0,
        app::Task*,
        StartNew_1,
        app::TaskFactory* this_ptr,
        app::Action* action,
        app::CancellationToken cancellation_token,
        app::TaskCreationOptions__Enum creation_options,
        app::TaskScheduler* scheduler
    )
    IL2CPP_REGISTER_METHOD(
        0x0233E0F0,
        app::Task*,
        StartNew_2,
        app::TaskFactory* this_ptr,
        app::Action_1_Object_* action,
        app::Object* state,
        app::CancellationToken cancellation_token,
        app::TaskCreationOptions__Enum creation_options,
        app::TaskScheduler* scheduler
    )
    IL2CPP_REGISTER_METHOD(0x0233E1F0, void, CheckFromAsyncOptions, app::TaskCreationOptions__Enum creation_options, bool has_begin_method)
    IL2CPP_REGISTER_METHOD(0x0233E350, app::Task_1_Task_*, CommonCWAnyLogic, app::IList_1_System_Threading_Tasks_Task_* tasks)
    IL2CPP_REGISTER_METHOD(0x0233E6F0, void, CheckMultiTaskContinuationOptions, app::TaskContinuationOptions__Enum continuation_options)
    IL2CPP_REGISTER_METHOD(
        0x01544AE0,
        app::Task_1_System_Object_*,
        StartNew_3,
        app::TaskFactory* this_ptr,
        app::Func_2_Object_Object_* function,
        app::Object* state,
        app::CancellationToken cancellation_token,
        app::TaskCreationOptions__Enum creation_options,
        app::TaskScheduler* scheduler
    )
} // namespace app::classes::System::Threading::Tasks::TaskFactory
