#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContinuationTaskFromResultTask_1_System_Object_.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/InternalTaskOptions__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/TaskCreationOptions__Enum.h>
#include <Modloader/app/structs/Task_1_System_Object_.h>

namespace app::classes::System::Threading::Tasks::ContinuationTaskFromResultTask_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x027761A0,
        void,
        ctor,
        app::ContinuationTaskFromResultTask_1_System_Object_* this_ptr,
        app::Task_1_System_Object_* antecedent,
        app::Delegate* action,
        app::Object* state,
        app::TaskCreationOptions__Enum creation_options,
        app::InternalTaskOptions__Enum internal_options,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(0x02775E30, void, InnerInvoke, app::ContinuationTaskFromResultTask_1_System_Object_* this_ptr)
} // namespace app::classes::System::Threading::Tasks::ContinuationTaskFromResultTask_1_System_Object_
