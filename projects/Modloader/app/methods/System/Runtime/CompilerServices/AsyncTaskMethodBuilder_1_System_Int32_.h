#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_System_Int32_.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_System_Int32___Boxed.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_Mon_Ne_Securit_AsyncProtocolResul_.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32_.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object_.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h>
#include <Modloader/app/structs/CryptoStream_HopToThreadPoolAwaitable.h>
#include <Modloader/app/structs/CryptoStream_ReadAsyncInternal_d_34.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_InnerRead_d_66.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_StartOperation_d_58.h>
#include <Modloader/app/structs/Task_1_System_Int32_.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder_1_System_Int32_, Create, )
    IL2CPP_REGISTER_METHOD(
        0x001A3C20,
        void,
        Start_1,
        app::AsyncTaskMethodBuilder_1_System_Int32___Boxed* this_ptr,
        app::CryptoStream_ReadAsyncInternal_d_34* state_machine
    )
    IL2CPP_REGISTER_METHOD(0x001FF3E0, app::Task_1_System_Int32_*, get_Task, app::AsyncTaskMethodBuilder_1_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001A3BB0,
        void,
        AwaitOnCompleted,
        app::AsyncTaskMethodBuilder_1_System_Int32___Boxed* this_ptr,
        app::CryptoStream_HopToThreadPoolAwaitable* awaiter,
        app::CryptoStream_ReadAsyncInternal_d_34* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3BC0,
        void,
        AwaitUnsafeOnCompleted_1,
        app::AsyncTaskMethodBuilder_1_System_Int32___Boxed* this_ptr,
        app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter* awaiter,
        app::CryptoStream_ReadAsyncInternal_d_34* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3BE0,
        void,
        AwaitUnsafeOnCompleted_2,
        app::AsyncTaskMethodBuilder_1_System_Int32___Boxed* this_ptr,
        app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32_* awaiter,
        app::CryptoStream_ReadAsyncInternal_d_34* state_machine
    )
    IL2CPP_REGISTER_METHOD(0x001FF4F0, void, SetException, app::AsyncTaskMethodBuilder_1_System_Int32___Boxed* this_ptr, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x001FF480, void, SetResult_1, app::AsyncTaskMethodBuilder_1_System_Int32___Boxed* this_ptr, int32_t result)
    IL2CPP_REGISTER_METHOD(
        0x0018ED60,
        void,
        SetStateMachine,
        app::AsyncTaskMethodBuilder_1_System_Int32___Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3C10,
        void,
        Start_2,
        app::AsyncTaskMethodBuilder_1_System_Int32___Boxed* this_ptr,
        app::MobileAuthenticatedStream_StartOperation_d_58* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3C00,
        void,
        Start_3,
        app::AsyncTaskMethodBuilder_1_System_Int32___Boxed* this_ptr,
        app::MobileAuthenticatedStream_InnerRead_d_66* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3BD0,
        void,
        AwaitUnsafeOnCompleted_3,
        app::AsyncTaskMethodBuilder_1_System_Int32___Boxed* this_ptr,
        app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32_* awaiter,
        app::MobileAuthenticatedStream_InnerRead_d_66* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3BF0,
        void,
        AwaitUnsafeOnCompleted_4,
        app::AsyncTaskMethodBuilder_1_System_Int32___Boxed* this_ptr,
        app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_Mono_Net_Security_AsyncProtocolResult_* awaiter,
        app::MobileAuthenticatedStream_StartOperation_d_58* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3BF0,
        void,
        AwaitUnsafeOnCompleted_5,
        app::AsyncTaskMethodBuilder_1_System_Int32___Boxed* this_ptr,
        app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object_* awaiter,
        app::MobileAuthenticatedStream_StartOperation_d_58* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF490,
        void,
        SetResult_2,
        app::AsyncTaskMethodBuilder_1_System_Int32___Boxed* this_ptr,
        app::Task_1_System_Int32_* completed_task
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF500,
        app::Task_1_System_Int32_*,
        GetTaskForResult,
        app::AsyncTaskMethodBuilder_1_System_Int32___Boxed* this_ptr,
        int32_t result
    )
    IL2CPP_REGISTER_METHOD(0x02769710, void, cctor, )
} // namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_System_Int32_
