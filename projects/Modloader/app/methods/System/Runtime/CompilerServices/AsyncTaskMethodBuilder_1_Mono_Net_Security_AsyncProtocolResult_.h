#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncProtocolRequest_StartOperation_d_23.h>
#include <Modloader/app/structs/AsyncProtocolResult.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult_.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___Boxed.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/Task_1_Mono_Net_Security_AsyncProtocolResult_.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult_ {
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult_, Create, )
    IL2CPP_REGISTER_METHOD(
        0x001A3D20,
        void,
        Start,
        app::AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___Boxed* this_ptr,
        app::AsyncProtocolRequest_StartOperation_d_23* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF3E0,
        app::Task_1_Mono_Net_Security_AsyncProtocolResult_*,
        get_Task,
        app::AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3C70,
        void,
        AwaitUnsafeOnCompleted,
        app::AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___Boxed* this_ptr,
        app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter* awaiter,
        app::AsyncProtocolRequest_StartOperation_d_23* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF610,
        void,
        SetException,
        app::AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___Boxed* this_ptr,
        app::Exception* exception
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF5A0,
        void,
        SetResult,
        app::AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___Boxed* this_ptr,
        app::AsyncProtocolResult* result
    )
    IL2CPP_REGISTER_METHOD(
        0x0018ED60,
        void,
        SetStateMachine,
        app::AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult_
