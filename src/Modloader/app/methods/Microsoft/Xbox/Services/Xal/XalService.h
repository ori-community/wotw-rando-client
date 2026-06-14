#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/InitArgs.h>
#include <Modloader/app/structs/PlatformRemoteConnectClosePromptEventHandler.h>
#include <Modloader/app/structs/PlatformRemoteConnectShowPromptEventHandler.h>
#include <Modloader/app/structs/PlatformStorageClearEventHandler.h>
#include <Modloader/app/structs/PlatformStorageReadEventHandler.h>
#include <Modloader/app/structs/PlatformStorageWriteEventHandler.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_Microsoft_Xbox_Services_Xal_XalUser_.h>
#include <Modloader/app/structs/WebShowUrlEventHandler.h>
#include <Modloader/app/structs/XalPlatformOperationResult__Enum.h>
#include <Modloader/app/structs/XalService.h>
#include <Modloader/app/structs/XalService_AsyncCompletionRoutine.h>
#include <Modloader/app/structs/XalService_AsyncQueueCallbackType__Enum.h>
#include <Modloader/app/structs/XalService_CommonArgs.h>
#include <Modloader/app/structs/XalService_DeviceInfoArgs.h>
#include <Modloader/app/structs/XalService_TelemetryInfoArgs.h>
#include <Modloader/app/structs/XalService_XalLogCallback.h>
#include <Modloader/app/structs/XalService_XalPlatformRemoteConnectEventHandlers.h>
#include <Modloader/app/structs/XalService_XalPlatformStorageEventHandlers.h>
#include <Modloader/app/structs/XalService_XalPlatformWebShowUrlEventHandler.h>
#include <Modloader/app/structs/XalTraceLevel__Enum.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::Microsoft::Xbox::Services::Xal::XalService {
    IL2CPP_REGISTER_METHOD(0x014359F0, app::XalService*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x01435BE0, void, set_Instance, app::XalService* value)
    IL2CPP_REGISTER_METHOD(0x01435C90, void, ctor, app::XalService* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01435FE0, void, Initialize, app::XalService* this_ptr, app::InitArgs* args)
    IL2CPP_REGISTER_METHOD(0x01436230, app::Task*, CleanupAsync, app::XalService* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014368B0, void, Cleanup, app::XalService* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01436990, uint32_t, GetMaxUsers, app::XalService* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01436AC0,
        void,
        OnShowUrl,
        void* context,
        void* user_context,
        void* operation,
        app::String* start_url,
        app::String* final_url,
        bool suppress_ui
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        ShowWebView,
        app::XalService* this_ptr,
        void* operation_id,
        app::String* start_url,
        app::String* final_url,
        bool suppress_ui
    )
    IL2CPP_REGISTER_METHOD(
        0x01436BF0,
        void,
        SetPlatformStorageEventHandlers,
        app::XalService* this_ptr,
        app::PlatformStorageWriteEventHandler* write_handler,
        app::PlatformStorageReadEventHandler* read_handler,
        app::PlatformStorageClearEventHandler* clear_handler
    )
    IL2CPP_REGISTER_METHOD(
        0x01437150,
        void,
        OnPlatformStorageWrite,
        void* context,
        void* user_context,
        void* operation,
        app::String* key,
        void* data_size,
        void* data
    )
    IL2CPP_REGISTER_METHOD(0x01437680, void, OnPlatformStorageRead, void* context, void* user_context, void* operation, app::String* key)
    IL2CPP_REGISTER_METHOD(0x01437B60, void, OnPlatformStorageClear, void* context, void* user_context, void* operation, app::String* key)
    IL2CPP_REGISTER_METHOD(0x01438030, void, SetPlatformWebViewEventHandler, app::XalService* this_ptr, app::WebShowUrlEventHandler* web_handler)
    IL2CPP_REGISTER_METHOD(
        0x01438270,
        void,
        SetPlatformWebShowUrlComplete,
        app::XalService* this_ptr,
        void* operation_id,
        app::XalPlatformOperationResult__Enum result,
        app::String* url
    )
    IL2CPP_REGISTER_METHOD(
        0x01438330,
        void,
        SetPlatformRemoteConnectHandlers,
        app::XalService* this_ptr,
        app::PlatformRemoteConnectShowPromptEventHandler* show_handler,
        app::PlatformRemoteConnectClosePromptEventHandler* close_handler
    )
    IL2CPP_REGISTER_METHOD(
        0x01438810,
        void,
        OnPlatformRemoteConnectShow,
        void* context,
        void* user_context,
        void* operation,
        app::String* url,
        app::String* code
    )
    IL2CPP_REGISTER_METHOD(0x01438C40, void, OnPlatformRemoteConnectClose, void* context, void* user_context, void* operation)
    IL2CPP_REGISTER_METHOD(0x01438DB0, app::Task_1_Microsoft_Xbox_Services_Xal_XalUser_*, TryAddFirstUserSilentAsync, app::XalService* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01439280, app::Task_1_Microsoft_Xbox_Services_Xal_XalUser_*, AddUserWithUiAsync, app::XalService* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01439750, bool, DispatchWorkQueue, app::XalService* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01439800, bool, DispatchCompletionQueue, app::XalService* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014398B0, void, Update, app::XalService* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01439950, void, ThrowIfFailed, int32_t err_code)
    IL2CPP_REGISTER_METHOD(0x01439A00, void*, WrapAsyncBlock, void* async_queue, app::XalService_AsyncCompletionRoutine* callback)
    IL2CPP_REGISTER_METHOD(0x01439C50, void, AsyncBlockCallback, void* block)
    IL2CPP_REGISTER_METHOD(
        0x01439DC0,
        void,
        DebugLog,
        app::String* area_name,
        app::XalTraceLevel__Enum level,
        uint64_t thread_id,
        uint64_t timestamp,
        app::String* message
    )
    IL2CPP_REGISTER_METHOD(0x01439EC0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x0143A140, int32_t, XalWrapper_XalUserDuplicateHandle, void* user, void** duplicate_user)
    IL2CPP_REGISTER_METHOD(0x0143A1F0, void, XalWrapper_XalUserCloseHandle, void* user)
    IL2CPP_REGISTER_METHOD(
        0x0143A290,
        int32_t,
        XalWrapper_XalInitialize,
        app::XalService_CommonArgs* common,
        uint32_t third_party_consent_count,
        app::String__Array* third_party_consents,
        app::XalService_DeviceInfoArgs* device_info,
        app::XalService_TelemetryInfoArgs* telemetry_info,
        void* internal_work_queue
    )
    IL2CPP_REGISTER_METHOD(0x0143A9D0, int32_t, XalWrapper_XalCleanupAsync, void* async)
    IL2CPP_REGISTER_METHOD(0x0143AA70, int32_t, XalWrapper_XalGetMaxUsers, uint32_t* max_users)
    IL2CPP_REGISTER_METHOD(0x0143AB10, int32_t, XalWrapper_CreateAsyncQueue, void** async_queue)
    IL2CPP_REGISTER_METHOD(0x0143ABB0, void, XalWrapper_CloseAsyncQueue, void* async_queue)
    IL2CPP_REGISTER_METHOD(0x0143AC50, int32_t, XalWrapper_GetAsyncStatus, void* async, bool wait)
    IL2CPP_REGISTER_METHOD(
        0x0143AD00,
        bool,
        XalWrapper_DispatchAsyncQueue,
        void* queue,
        app::XalService_AsyncQueueCallbackType__Enum type,
        uint32_t timeout_in_ms
    )
    IL2CPP_REGISTER_METHOD(0x0143ADC0, void, XalWrapper_AsyncInitialize, void* queue, uint64_t* callback_token)
    IL2CPP_REGISTER_METHOD(0x0143AE70, void, XalWrapper_AsyncCleanup, void* queue, uint64_t callback_token)
    IL2CPP_REGISTER_METHOD(0x0143AF20, void, XalWrapper_AsyncDrainCompletionQueueUntilEmpty, void* queue)
    IL2CPP_REGISTER_METHOD(0x0143AFC0, int32_t, XalWrapper_XalTryAddFirstUserSilentlyAsync, void* async, void* user_context)
    IL2CPP_REGISTER_METHOD(0x0143B070, int32_t, XalWrapper_XalTryAddFirstUserSilentlyResult, void* async, void** new_user)
    IL2CPP_REGISTER_METHOD(0x0143B120, int32_t, XalWrapper_XalAddUserWithUiAsync, void* queue, void* user_context)
    IL2CPP_REGISTER_METHOD(0x0143B1D0, int32_t, XalWrapper_XalAddUserWithUiResult, void* async, void** new_user)
    IL2CPP_REGISTER_METHOD(
        0x0143B280,
        int32_t,
        XalWrapper_XalPlatformWebSetEventHandler,
        void* queue,
        void* context,
        app::XalService_XalPlatformWebShowUrlEventHandler* handler
    )
    IL2CPP_REGISTER_METHOD(
        0x0143B340,
        int32_t,
        XalWrapper_XalPlatformWebShowUrlComplete,
        void* operation,
        app::XalPlatformOperationResult__Enum result,
        app::String* url
    )
    IL2CPP_REGISTER_METHOD(
        0x0143B4E0,
        int32_t,
        XalWrapper_XalPlatformStorageSetEventHandlers,
        void* queue,
        app::XalService_XalPlatformStorageEventHandlers* handlers
    )
    IL2CPP_REGISTER_METHOD(0x0143B690, int32_t, XalWrapper_XalPlatformStorageWriteComplete, void* operation, app::XalPlatformOperationResult__Enum result)
    IL2CPP_REGISTER_METHOD(
        0x0143B740,
        int32_t,
        XalWrapper_XalPlatformStorageReadComplete,
        void* operation,
        app::XalPlatformOperationResult__Enum result,
        void* data_size,
        app::Byte__Array* data
    )
    IL2CPP_REGISTER_METHOD(0x0143B810, int32_t, XalWrapper_XalPlatformStorageClearComplete, void* operation, app::XalPlatformOperationResult__Enum result)
    IL2CPP_REGISTER_METHOD(
        0x0143B8C0,
        int32_t,
        XalWrapper_XalPlatformRemoteConnectSetEventHandlers,
        void* queue,
        app::XalService_XalPlatformRemoteConnectEventHandlers* handlers
    )
    IL2CPP_REGISTER_METHOD(0x0143BA50, int32_t, XalWrapper_XalPlatformRemoteConnectCancelPrompt, void* operation)
    IL2CPP_REGISTER_METHOD(0x0143BAF0, void, XalWrapper_HCTraceSetClientCallback, app::XalService_XalLogCallback* callback)
    IL2CPP_REGISTER_METHOD(0x0143BB90, bool, XalWrapper_HCTraceSetTraceToDebugger, bool trace_to_debugger)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::Microsoft::Xbox::Services::Xal::XalService
