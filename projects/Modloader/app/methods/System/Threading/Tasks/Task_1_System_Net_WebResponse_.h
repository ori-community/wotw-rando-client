#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TaskFactory_1_System_Net_WebResponse_.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_System_Net_WebResponse_.h>
#include <Modloader/app/structs/Task_1_System_Net_WebResponse_.h>

namespace app::classes::System::Threading::Tasks::Task_1_System_Net_WebResponse_ {
    IL2CPP_REGISTER_METHOD(0x0277FA00, app::TaskFactory_1_System_Net_WebResponse_*, get_Factory, ())
    IL2CPP_REGISTER_METHOD(0x0277FBD0, app::ConfiguredTaskAwaitable_1_System_Net_WebResponse_, ConfigureAwait, (app::Task_1_System_Net_WebResponse_ * this_ptr, bool continue_on_captured_context))
} // namespace app::classes::System::Threading::Tasks::Task_1_System_Net_WebResponse_
