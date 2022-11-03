#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Threading::Tasks::Task_1_SystemIntegration_Races_RaceRequestResult_ {
    IL2CPP_REGISTER_METHOD(0x02A5BF40, app::Task*, ContinueWith, (app::Task_1_SystemIntegration_Races_RaceRequestResult_ * this_ptr, app::Action_1_System_Threading_Tasks_Task_1__4* continuation_action))
    IL2CPP_REGISTER_METHODINFO(0x04716A78, Task_1_SystemIntegration_Races_RaceRequestResult__ContinueWith__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A5A760, app::RaceRequestResult*, get_Result, (app::Task_1_SystemIntegration_Races_RaceRequestResult_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C920, Task_1_SystemIntegration_Races_RaceRequestResult__get_Result__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_, GetAwaiter, (app::Task_1_SystemIntegration_Races_RaceRequestResult_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474BD28, Task_1_SystemIntegration_Races_RaceRequestResult__GetAwaiter__MethodInfo)
} // namespace app::classes::System::Threading::Tasks::Task_1_SystemIntegration_Races_RaceRequestResult_
