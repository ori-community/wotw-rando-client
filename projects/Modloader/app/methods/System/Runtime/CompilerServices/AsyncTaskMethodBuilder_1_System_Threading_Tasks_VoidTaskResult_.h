#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncProtocolRequest_ProcessOperation_d_24.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult_.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1_.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object_.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h>
#include <Modloader/app/structs/CryptoStream_HopToThreadPoolAwaitable.h>
#include <Modloader/app/structs/CryptoStream_WriteAsyncInternal_d_37.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_InnerWrite_d_67.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_ProcessAuthentication_d_47.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/OneDSEventPipeline_StartAsync_d_19.h>
#include <Modloader/app/structs/OneDSEventPipeline_StartAsync_d_20.h>
#include <Modloader/app/structs/OneDSEventsAPI_WaitWhile_d_13.h>
#include <Modloader/app/structs/OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d.h>
#include <Modloader/app/structs/SceneLoadingTest_Execute_d_19.h>
#include <Modloader/app/structs/SceneLoadingTest_ExtraDelay_d_21.h>
#include <Modloader/app/structs/SceneLoadingTest_LoadAndUnloadScene_d_20.h>
#include <Modloader/app/structs/TaskAwaiter.h>
#include <Modloader/app/structs/TaskAwaiter_1_System_Object_.h>
#include <Modloader/app/structs/Task_1_VoidTaskResult_.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkPrefabInfos_d_40.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38.h>
#include <Modloader/app/structs/UberPoolPerfTest_ForcePrefabPrewarmed_d_36.h>
#include <Modloader/app/structs/UberPoolPerfTest_LoadPoolPrewarmScene_d_42.h>
#include <Modloader/app/structs/UberPoolPerfTest_RunTest_d_31.h>
#include <Modloader/app/structs/UberPoolPerfTest_SetupAutomatedTest_d_32.h>
#include <Modloader/app/structs/VoidTaskResult.h>
#include <Modloader/app/structs/XalSignInProvider_SignInSilently_b_30_0_d.h>
#include <Modloader/app/structs/XalSignInProvider_SignIn_b_31_0_d.h>
#include <Modloader/app/structs/YieldAwaitable_YieldAwaiter.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult_ {
    IL2CPP_REGISTER_METHOD(
        0x0018ED60,
        void,
        SetStateMachine,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF3E0,
        app::Task_1_VoidTaskResult_*,
        get_Task,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF640,
        void,
        SetResult_1,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::Task_1_VoidTaskResult_* completed_task
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF6A0,
        void,
        SetException,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::Exception* exception
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3DD0,
        void,
        AwaitOnCompleted_1,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::Object** awaiter,
        app::Object** state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3DE0,
        void,
        AwaitOnCompleted_2,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::CryptoStream_HopToThreadPoolAwaitable* awaiter,
        app::CryptoStream_WriteAsyncInternal_d_37* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3DF0,
        void,
        AwaitUnsafeOnCompleted_1,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::Object** awaiter,
        app::Object** state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3E00,
        void,
        AwaitUnsafeOnCompleted_2,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter* awaiter,
        app::AsyncProtocolRequest_ProcessOperation_d_24* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3E10,
        void,
        AwaitUnsafeOnCompleted_3,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter* awaiter,
        app::MobileAuthenticatedStream_InnerWrite_d_67* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3E20,
        void,
        AwaitUnsafeOnCompleted_4,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter* awaiter,
        app::CryptoStream_WriteAsyncInternal_d_37* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3E30,
        void,
        AwaitUnsafeOnCompleted_5,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1_* awaiter,
        app::AsyncProtocolRequest_ProcessOperation_d_24* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3E40,
        void,
        AwaitUnsafeOnCompleted_6,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object_* awaiter,
        app::MobileAuthenticatedStream_ProcessAuthentication_d_47* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3E50,
        void,
        AwaitUnsafeOnCompleted_7,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::TaskAwaiter* awaiter,
        app::SceneLoadingTest_Execute_d_19* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3E60,
        void,
        AwaitUnsafeOnCompleted_8,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::TaskAwaiter* awaiter,
        app::SceneLoadingTest_LoadAndUnloadScene_d_20* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3E70,
        void,
        AwaitUnsafeOnCompleted_9,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::TaskAwaiter* awaiter,
        app::OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3E80,
        void,
        AwaitUnsafeOnCompleted_10,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::TaskAwaiter* awaiter,
        app::OneDSEventPipeline_StartAsync_d_19* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3E90,
        void,
        AwaitUnsafeOnCompleted_11,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::TaskAwaiter* awaiter,
        app::OneDSEventPipeline_StartAsync_d_20* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3EA0,
        void,
        AwaitUnsafeOnCompleted_12,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::TaskAwaiter* awaiter,
        app::XalSignInProvider_SignIn_b_31_0_d* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3EB0,
        void,
        AwaitUnsafeOnCompleted_13,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::TaskAwaiter* awaiter,
        app::UberPoolPerfTest_BenchmarkPrefabInfos_d_40* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E4D0,
        void,
        AwaitUnsafeOnCompleted_14,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::TaskAwaiter* awaiter,
        app::UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E4E0,
        void,
        AwaitUnsafeOnCompleted_15,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::TaskAwaiter* awaiter,
        app::UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E4F0,
        void,
        AwaitUnsafeOnCompleted_16,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::TaskAwaiter* awaiter,
        app::UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E500,
        void,
        AwaitUnsafeOnCompleted_17,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::TaskAwaiter* awaiter,
        app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E510,
        void,
        AwaitUnsafeOnCompleted_18,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::TaskAwaiter* awaiter,
        app::UberPoolPerfTest_RunTest_d_31* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E520,
        void,
        AwaitUnsafeOnCompleted_19,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::TaskAwaiter_1_System_Object_* awaiter,
        app::OneDSEventsAPI_WaitWhile_d_13* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E530,
        void,
        AwaitUnsafeOnCompleted_20,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::TaskAwaiter_1_System_Object_* awaiter,
        app::XalSignInProvider_SignInSilently_b_30_0_d* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E540,
        void,
        AwaitUnsafeOnCompleted_21,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::TaskAwaiter_1_System_Object_* awaiter,
        app::UberPoolPerfTest_RunTest_d_31* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E550,
        void,
        AwaitUnsafeOnCompleted_22,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::YieldAwaitable_YieldAwaiter* awaiter,
        app::SceneLoadingTest_ExtraDelay_d_21* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E560,
        void,
        AwaitUnsafeOnCompleted_23,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::YieldAwaitable_YieldAwaiter* awaiter,
        app::UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E570,
        void,
        AwaitUnsafeOnCompleted_24,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::YieldAwaitable_YieldAwaiter* awaiter,
        app::UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E580,
        void,
        AwaitUnsafeOnCompleted_25,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::YieldAwaitable_YieldAwaiter* awaiter,
        app::UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E590,
        void,
        AwaitUnsafeOnCompleted_26,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::YieldAwaitable_YieldAwaiter* awaiter,
        app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E5A0,
        void,
        AwaitUnsafeOnCompleted_27,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::YieldAwaitable_YieldAwaiter* awaiter,
        app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E5B0,
        void,
        AwaitUnsafeOnCompleted_28,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::YieldAwaitable_YieldAwaiter* awaiter,
        app::UberPoolPerfTest_RunTest_d_31* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x0012E5C0,
        void,
        AwaitUnsafeOnCompleted_29,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::YieldAwaitable_YieldAwaiter* awaiter,
        app::UberPoolPerfTest_SetupAutomatedTest_d_32* state_machine
    )
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult_, Create, )
    IL2CPP_REGISTER_METHOD(
        0x001FF630,
        void,
        SetResult_2,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::VoidTaskResult result
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF6B0,
        app::Task_1_VoidTaskResult_*,
        GetTaskForResult,
        app::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed* this_ptr,
        app::VoidTaskResult result
    )
    IL2CPP_REGISTER_METHOD(0x0276C8E0, void, cctor, )
} // namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult_
