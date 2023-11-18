#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SynchronizationContextAwaitTaskContinuation.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ContextCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/SynchronizationContext.h>
#include <Modloader/app/structs/Task.h>

namespace app::classes::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation {
    IL2CPP_REGISTER_METHOD(0x0232FE20, void, ctor, (app::SynchronizationContextAwaitTaskContinuation * this_ptr, app::SynchronizationContext* context, app::Action* action, bool flow_execution_context, app::StackCrawlMark__Enum* stack_mark))
    IL2CPP_REGISTER_METHOD(0x0232FE60, void, Run, (app::SynchronizationContextAwaitTaskContinuation * this_ptr, app::Task* task, bool can_inline_continuation_task))
    IL2CPP_REGISTER_METHOD(0x02330020, void, PostAction, (app::Object * state))
    IL2CPP_REGISTER_METHOD(0x02330120, app::ContextCallback*, GetPostActionCallback, ())
    IL2CPP_REGISTER_METHOD(0x023302E0, void, cctor, ())
} // namespace app::classes::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation
