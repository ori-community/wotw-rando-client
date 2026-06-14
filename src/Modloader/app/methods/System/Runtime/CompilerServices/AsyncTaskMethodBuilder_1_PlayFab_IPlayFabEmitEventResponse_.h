#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse_.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse___Boxed.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/IPlayFabEmitEventResponse.h>
#include <Modloader/app/structs/OneDSEventPipeline_IntakeEventAsync_d_24.h>
#include <Modloader/app/structs/TaskAwaiter_1_PlayFab_IPlayFabEmitEventResponse_.h>
#include <Modloader/app/structs/Task_1_PlayFab_IPlayFabEmitEventResponse_.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse_ {
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse_, Create, )
    IL2CPP_REGISTER_METHOD(
        0x001A3D50,
        void,
        Start,
        app::AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse___Boxed* this_ptr,
        app::OneDSEventPipeline_IntakeEventAsync_d_24* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF3E0,
        app::Task_1_PlayFab_IPlayFabEmitEventResponse_*,
        get_Task,
        app::AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3CD0,
        void,
        AwaitUnsafeOnCompleted,
        app::AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse___Boxed* this_ptr,
        app::TaskAwaiter_1_PlayFab_IPlayFabEmitEventResponse_* awaiter,
        app::OneDSEventPipeline_IntakeEventAsync_d_24* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF610,
        void,
        SetException,
        app::AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse___Boxed* this_ptr,
        app::Exception* exception
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF5A0,
        void,
        SetResult,
        app::AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse___Boxed* this_ptr,
        app::IPlayFabEmitEventResponse* result
    )
    IL2CPP_REGISTER_METHOD(
        0x0018ED60,
        void,
        SetStateMachine,
        app::AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse___Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse_
