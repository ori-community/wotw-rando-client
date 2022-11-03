namespace app {
    struct XboxOneAchievements_1 {
        struct XboxOneAchievements_1__Class* klass;
        MonitorData* monitor;
        struct XboxOneAchievements_1__Fields fields;
    };

    struct XboxOneAchievements_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsSynchronising;
        VirtualInvokeData get_HasSynchronised;
        VirtualInvokeData AwardedOnServer;
        VirtualInvokeData AwardOnServer;
        VirtualInvokeData UpdateFromServer;
        VirtualInvokeData Clear;
    };

    struct XboxOneAchievements_1__StaticFields {
        bool _Disable_k__BackingField;
    };

    struct XboxOneAchievements_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XboxOneAchievements_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XboxOneAchievements_1__VTable vtable;
    };

    struct __declspec(align(8)) GrdkUser__Fields {
        struct Texture2D* _Image_k__BackingField;
        struct String* _GamerTag_k__BackingField;
        struct String* _Uid_k__BackingField;
    };

    struct GrdkUser {
        struct GrdkUser__Class* klass;
        MonitorData* monitor;
        struct GrdkUser__Fields fields;
    };

    struct GrdkUser__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Image;
        VirtualInvokeData get_GamerTag;
        VirtualInvokeData get_Uid;
        VirtualInvokeData get_SignInPrefix;
    };

    struct GrdkUser__StaticFields {
    };

    struct GrdkUser__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrdkUser__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrdkUser__VTable vtable;
    };

    struct __declspec(align(8)) PlayFabFileDownloader__Fields {
        struct String* m_ownerId;
        struct String* m_fileName;
        RaceDataLeaderBoardType__Enum m_data;

        int32_t m_maxSize;
        struct TaskCompletionSource_1_System_Byte_* m_taskCompletionSource;
    };

    struct PlayFabFileDownloader {
        struct PlayFabFileDownloader__Class* klass;
        MonitorData* monitor;
        struct PlayFabFileDownloader__Fields fields;
    };

    struct PlayFabFileDownloader__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabFileDownloader__StaticFields {
    };

    struct PlayFabFileDownloader__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabFileDownloader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabFileDownloader__VTable vtable;
    };

    struct PlayFabFileDownloader_c {
        struct PlayFabFileDownloader_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata_ {
        struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___Fields fields;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___StaticFields {
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___VTable vtable;
    };

    struct PlayFabFileDownloader_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabFileDownloader_c__StaticFields {
        struct PlayFabFileDownloader_c* __9;
        struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata_* __9__7_0;
    };

    struct PlayFabFileDownloader_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabFileDownloader_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabFileDownloader_c__VTable vtable;
    };

    struct __declspec(align(8)) PlayFabFileUploader__Fields {
        struct String* m_fileName;
        struct Byte__Array* m_data;
        struct String* m_ownerId;
        struct TaskCompletionSource_1_System_Boolean_* m_taskCompletionSource;
    };

    struct PlayFabFileUploader {
        struct PlayFabFileUploader__Class* klass;
        MonitorData* monitor;
        struct PlayFabFileUploader__Fields fields;
    };

    struct PlayFabFileUploader__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabFileUploader__StaticFields {
    };

    struct PlayFabFileUploader__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabFileUploader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabFileUploader__VTable vtable;
    };

    struct PlayFabFileUploader_c {
        struct PlayFabFileUploader_c__Class* klass;
        MonitorData* monitor;
    };

    struct PlayFabFileUploader_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabFileUploader_c__StaticFields {
        struct PlayFabFileUploader_c* __9;
        struct Action_1_PlayFab_DataModels_AbortFileUploadsResponse_* __9__7_0;
        struct Action_1_PlayFab_PlayFabError_* __9__7_1;
    };

    struct PlayFabFileUploader_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabFileUploader_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabFileUploader_c__VTable vtable;
    };

    struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___Fields {
        struct Task__Fields _;
        struct RaceRequestResultEntry* m_result;
    };

    struct Task_1_SystemIntegration_Races_RaceRequestResultEntry_ {
        struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___Class* klass;
        MonitorData* monitor;
        struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___Fields fields;
    };

    struct __declspec(align(8)) TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___Fields {
        struct CancellationToken m_defaultCancellationToken;
        struct TaskScheduler* m_defaultScheduler;
        TaskCreationOptions__Enum m_defaultCreationOptions;

        TaskContinuationOptions__Enum m_defaultContinuationOptions;
    };

    struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry_ {
        struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___Class* klass;
        MonitorData* monitor;
        struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___Fields fields;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25 {
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__Fields fields;
    };

    struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___StaticFields {
    };

    struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___VTable vtable;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__StaticFields {
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__VTable vtable;
    };

    struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
        VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
        VirtualInvokeData get_IsCompleted;
        VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
        VirtualInvokeData get_AsyncState;
        VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
        VirtualInvokeData Dispose;
        VirtualInvokeData get_ShouldNotifyDebuggerOfWaitCompletion;
        VirtualInvokeData Dispose_1;
        VirtualInvokeData ShouldReplicate;
        VirtualInvokeData CreateReplicaTask;
        VirtualInvokeData get_SavedStateForNextReplica;
        VirtualInvokeData set_SavedStateFromPreviousReplica;
        VirtualInvokeData get_HandedOverChildReplica;
        VirtualInvokeData set_HandedOverChildReplica;
        VirtualInvokeData InnerInvoke;
    };

    struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___StaticFields {
        struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry_* s_Factory;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25* TaskWhenAnyCast;
    };

    struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___VTable vtable;
    };

    struct __declspec(align(8)) PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields {
        struct PlayFabRaceServiceProvider* __4__this;
        struct String* raceId;
        RaceDataLeaderBoardType__Enum type;

        LeaderboardFilter__Enum filter;

        struct RaceDataCache* dataCache;
        struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_* tcs;
    };

    struct PlayFabRaceServiceProvider_c_DisplayClass10_0 {
        struct PlayFabRaceServiceProvider_c_DisplayClass10_0__Class* klass;
        MonitorData* monitor;
        struct PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields fields;
    };

    struct __declspec(align(8)) TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___Fields {
        struct Task_1_SystemIntegration_Races_RaceRequestResult_* m_task;
    };

    struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_ {
        struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___Class* klass;
        MonitorData* monitor;
        struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___Fields fields;
    };

    struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___StaticFields {
    };

    struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___VTable vtable;
    };

    struct PlayFabRaceServiceProvider_c_DisplayClass10_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabRaceServiceProvider_c_DisplayClass10_0__StaticFields {
    };

    struct PlayFabRaceServiceProvider_c_DisplayClass10_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabRaceServiceProvider_c_DisplayClass10_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabRaceServiceProvider_c_DisplayClass10_0__VTable vtable;
    };

    struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_ {
        struct Task_1_SystemIntegration_Races_RaceRequestResult_* m_task;
    };

    struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult___Boxed {
        struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult___Class* klass;
        MonitorData* monitor;
        struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_ fields;
    };

    struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d {
        int32_t __1__state;
        struct AsyncVoidMethodBuilder __t__builder;
        struct List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* list;
        struct PlayFabRaceServiceProvider_c_DisplayClass10_0* __4__this;
        struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_ __u__1;
    };

    struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__Boxed {
        struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__Class* klass;
        MonitorData* monitor;
        struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d fields;
    };

    struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UnsafeOnCompleted;
        VirtualInvokeData OnCompleted;
    };

    struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult___StaticFields {
    };

    struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult___VTable vtable;
    };

    struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData MoveNext;
        VirtualInvokeData SetStateMachine;
    };

    struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__StaticFields {
    };

    struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__VTable vtable;
    };

    struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult_ {
        struct AsyncMethodBuilderCore m_coreState;
        struct Task_1_SystemIntegration_Races_RaceRequestResult_* m_task;
    };

    struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___Boxed {
        struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___Class* klass;
        MonitorData* monitor;
        struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult_ fields;
    };

    struct PlayFabRaceServiceProvider_GetRaceData_d_10 {
        int32_t __1__state;
        struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult_ __t__builder;
        struct PlayFabRaceServiceProvider* __4__this;
        struct String* raceId;
        RaceDataLeaderBoardType__Enum type;

        LeaderboardFilter__Enum filter;

        struct PlayFabRaceServiceProvider_c_DisplayClass10_0* __8__1;
        struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_* __7__wrap1;
        struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_ __u__1;
    };

    struct PlayFabRaceServiceProvider_GetRaceData_d_10__Boxed {
        struct PlayFabRaceServiceProvider_GetRaceData_d_10__Class* klass;
        MonitorData* monitor;
        struct PlayFabRaceServiceProvider_GetRaceData_d_10 fields;
    };

    struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___StaticFields {
        struct Task_1_SystemIntegration_Races_RaceRequestResult_* s_defaultResultTask;
    };

    struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___VTable vtable;
    };

    struct PlayFabRaceServiceProvider_GetRaceData_d_10__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData MoveNext;
        VirtualInvokeData SetStateMachine;
    };

    struct PlayFabRaceServiceProvider_GetRaceData_d_10__StaticFields {
    };

    struct PlayFabRaceServiceProvider_GetRaceData_d_10__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabRaceServiceProvider_GetRaceData_d_10__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabRaceServiceProvider_GetRaceData_d_10__VTable vtable;
    };

    struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry_ {
        struct Task_1_SystemIntegration_Races_RaceRequestResultEntry__1* m_task;
    };

    struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry___Boxed {
        struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry___Class* klass;
        MonitorData* monitor;
        struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry_ fields;
    };

    struct PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13 {
        int32_t __1__state;
        struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult_ __t__builder;
        struct RaceDataCache* dataCache;
        struct List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* list;
        struct PlayFabRaceServiceProvider* __4__this;
        struct String* raceId;
        RaceDataLeaderBoardType__Enum type;

        LeaderboardFilter__Enum filter;

        struct RaceRequestResult* _resultantData_5__2;
        struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry_ __u__1;
    };

    struct PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__Boxed {
        struct PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__Class* klass;
        MonitorData* monitor;
        struct PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13 fields;
    };

    struct Task_1_SystemIntegration_Races_RaceRequestResultEntry__1__Fields {
        struct Task__Fields _;
        struct RaceRequestResultEntry__Array* m_result;
    };

    struct Task_1_SystemIntegration_Races_RaceRequestResultEntry__1 {
        struct Task_1_SystemIntegration_Races_RaceRequestResultEntry__1__Class* klass;
        MonitorData* monitor;
        struct Task_1_SystemIntegration_Races_RaceRequestResultEntry__1__Fields fields;
    };

    struct __declspec(align(8)) TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry__1__Fields {
        struct CancellationToken m_defaultCancellationToken;
        struct TaskScheduler* m_defaultScheduler;
        TaskCreationOptions__Enum m_defaultCreationOptions;

        TaskContinuationOptions__Enum m_defaultContinuationOptions;
    };

    struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry__1 {
        struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry__1__Class* klass;
        MonitorData* monitor;
        struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry__1__Fields fields;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__26__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__26 {
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__26__Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__26__Fields fields;
    };

    struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry__1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry__1__StaticFields {
    };

    struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry__1__VTable vtable;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__26__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__26__StaticFields {
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__26__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__26__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__26__VTable vtable;
    };

    struct Task_1_SystemIntegration_Races_RaceRequestResultEntry__1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
        VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
        VirtualInvokeData get_IsCompleted;
        VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
        VirtualInvokeData get_AsyncState;
        VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
        VirtualInvokeData Dispose;
        VirtualInvokeData get_ShouldNotifyDebuggerOfWaitCompletion;
        VirtualInvokeData Dispose_1;
        VirtualInvokeData ShouldReplicate;
        VirtualInvokeData CreateReplicaTask;
        VirtualInvokeData get_SavedStateForNextReplica;
        VirtualInvokeData set_SavedStateFromPreviousReplica;
        VirtualInvokeData get_HandedOverChildReplica;
        VirtualInvokeData set_HandedOverChildReplica;
        VirtualInvokeData InnerInvoke;
    };

    struct Task_1_SystemIntegration_Races_RaceRequestResultEntry__1__StaticFields {
        struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry__1* s_Factory;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__26* TaskWhenAnyCast;
    };

    struct Task_1_SystemIntegration_Races_RaceRequestResultEntry__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Task_1_SystemIntegration_Races_RaceRequestResultEntry__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Task_1_SystemIntegration_Races_RaceRequestResultEntry__1__VTable vtable;
    };

    struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UnsafeOnCompleted;
        VirtualInvokeData OnCompleted;
    };

    struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry___StaticFields {
    };

    struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry___VTable vtable;
    };

    struct PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData MoveNext;
        VirtualInvokeData SetStateMachine;
    };

    struct PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__StaticFields {
    };

    struct PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__VTable vtable;
    };

    struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry_ {
        struct AsyncMethodBuilderCore m_coreState;
        struct Task_1_SystemIntegration_Races_RaceRequestResultEntry_* m_task;
    };

    struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry___Boxed {
        struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry___Class* klass;
        MonitorData* monitor;
        struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry_ fields;
    };

    struct TaskAwaiter_1_System_Byte_ {
        struct Task_1_System_Byte_* m_task;
    };

    struct TaskAwaiter_1_System_Byte___Boxed {
        struct TaskAwaiter_1_System_Byte___Class* klass;
        MonitorData* monitor;
        struct TaskAwaiter_1_System_Byte_ fields;
    };

    struct PlayFabRaceServiceProvider_GetRaceResultEntry_d_15 {
        int32_t __1__state;
        struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry_ __t__builder;
        struct PlayFabRaceServiceProvider* __4__this;
        struct String* raceId;
        RaceDataLeaderBoardType__Enum type;

        LeaderboardFilter__Enum filter;

        struct String* displayName;
        struct PlayerProfileModel* profile;
        struct String* userId;
        int32_t score;
        int32_t position;
        struct RaceDataCache* _dataCache_5__2;
        struct TaskAwaiter_1_System_Byte_ __u__1;
    };

    struct PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__Boxed {
        struct PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__Class* klass;
        MonitorData* monitor;
        struct PlayFabRaceServiceProvider_GetRaceResultEntry_d_15 fields;
    };

    struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry___StaticFields {
        struct Task_1_SystemIntegration_Races_RaceRequestResultEntry_* s_defaultResultTask;
    };

    struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResultEntry___VTable vtable;
    };

    struct TaskAwaiter_1_System_Byte___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UnsafeOnCompleted;
        VirtualInvokeData OnCompleted;
    };

    struct TaskAwaiter_1_System_Byte___StaticFields {
    };

    struct TaskAwaiter_1_System_Byte___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TaskAwaiter_1_System_Byte___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TaskAwaiter_1_System_Byte___VTable vtable;
    };

    struct PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData MoveNext;
        VirtualInvokeData SetStateMachine;
    };

    struct PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__StaticFields {
    };

    struct PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__VTable vtable;
    };

    struct RaceDataCache_c {
        struct RaceDataCache_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__1__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__1 {
        struct Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__1__Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__1__Fields fields;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_SystemIntegration_Races_RaceEntry___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_SystemIntegration_Races_RaceEntry_ {
        struct Func_2_System_Collections_Generic_KeyValuePair_2_SystemIntegration_Races_RaceEntry___Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Collections_Generic_KeyValuePair_2_SystemIntegration_Races_RaceEntry___Fields fields;
    };

    struct Func_2_SystemIntegration_Races_RaceEntry_DateTime___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_SystemIntegration_Races_RaceEntry_DateTime_ {
        struct Func_2_SystemIntegration_Races_RaceEntry_DateTime___Class* klass;
        MonitorData* monitor;
        struct Func_2_SystemIntegration_Races_RaceEntry_DateTime___Fields fields;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__1__StaticFields {
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__1__VTable vtable;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_SystemIntegration_Races_RaceEntry___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_SystemIntegration_Races_RaceEntry___StaticFields {
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_SystemIntegration_Races_RaceEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_System_Collections_Generic_KeyValuePair_2_SystemIntegration_Races_RaceEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_System_Collections_Generic_KeyValuePair_2_SystemIntegration_Races_RaceEntry___VTable vtable;
    };

    struct Func_2_SystemIntegration_Races_RaceEntry_DateTime___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct Func_2_SystemIntegration_Races_RaceEntry_DateTime___StaticFields {
    };

    struct Func_2_SystemIntegration_Races_RaceEntry_DateTime___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_SystemIntegration_Races_RaceEntry_DateTime___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_SystemIntegration_Races_RaceEntry_DateTime___VTable vtable;
    };

    struct RaceDataCache_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RaceDataCache_c__StaticFields {
        struct RaceDataCache_c* __9;
        struct Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__1* __9__14_0;
        struct Func_2_System_Collections_Generic_KeyValuePair_2_SystemIntegration_Races_RaceEntry_* __9__15_0;
        struct Func_2_SystemIntegration_Races_RaceEntry_DateTime_* __9__15_2;
        struct Action_1_System_Threading_Tasks_Task_* __9__17_1;
    };

    struct RaceDataCache_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceDataCache_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceDataCache_c__VTable vtable;
    };

} // namespace app
