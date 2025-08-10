#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Application_JobFilterGroup__Enum.h>
#include <Modloader/app/structs/Application_LogCallback.h>
#include <Modloader/app/structs/Application_NvnBufferUsage__Enum.h>
#include <Modloader/app/structs/AsyncOperation_1.h>
#include <Modloader/app/structs/LogType__Enum.h>
#include <Modloader/app/structs/NetworkReachability__Enum.h>
#include <Modloader/app/structs/RuntimePlatform__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SystemLanguage__Enum.h>
#include <Modloader/app/structs/ThreadPriority__Enum_1.h>

namespace app::classes::UnityEngine::Application {
    IL2CPP_REGISTER_METHOD(0x0241AC10, void, Quit_1, int32_t exit_code)
    IL2CPP_REGISTER_METHOD(0x00BFDB90, void, Quit_2, )
    IL2CPP_REGISTER_METHOD(0x0241AC60, void, SetJobWorkerParameters, int32_t core, int32_t affinity, int32_t worker_index, int32_t priority)
    IL2CPP_REGISTER_METHOD(0x0241ACE0, void, GetAllocatorDebugLock, )
    IL2CPP_REGISTER_METHOD(0x0241AD30, void, ReleaseAllocatorDebugLock, )
    IL2CPP_REGISTER_METHOD(0x0241AD80, int32_t, GetNumAllocatorsDebug, )
    IL2CPP_REGISTER_METHOD(
        0x0241ADD0,
        bool,
        GetAllocatorDebugInfo,
        int32_t index,
        app::String** name,
        uint32_t* allocated_mem,
        uint32_t* reserved_mem,
        uint32_t* alloc_count,
        uint32_t* peak_size
    )
    IL2CPP_REGISTER_METHOD(0x0241AE50, app::String*, GetAndResetMainThreadLoadingMessages, )
    IL2CPP_REGISTER_METHOD(0x0241AEA0, void, set_reportMainThreadLoading, bool value)
    IL2CPP_REGISTER_METHOD(0x0048C1B0, bool, get_skipPreloadDependencies, )
    IL2CPP_REGISTER_METHOD(0x0241AEF0, void, set_skipPreloadDependencies, bool value)
    IL2CPP_REGISTER_METHOD(0x0241AF40, bool, MemoryProfileGetBucketSize, int32_t bucket_index, uint32_t* bucket_size)
    IL2CPP_REGISTER_METHOD(0x0241AFA0, bool, MemoryProfileGetBucketForLabelIndex, int32_t label_index, int32_t bucket_index, uint32_t* alloc_count)
    IL2CPP_REGISTER_METHOD(0x0241B010, bool, MemoryProfileGetInfoForLabelIndex, int32_t index, uint32_t* allocated, uint32_t* alloc_count)
    IL2CPP_REGISTER_METHOD(0x0241B080, bool, MemoryProfileGetLabelName, int32_t index, app::String** label_name)
    IL2CPP_REGISTER_METHOD(0x0241B0E0, int32_t, MemoryProfileGetBucketCount, )
    IL2CPP_REGISTER_METHOD(0x0241B130, int32_t, MemoryProfileGetLabelCount, )
    IL2CPP_REGISTER_METHOD(0x0241B180, void, SetNvnBufferRemapping, app::Application_NvnBufferUsage__Enum source, app::Application_NvnBufferUsage__Enum dest)
    IL2CPP_REGISTER_METHOD(0x0241B1E0, void, ResetNvnBufferRemapping, app::Application_NvnBufferUsage__Enum usage_type)
    IL2CPP_REGISTER_METHOD(0x0241B230, void, SetNvnPoolSize, app::Application_NvnBufferUsage__Enum usage_type, int32_t size)
    IL2CPP_REGISTER_METHOD(0x0241B290, void, SetAllowNvnPoolSizeOverride, bool value)
    IL2CPP_REGISTER_METHOD(0x0241B2E0, bool, GetAllowNvnBufferUsage, )
    IL2CPP_REGISTER_METHOD(0x0241B330, void, GetNvnBufferLock, )
    IL2CPP_REGISTER_METHOD(0x0241B380, void, ReleaseNvnBufferLock, )
    IL2CPP_REGISTER_METHOD(
        0x0241B3D0,
        void,
        GetNvnPoolStats,
        app::Application_NvnBufferUsage__Enum usage_type,
        int32_t* num_pools,
        int32_t* total_size,
        int32_t* used_size
    )
    IL2CPP_REGISTER_METHOD(0x0241B450, void, SetAllowNvnBufferUsage, bool value)
    IL2CPP_REGISTER_METHOD(0x0241B4A0, uint64_t, GetLargestSingleLBufferAllocation, )
    IL2CPP_REGISTER_METHOD(0x00485D70, bool, GetAllowLBufferDeallocation, )
    IL2CPP_REGISTER_METHOD(0x0241B4F0, void, SetAllowLBufferDeallocation, bool value)
    IL2CPP_REGISTER_METHOD(0x0241B540, double, ExecuteJobsForDuration, double milliseconds, app::Application_JobFilterGroup__Enum filter)
    IL2CPP_REGISTER_METHOD(0x00E3B350, bool, get_callDestroyWhenNotAwoken, )
    IL2CPP_REGISTER_METHOD(0x0241B5A0, void, set_callDestroyWhenNotAwoken, bool value)
    IL2CPP_REGISTER_METHOD(0x00E3B490, bool, get_callMoonCleanupWhenNotAwoken, )
    IL2CPP_REGISTER_METHOD(0x0241B5F0, void, set_callMoonCleanupWhenNotAwoken, bool value)
    IL2CPP_REGISTER_METHOD(0x00E3B3F0, bool, get_callMoonCleanupWhenAwoken, )
    IL2CPP_REGISTER_METHOD(0x0241B640, void, set_callMoonCleanupWhenAwoken, bool value)
    IL2CPP_REGISTER_METHOD(0x0241B690, bool, CanStreamedLevelBeLoaded, app::String* level_name)
    IL2CPP_REGISTER_METHOD(0x01F1B650, bool, get_isPlaying, )
    IL2CPP_REGISTER_METHOD(0x0241B6E0, app::RuntimePlatform__Enum, get_platform, )
    IL2CPP_REGISTER_METHOD(0x0241B730, bool, get_isMobilePlatform, )
    IL2CPP_REGISTER_METHOD(0x0241B7F0, bool, get_isConsolePlatform, )
    IL2CPP_REGISTER_METHOD(0x0241B850, bool, get_runInBackground, )
    IL2CPP_REGISTER_METHOD(0x0241B8A0, void, set_runInBackground, bool value)
    IL2CPP_REGISTER_METHOD(0x0241B8F0, bool, get_isBatchMode, )
    IL2CPP_REGISTER_METHOD(0x0241B940, app::String*, get_dataPath, )
    IL2CPP_REGISTER_METHOD(0x0241B990, app::String*, get_streamingAssetsPath, )
    IL2CPP_REGISTER_METHOD(0x0241B9E0, app::String*, get_persistentDataPath, )
    IL2CPP_REGISTER_METHOD(0x0241BA30, app::String*, get_unityVersion, )
    IL2CPP_REGISTER_METHOD(0x0241BA80, app::String*, get_version, )
    IL2CPP_REGISTER_METHOD(0x0241BAD0, app::String*, get_installerName, )
    IL2CPP_REGISTER_METHOD(0x0241BB20, app::String*, get_productName, )
    IL2CPP_REGISTER_METHOD(0x0241BB70, app::String*, get_companyName, )
    IL2CPP_REGISTER_METHOD(0x0241BBC0, void, OpenURL, app::String* url)
    IL2CPP_REGISTER_METHOD(0x00482A00, int32_t, get_targetFrameRate, )
    IL2CPP_REGISTER_METHOD(0x0241BC10, void, set_targetFrameRate, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0241BC60, app::SystemLanguage__Enum, get_systemLanguage, )
    IL2CPP_REGISTER_METHOD(0x0241BCB0, app::String*, get_userDefaultLocaleName, )
    IL2CPP_REGISTER_METHOD(0x0241BD00, int64_t, get_userGeoIDRegion, )
    IL2CPP_REGISTER_METHOD(0x0241BD50, int64_t, get_userGeoIDNation, )
    IL2CPP_REGISTER_METHOD(0x0241BDA0, void, SetLogCallbackDefined, bool defined)
    IL2CPP_REGISTER_METHOD(0x0048C250, app::ThreadPriority__Enum_1, get_backgroundLoadingPriority, )
    IL2CPP_REGISTER_METHOD(0x0241BDF0, void, set_backgroundLoadingPriority, app::ThreadPriority__Enum_1 value)
    IL2CPP_REGISTER_METHOD(0x0241BE40, double, GetDefaultLoadingIntegrationTimeSlice, app::ThreadPriority__Enum_1 priority)
    IL2CPP_REGISTER_METHOD(0x0241BE90, double, GetLoadingIntegrationTimeSlice, app::ThreadPriority__Enum_1 priority)
    IL2CPP_REGISTER_METHOD(0x0241BEE0, void, SetLoadingIntegrationTimeSlice, app::ThreadPriority__Enum_1 priority, double milliseconds)
    IL2CPP_REGISTER_METHOD(0x0241BF40, void, ResetLoadingIntegrationTimeSlice, )
    IL2CPP_REGISTER_METHOD(0x0241BF90, app::NetworkReachability__Enum, get_internetReachability, )
    IL2CPP_REGISTER_METHOD(0x0241BFE0, void, CallControllerStateChanged, app::String* name, bool connected)
    IL2CPP_REGISTER_METHOD(0x0241C090, void, CallLowMemory, )
    IL2CPP_REGISTER_METHOD(0x0241C120, void, add_logMessageReceived, app::Application_LogCallback* value)
    IL2CPP_REGISTER_METHOD(0x0241C230, void, remove_logMessageReceived, app::Application_LogCallback* value)
    IL2CPP_REGISTER_METHOD(0x0241C300, void, add_logMessageReceivedThreaded, app::Application_LogCallback* value)
    IL2CPP_REGISTER_METHOD(0x0241C410, void, remove_logMessageReceivedThreaded, app::Application_LogCallback* value)
    IL2CPP_REGISTER_METHOD(
        0x0241C4E0,
        void,
        CallLogCallback,
        app::String* log_string,
        app::String* stack_trace,
        app::LogType__Enum type,
        bool invoked_on_main_thread
    )
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, get_isEditor, )
    IL2CPP_REGISTER_METHOD(0x0241C5E0, void, add_quitting, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x0241C6E0, void, remove_quitting, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x0241C7E0, bool, Internal_ApplicationWantsToQuit, )
    IL2CPP_REGISTER_METHOD(0x0241C950, void, Internal_ApplicationQuit, )
    IL2CPP_REGISTER_METHOD(0x0241C9E0, void, InvokeOnBeforeRender, )
    IL2CPP_REGISTER_METHOD(0x0241CA70, void, InvokeFocusChanged, bool focus)
    IL2CPP_REGISTER_METHOD(0x0241CB10, int32_t, get_loadedLevel, )
    IL2CPP_REGISTER_METHOD(0x0241CBB0, app::String*, get_loadedLevelName, )
    IL2CPP_REGISTER_METHOD(0x0241CC50, void, LoadLevel_1, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0241CD50, void, LoadLevel_2, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0241CD70, app::AsyncOperation_1*, LoadLevelAsync_1, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0241CD80, app::AsyncOperation_1*, LoadLevelAsync_2, app::String* level_name)
    IL2CPP_REGISTER_METHOD(0x0241CD90, app::AsyncOperation_1*, LoadLevelAdditiveAsync, app::String* level_name)
} // namespace app::classes::UnityEngine::Application
