#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Threading::Tasks::CompletionActionInvoker {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::CompletionActionInvoker * this_ptr, app::ITaskCompletionAction* action, app::Task* completing_task))
    IL2CPP_REGISTER_METHOD(0x0232F8A0, void, ExecuteWorkItem, (app::CompletionActionInvoker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, MarkAborted, (app::CompletionActionInvoker * this_ptr, app::ThreadAbortException* tae))
} // namespace app::classes::System::Threading::Tasks::CompletionActionInvoker
