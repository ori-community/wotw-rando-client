#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation {
    IL2CPP_REGISTER_METHOD(0x0232FE20, void, ctor, (app::SynchronizationContextAwaitTaskContinuation * this_ptr, app::SynchronizationContext * context, app::Action * action, bool flow_execution_context, app::StackCrawlMark__Enum * stack_mark))
    IL2CPP_REGISTER_METHOD(0x0232FE60, void, Run, (app::SynchronizationContextAwaitTaskContinuation * this_ptr, app::Task * task, bool can_inline_continuation_task))
    IL2CPP_REGISTER_METHOD(0x02330020, void, PostAction, (app::Object * state))
    IL2CPP_REGISTER_METHODINFO(0x0474EBA0, SynchronizationContextAwaitTaskContinuation_PostAction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02330120, app::ContextCallback *, GetPostActionCallback, ())
    IL2CPP_REGISTER_METHOD(0x023302E0, void, cctor, ())
}
