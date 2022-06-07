#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise {
    IL2CPP_REGISTER_METHOD(0x0233E850, void, ctor, (app::TaskFactory_CompleteOnInvokePromise * this_ptr, app::IList_1_System_Threading_Tasks_Task_ * tasks))
    IL2CPP_REGISTER_METHOD(0x0233E9E0, void, Invoke, (app::TaskFactory_CompleteOnInvokePromise * this_ptr, app::Task * completing_task))
}
