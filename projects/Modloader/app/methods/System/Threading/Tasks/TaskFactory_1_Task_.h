#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Threading::Tasks::TaskFactory_1_Task_ {
    IL2CPP_REGISTER_METHOD(0x0277BE50, app::Task_1_Task_*, StartNew, (app::TaskFactory_1_Task_ * this_ptr, app::Func_1_System_Threading_Tasks_Task_* function, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::TaskScheduler* scheduler))
    IL2CPP_REGISTER_METHODINFO(0x0475EBF0, TaskFactory_1_Task__StartNew__MethodInfo)
} // namespace app::classes::System::Threading::Tasks::TaskFactory_1_Task_
