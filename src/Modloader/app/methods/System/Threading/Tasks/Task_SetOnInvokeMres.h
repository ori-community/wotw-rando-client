#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_SetOnInvokeMres.h>

namespace app::classes::System::Threading::Tasks::Task_SetOnInvokeMres {
    IL2CPP_REGISTER_METHOD(0x0233B580, void, ctor, app::Task_SetOnInvokeMres* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0233B680, void, Invoke, app::Task_SetOnInvokeMres* this_ptr, app::Task* completing_task)
} // namespace app::classes::System::Threading::Tasks::Task_SetOnInvokeMres
