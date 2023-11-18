#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Action_1_System_Threading_Tasks_Task_1__4.h>
#include <Modloader/app/structs/RaceRequestResult.h>
#include <Modloader/app/structs/TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_.h>
#include <Modloader/app/structs/Task_1_SystemIntegration_Races_RaceRequestResult_.h>

namespace app::classes::System::Threading::Tasks::Task_1_SystemIntegration_Races_RaceRequestResult_ {
    IL2CPP_REGISTER_METHOD(0x02A5BF40, app::Task*, ContinueWith, (app::Task_1_SystemIntegration_Races_RaceRequestResult_ * this_ptr, app::Action_1_System_Threading_Tasks_Task_1__4* continuation_action))
    IL2CPP_REGISTER_METHOD(0x02A5A760, app::RaceRequestResult*, get_Result, (app::Task_1_SystemIntegration_Races_RaceRequestResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_, GetAwaiter, (app::Task_1_SystemIntegration_Races_RaceRequestResult_ * this_ptr))
} // namespace app::classes::System::Threading::Tasks::Task_1_SystemIntegration_Races_RaceRequestResult_
