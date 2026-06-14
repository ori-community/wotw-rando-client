#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/TaskContinuation.h>

namespace app::classes::System::Threading::Tasks::TaskContinuation {
    IL2CPP_REGISTER_METHOD(0x0233BFA0, void, InlineIfPossibleOrElseQueue, app::Task* task, bool needs_protection)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TaskContinuation* this_ptr)
} // namespace app::classes::System::Threading::Tasks::TaskContinuation
