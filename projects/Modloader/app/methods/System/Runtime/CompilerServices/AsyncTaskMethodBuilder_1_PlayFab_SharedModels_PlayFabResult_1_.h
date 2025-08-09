#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1_.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Boxed.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Boxed.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12.h>
#include <Modloader/app/structs/OneDSEventsAPI_WriteTelemetryEventsAsync_d_11.h>
#include <Modloader/app/structs/PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse_.h>
#include <Modloader/app/structs/PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse_.h>
#include <Modloader/app/structs/TaskAwaiter.h>
#include <Modloader/app/structs/Task_1_PlayFab_SharedModels_PlayFabResult_1_.h>
#include <Modloader/app/structs/Task_1_PlayFab_SharedModels_PlayFabResult_1__1.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1_ {
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1_, Create_1, )
    IL2CPP_REGISTER_METHOD(
        0x001A3D40,
        void,
        Start_1,
        app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Boxed* this_ptr,
        app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF3E0,
        app::Task_1_PlayFab_SharedModels_PlayFabResult_1_*,
        get_Task_1,
        app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1, Create_2, )
    IL2CPP_REGISTER_METHOD(
        0x001A3D30,
        void,
        Start_2,
        app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Boxed* this_ptr,
        app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF3E0,
        app::Task_1_PlayFab_SharedModels_PlayFabResult_1__1*,
        get_Task_2,
        app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3CA0,
        void,
        AwaitUnsafeOnCompleted_1,
        app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Boxed* this_ptr,
        app::TaskAwaiter* awaiter,
        app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF610,
        void,
        SetException_1,
        app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Boxed* this_ptr,
        app::Exception* exception
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF5A0,
        void,
        SetResult_1,
        app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Boxed* this_ptr,
        app::PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse_* result
    )
    IL2CPP_REGISTER_METHOD(
        0x0018ED60,
        void,
        SetStateMachine_1,
        app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3CB0,
        void,
        AwaitUnsafeOnCompleted_2,
        app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Boxed* this_ptr,
        app::TaskAwaiter* awaiter,
        app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF610,
        void,
        SetException_2,
        app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Boxed* this_ptr,
        app::Exception* exception
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF5A0,
        void,
        SetResult_2,
        app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Boxed* this_ptr,
        app::PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse_* result
    )
    IL2CPP_REGISTER_METHOD(
        0x0018ED60,
        void,
        SetStateMachine_2,
        app::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1_
