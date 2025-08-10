#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncVoidMethodBuilder.h>
#include <Modloader/app/structs/AsyncVoidMethodBuilder__Boxed.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_.h>
#include <Modloader/app/structs/TaskAwaiter_1_System_Object_.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncVoidMethodBuilder {
    IL2CPP_REGISTER_METHOD(0x01A91D60, app::AsyncVoidMethodBuilder, Create, )
    IL2CPP_REGISTER_METHOD(0x0018EE20, void, SetStateMachine, app::AsyncVoidMethodBuilder__Boxed* this_ptr, app::IAsyncStateMachine* state_machine)
    IL2CPP_REGISTER_METHOD(0x0018EE30, void, SetResult, app::AsyncVoidMethodBuilder__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0018EE40, void, SetException, app::AsyncVoidMethodBuilder__Boxed* this_ptr, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x0018EE50, void, NotifySynchronizationContextOfCompletion, app::AsyncVoidMethodBuilder__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0018EE60, app::Task*, get_Task, app::AsyncVoidMethodBuilder__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0012E5F0, void, Start_1, app::AsyncVoidMethodBuilder__Boxed* this_ptr, app::Object** state_machine)
    IL2CPP_REGISTER_METHOD(
        0x0012E5D0,
        void,
        AwaitUnsafeOnCompleted_1,
        app::AsyncVoidMethodBuilder__Boxed* this_ptr,
        app::Object** awaiter,
        app::Object** state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E600,
        void,
        Start_2,
        app::AsyncVoidMethodBuilder__Boxed* this_ptr,
        app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E5E0,
        void,
        AwaitUnsafeOnCompleted_2,
        app::AsyncVoidMethodBuilder__Boxed* this_ptr,
        app::TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_* awaiter,
        app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E5E0,
        void,
        AwaitUnsafeOnCompleted_3,
        app::AsyncVoidMethodBuilder__Boxed* this_ptr,
        app::TaskAwaiter_1_System_Object_* awaiter,
        app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d* state_machine
    )
} // namespace app::classes::System::Runtime::CompilerServices::AsyncVoidMethodBuilder
