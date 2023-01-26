#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult_.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___Boxed.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider_GetRaceData_d_10.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13.h>
#include <Modloader/app/structs/RaceRequestResult.h>
#include <Modloader/app/structs/TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry_.h>
#include <Modloader/app/structs/TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_.h>
#include <Modloader/app/structs/Task_1_SystemIntegration_Races_RaceRequestResult_.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult_ {
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult_, Create, ())
    IL2CPP_REGISTER_METHOD(0x001A3D90, void, Start_1, (app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___Boxed * this_ptr, app::PlayFabRaceServiceProvider_GetRaceData_d_10* state_machine))
    IL2CPP_REGISTER_METHOD(0x001FF3E0, app::Task_1_SystemIntegration_Races_RaceRequestResult_*, get_Task, (app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001A3DB0, void, Start_2, (app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___Boxed * this_ptr, app::PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13* state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3CE0, void, AwaitUnsafeOnCompleted_1, (app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___Boxed * this_ptr, app::TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_* awaiter, app::PlayFabRaceServiceProvider_GetRaceData_d_10* state_machine))
    IL2CPP_REGISTER_METHOD(0x001FF610, void, SetException, (app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___Boxed * this_ptr, app::Exception* exception))
    IL2CPP_REGISTER_METHOD(0x001FF5A0, void, SetResult, (app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___Boxed * this_ptr, app::RaceRequestResult* result))
    IL2CPP_REGISTER_METHOD(0x0018ED60, void, SetStateMachine, (app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___Boxed * this_ptr, app::IAsyncStateMachine* state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3D00, void, AwaitUnsafeOnCompleted_2, (app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___Boxed * this_ptr, app::TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry_* awaiter, app::PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13* state_machine))
} // namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult_
