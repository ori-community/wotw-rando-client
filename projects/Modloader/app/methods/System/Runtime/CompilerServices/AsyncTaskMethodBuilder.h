#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder__Boxed.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/CryptoStream_WriteAsyncInternal_d_37.h>
#include <Modloader/app/structs/CryptoStream_HopToThreadPoolAwaitable.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h>
#include <Modloader/app/structs/AsyncProtocolRequest_ProcessOperation_d_24.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1_.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_ProcessAuthentication_d_47.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_InnerWrite_d_67.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_Mono_Net_Security_AsyncProtocolResult_.h>
#include <Modloader/app/structs/OneDSEventsAPI_WaitWhile_d_13.h>
#include <Modloader/app/structs/OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d.h>
#include <Modloader/app/structs/TaskAwaiter.h>
#include <Modloader/app/structs/TaskAwaiter_1_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/OneDSEventPipeline_StartAsync_d_19.h>
#include <Modloader/app/structs/OneDSEventPipeline_StartAsync_d_20.h>
#include <Modloader/app/structs/SceneLoadingTest_Execute_d_19.h>
#include <Modloader/app/structs/SceneLoadingTest_LoadAndUnloadScene_d_20.h>
#include <Modloader/app/structs/SceneLoadingTest_ExtraDelay_d_21.h>
#include <Modloader/app/structs/YieldAwaitable_YieldAwaiter.h>
#include <Modloader/app/structs/XalSignInProvider_SignInSilently_b_30_0_d.h>
#include <Modloader/app/structs/XalSignInProvider_SignIn_b_31_0_d.h>
#include <Modloader/app/structs/UberPoolPerfTest_RunTest_d_31.h>
#include <Modloader/app/structs/UberPoolPerfTest_SetupAutomatedTest_d_32.h>
#include <Modloader/app/structs/UberPoolPerfTest_ForcePrefabPrewarmed_d_36.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkPrefabInfos_d_40.h>
#include <Modloader/app/structs/UberPoolPerfTest_LoadPoolPrewarmScene_d_42.h>
#include <Modloader/app/structs/UberPoolPerfTest_FinishPendingTasks_d_43.h>
#include <Modloader/app/structs/TaskAwaiter_1_System_Collections_Generic_List_1_.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object_.h>
#include <Modloader/app/structs/TaskAwaiter_1_System_Object_.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder {
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder, Create, ())
    IL2CPP_REGISTER_METHOD(0x0018EDC0, void, SetStateMachine, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::IAsyncStateMachine* state_machine))
    IL2CPP_REGISTER_METHOD(0x0018EDD0, app::Task*, get_Task, (app::AsyncTaskMethodBuilder__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0018EDE0, void, SetResult, (app::AsyncTaskMethodBuilder__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0018EDF0, void, SetException, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::Exception* exception))
    IL2CPP_REGISTER_METHOD(0x01A91CB0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x001A3AB0, void, Start_1, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::Object** state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04726600, AsyncTaskMethodBuilder_Start__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3820, void, AwaitOnCompleted_1, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::Object** awaiter, app::Object** state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3840, void, AwaitUnsafeOnCompleted_1, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::Object** awaiter, app::Object** state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3AC0, void, Start_2, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::CryptoStream_WriteAsyncInternal_d_37* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04740B70, AsyncTaskMethodBuilder_Start_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3830, void, AwaitOnCompleted_2, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::CryptoStream_HopToThreadPoolAwaitable* awaiter, app::CryptoStream_WriteAsyncInternal_d_37* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04740540, AsyncTaskMethodBuilder_AwaitOnCompleted_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3870, void, AwaitUnsafeOnCompleted_2, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter* awaiter, app::CryptoStream_WriteAsyncInternal_d_37* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04787AC8, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3A10, void, Start_3, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::AsyncProtocolRequest_ProcessOperation_d_24* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04774B88, AsyncTaskMethodBuilder_Start_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3880, void, AwaitUnsafeOnCompleted_3, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1_* awaiter, app::AsyncProtocolRequest_ProcessOperation_d_24* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0471CE40, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3850, void, AwaitUnsafeOnCompleted_4, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter* awaiter, app::AsyncProtocolRequest_ProcessOperation_d_24* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x047778B8, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3A30, void, Start_4, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::MobileAuthenticatedStream_ProcessAuthentication_d_47* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0472C108, AsyncTaskMethodBuilder_Start_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3A20, void, Start_5, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::MobileAuthenticatedStream_InnerWrite_d_67* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04776F08, AsyncTaskMethodBuilder_Start_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3860, void, AwaitUnsafeOnCompleted_5, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter* awaiter, app::MobileAuthenticatedStream_InnerWrite_d_67* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0475C000, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3890, void, AwaitUnsafeOnCompleted_6, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_Mono_Net_Security_AsyncProtocolResult_* awaiter, app::MobileAuthenticatedStream_ProcessAuthentication_d_47* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04742918, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3A80, void, Start_6, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::OneDSEventsAPI_WaitWhile_d_13* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0474C9A8, AsyncTaskMethodBuilder_Start_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3A70, void, Start_7, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0475C418, AsyncTaskMethodBuilder_Start_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A38C0, void, AwaitUnsafeOnCompleted_7, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter* awaiter, app::OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0478BB10, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3960, void, AwaitUnsafeOnCompleted_8, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter_1_System_Threading_Tasks_Task_* awaiter, app::OneDSEventsAPI_WaitWhile_d_13* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04737AD8, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3A90, void, Start_8, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::OneDSEventPipeline_StartAsync_d_19* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04727D98, AsyncTaskMethodBuilder_Start_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3AA0, void, Start_9, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::OneDSEventPipeline_StartAsync_d_20* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0476AAD0, AsyncTaskMethodBuilder_Start_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A38D0, void, AwaitUnsafeOnCompleted_9, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter* awaiter, app::OneDSEventPipeline_StartAsync_d_19* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04712330, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A38E0, void, AwaitUnsafeOnCompleted_10, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter* awaiter, app::OneDSEventPipeline_StartAsync_d_20* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04719508, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3A40, void, Start_10, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::SceneLoadingTest_Execute_d_19* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04715D20, AsyncTaskMethodBuilder_Start_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3A60, void, Start_11, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::SceneLoadingTest_LoadAndUnloadScene_d_20* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0474CEE0, AsyncTaskMethodBuilder_Start_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3A50, void, Start_12, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::SceneLoadingTest_ExtraDelay_d_21* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0476EB48, AsyncTaskMethodBuilder_Start_11__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A38A0, void, AwaitUnsafeOnCompleted_11, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter* awaiter, app::SceneLoadingTest_Execute_d_19* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04752510, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3990, void, AwaitUnsafeOnCompleted_12, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::YieldAwaitable_YieldAwaiter* awaiter, app::SceneLoadingTest_ExtraDelay_d_21* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0470A548, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_11__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A38B0, void, AwaitUnsafeOnCompleted_13, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter* awaiter, app::SceneLoadingTest_LoadAndUnloadScene_d_20* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0474A500, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_12__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3AE0, void, Start_13, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::XalSignInProvider_SignInSilently_b_30_0_d* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04706E38, AsyncTaskMethodBuilder_Start_12__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3AD0, void, Start_14, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::XalSignInProvider_SignIn_b_31_0_d* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x047160E8, AsyncTaskMethodBuilder_Start_13__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A38F0, void, AwaitUnsafeOnCompleted_14, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter* awaiter, app::XalSignInProvider_SignIn_b_31_0_d* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04717B30, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_13__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3970, void, AwaitUnsafeOnCompleted_15, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter_1_System_Threading_Tasks_Task_* awaiter, app::XalSignInProvider_SignInSilently_b_30_0_d* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x047355A0, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_14__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3B60, void, Start_15, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::UberPoolPerfTest_RunTest_d_31* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04788470, AsyncTaskMethodBuilder_Start_14__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3B70, void, Start_16, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::UberPoolPerfTest_SetupAutomatedTest_d_32* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0473F798, AsyncTaskMethodBuilder_Start_15__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3B40, void, Start_17, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04731FF0, AsyncTaskMethodBuilder_Start_16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3B00, void, Start_18, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04706A70, AsyncTaskMethodBuilder_Start_17__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3B20, void, Start_19, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x047887A0, AsyncTaskMethodBuilder_Start_18__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3B10, void, Start_20, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x047458D8, AsyncTaskMethodBuilder_Start_19__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3AF0, void, Start_21, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::UberPoolPerfTest_BenchmarkPrefabInfos_d_40* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04773D30, AsyncTaskMethodBuilder_Start_20__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3B50, void, Start_22, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x047920A8, AsyncTaskMethodBuilder_Start_21__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3B30, void, Start_23, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::UberPoolPerfTest_FinishPendingTasks_d_43* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04758838, AsyncTaskMethodBuilder_Start_22__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3900, void, AwaitUnsafeOnCompleted_16, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter* awaiter, app::UberPoolPerfTest_BenchmarkPrefabInfos_d_40* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0474AFC0, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_15__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3910, void, AwaitUnsafeOnCompleted_17, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter* awaiter, app::UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x047532A0, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A39A0, void, AwaitUnsafeOnCompleted_18, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::YieldAwaitable_YieldAwaiter* awaiter, app::UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x047877C0, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_17__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3920, void, AwaitUnsafeOnCompleted_19, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter* awaiter, app::UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0475F158, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_18__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A39B0, void, AwaitUnsafeOnCompleted_20, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::YieldAwaitable_YieldAwaiter* awaiter, app::UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0473DFE0, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_19__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3930, void, AwaitUnsafeOnCompleted_21, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter* awaiter, app::UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04765098, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_20__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A39C0, void, AwaitUnsafeOnCompleted_22, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::YieldAwaitable_YieldAwaiter* awaiter, app::UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04781E40, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_21__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A39D0, void, AwaitUnsafeOnCompleted_23, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::YieldAwaitable_YieldAwaiter* awaiter, app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0474D4B8, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_22__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3940, void, AwaitUnsafeOnCompleted_24, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter* awaiter, app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04710800, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_23__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A39E0, void, AwaitUnsafeOnCompleted_25, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::YieldAwaitable_YieldAwaiter* awaiter, app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x047804A0, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_24__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3950, void, AwaitUnsafeOnCompleted_26, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter* awaiter, app::UberPoolPerfTest_RunTest_d_31* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0478CE68, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_25__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A39F0, void, AwaitUnsafeOnCompleted_27, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::YieldAwaitable_YieldAwaiter* awaiter, app::UberPoolPerfTest_RunTest_d_31* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0478CF08, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_26__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3980, void, AwaitUnsafeOnCompleted_28, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter_1_System_Collections_Generic_List_1_* awaiter, app::UberPoolPerfTest_RunTest_d_31* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04764188, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_27__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3A00, void, AwaitUnsafeOnCompleted_29, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::YieldAwaitable_YieldAwaiter* awaiter, app::UberPoolPerfTest_SetupAutomatedTest_d_32* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04791D18, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_28__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3890, void, AwaitUnsafeOnCompleted_30, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object_* awaiter, app::MobileAuthenticatedStream_ProcessAuthentication_d_47* state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3960, void, AwaitUnsafeOnCompleted_31, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter_1_System_Object_* awaiter, app::OneDSEventsAPI_WaitWhile_d_13* state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3970, void, AwaitUnsafeOnCompleted_32, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter_1_System_Object_* awaiter, app::XalSignInProvider_SignInSilently_b_30_0_d* state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3980, void, AwaitUnsafeOnCompleted_33, (app::AsyncTaskMethodBuilder__Boxed * this_ptr, app::TaskAwaiter_1_System_Object_* awaiter, app::UberPoolPerfTest_RunTest_d_31* state_machine))
} // namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder
