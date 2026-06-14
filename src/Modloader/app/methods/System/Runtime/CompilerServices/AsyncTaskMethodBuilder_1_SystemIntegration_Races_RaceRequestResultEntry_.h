#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry_.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry___Boxed.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider_GetRaceResultEntry_d_15.h>
#include <Modloader/app/structs/RaceRequestResultEntry.h>
#include <Modloader/app/structs/TaskAwaiter_1_System_Byte_.h>
#include <Modloader/app/structs/Task_1_SystemIntegration_Races_RaceRequestResultEntry_.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry_ {
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry_, Create, )
    IL2CPP_REGISTER_METHOD(
        0x001A3DA0,
        void,
        Start,
        app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry___Boxed* this_ptr,
        app::PlayFabRaceServiceProvider_GetRaceResultEntry_d_15* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF3E0,
        app::Task_1_SystemIntegration_Races_RaceRequestResultEntry_*,
        get_Task,
        app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3CF0,
        void,
        AwaitUnsafeOnCompleted,
        app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry___Boxed* this_ptr,
        app::TaskAwaiter_1_System_Byte_* awaiter,
        app::PlayFabRaceServiceProvider_GetRaceResultEntry_d_15* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF610,
        void,
        SetException,
        app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry___Boxed* this_ptr,
        app::Exception* exception
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF5A0,
        void,
        SetResult,
        app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry___Boxed* this_ptr,
        app::RaceRequestResultEntry* result
    )
    IL2CPP_REGISTER_METHOD(
        0x0018ED60,
        void,
        SetStateMachine,
        app::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry___Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry_
