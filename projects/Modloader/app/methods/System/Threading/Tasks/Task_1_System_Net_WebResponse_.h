#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TaskFactory_1_System_Net_WebResponse_.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_System_Net_WebResponse_.h>
#include <Modloader/app/structs/Task_1_System_Net_WebResponse_.h>

namespace app::classes::System::Threading::Tasks::Task_1_System_Net_WebResponse_ {
    IL2CPP_REGISTER_METHOD(0x0277FA00, app::TaskFactory_1_System_Net_WebResponse_*, get_Factory, ())
    IL2CPP_REGISTER_METHODINFO(0x04764560, Task_1_System_Net_WebResponse__get_Factory__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0277FBD0, app::ConfiguredTaskAwaitable_1_System_Net_WebResponse_, ConfigureAwait, (app::Task_1_System_Net_WebResponse_ * this_ptr, bool continue_on_captured_context))
    IL2CPP_REGISTER_METHODINFO(0x0471AE08, Task_1_System_Net_WebResponse__ConfigureAwait__MethodInfo)
} // namespace app::classes::System::Threading::Tasks::Task_1_System_Net_WebResponse_
