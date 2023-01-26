#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XalUser_1.h>
#include <Modloader/app/structs/Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/Task_1_Microsoft_Xbox_Services_Xal_XalUser_.h>
#include <Modloader/app/structs/Task_1_Task_.h>

namespace app::classes::System::Threading::Tasks::Task_1_Microsoft_Xbox_Services_Xal_XalUser_ {
    IL2CPP_REGISTER_METHOD(0x02A5A760, app::XalUser_1*, get_Result, (app::Task_1_Microsoft_Xbox_Services_Xal_XalUser_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01542810, app::Task_1_Task_*, ContinueWith, (app::Task_1_Microsoft_Xbox_Services_Xal_XalUser_ * this_ptr, app::Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_* continuation_function))
} // namespace app::classes::System::Threading::Tasks::Task_1_Microsoft_Xbox_Services_Xal_XalUser_
