#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1_.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Boxed.h>
#include <Modloader/app/structs/OneDSEventsAPI_WriteTelemetryEventsAsync_d_11.h>
#include <Modloader/app/structs/Task_1_PlayFab_SharedModels_PlayFabResult_1_.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Boxed.h>
#include <Modloader/app/structs/OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12.h>
#include <Modloader/app/structs/Task_1_PlayFab_SharedModels_PlayFabResult_1__1.h>
#include <Modloader/app/structs/TaskAwaiter.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse_.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse_.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1_ {
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1_, Create_1, ())
    IL2CPP_REGISTER_METHODINFO(0x0470D500, AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3D40, void, Start_1, (app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Boxed * this_ptr, app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0476E068, AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__Start__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF3E0, app::Task_1_PlayFab_SharedModels_PlayFabResult_1_*, get_Task_1, (app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477FEC8, AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__get_Task__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1, Create_2, ())
    IL2CPP_REGISTER_METHODINFO(0x04700AE8, AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1_Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3D30, void, Start_2, (app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Boxed * this_ptr, app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0476F5D8, AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1_Start__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF3E0, app::Task_1_PlayFab_SharedModels_PlayFabResult_1__1*, get_Task_2, (app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707260, AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1_get_Task__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3CA0, void, AwaitUnsafeOnCompleted_1, (app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Boxed * this_ptr, app::TaskAwaiter* awaiter, app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04735EA0, AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1_AwaitUnsafeOnCompleted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF610, void, SetException_1, (app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Boxed * this_ptr, app::Exception* exception))
    IL2CPP_REGISTER_METHODINFO(0x04776060, AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1_SetException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF5A0, void, SetResult_1, (app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Boxed * this_ptr, app::PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse_* result))
    IL2CPP_REGISTER_METHODINFO(0x04768160, AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1_SetResult__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0018ED60, void, SetStateMachine_1, (app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Boxed * this_ptr, app::IAsyncStateMachine* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x047592E0, AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1_SetStateMachine__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3CB0, void, AwaitUnsafeOnCompleted_2, (app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Boxed * this_ptr, app::TaskAwaiter* awaiter, app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0474EB30, AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__AwaitUnsafeOnCompleted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF610, void, SetException_2, (app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Boxed * this_ptr, app::Exception* exception))
    IL2CPP_REGISTER_METHODINFO(0x047747C0, AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__SetException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF5A0, void, SetResult_2, (app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Boxed * this_ptr, app::PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse_* result))
    IL2CPP_REGISTER_METHODINFO(0x0476C910, AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__SetResult__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0018ED60, void, SetStateMachine_2, (app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Boxed * this_ptr, app::IAsyncStateMachine* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0478B1C0, AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__SetStateMachine__MethodInfo)
} // namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1_
