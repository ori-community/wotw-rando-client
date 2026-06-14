#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContinuationTaskFromTask.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/InternalTaskOptions__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/TaskCreationOptions__Enum.h>

namespace app::classes::System::Threading::Tasks::ContinuationTaskFromTask {
    IL2CPP_REGISTER_METHOD(
        0x0232F930,
        void,
        ctor,
        app::ContinuationTaskFromTask* this_ptr,
        app::Task* antecedent,
        app::Delegate* action,
        app::Object* state,
        app::TaskCreationOptions__Enum creation_options,
        app::InternalTaskOptions__Enum internal_options,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(0x0232FA40, void, InnerInvoke, app::ContinuationTaskFromTask* this_ptr)
} // namespace app::classes::System::Threading::Tasks::ContinuationTaskFromTask
