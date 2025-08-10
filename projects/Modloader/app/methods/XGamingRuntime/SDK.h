#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/NativeBool.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/XGameSaveBlobInfo.h>
#include <Modloader/app/structs/XGameSaveBlobInfo_1__Array.h>
#include <Modloader/app/structs/XGameSaveContainerHandle.h>
#include <Modloader/app/structs/XGameSaveInitializeProviderCompleted.h>
#include <Modloader/app/structs/XGameSaveProviderHandle.h>
#include <Modloader/app/structs/XGameSaveReadBlobDataCompleted.h>
#include <Modloader/app/structs/XGameSaveSubmitUpdateCompleted.h>
#include <Modloader/app/structs/XGameSaveUpdateHandle.h>
#include <Modloader/app/structs/XRegistrationToken.h>
#include <Modloader/app/structs/XUserAddCompleted.h>
#include <Modloader/app/structs/XUserAddOptions__Enum.h>
#include <Modloader/app/structs/XUserChangeEventCallback.h>
#include <Modloader/app/structs/XUserChangeEvent__Enum.h>
#include <Modloader/app/structs/XUserGamerPictureSize__Enum.h>
#include <Modloader/app/structs/XUserGamertagComponent__Enum.h>
#include <Modloader/app/structs/XUserGetGamerPictureCompleted.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureOptions__Enum.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16HttpHeader__Array.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16Result.h>
#include <Modloader/app/structs/XUserHandle.h>
#include <Modloader/app/structs/XUserLocalId.h>
#include <Modloader/app/structs/XUserResolveIssueWithUiUtf16Result.h>

namespace app::classes::XGamingRuntime::SDK {
    IL2CPP_REGISTER_METHOD(0x030B44F0, app::NativeBool, EnumerateBlobInfoCallback, app::XGameSaveBlobInfo interop_blob_info, void* context)
    IL2CPP_REGISTER_METHOD(
        0x030B4710,
        void,
        XGameSaveInitializeProviderAsync,
        app::XUserHandle* user_handle,
        app::String* configuration_id,
        bool sync_on_demand,
        app::XGameSaveInitializeProviderCompleted* completion_routine
    )
    IL2CPP_REGISTER_METHOD(0x030B4AD0, void, XGameSaveCloseProvider, app::XGameSaveProviderHandle* game_save_provider_handle)
    IL2CPP_REGISTER_METHOD(
        0x030B4B80,
        int32_t,
        XGameSaveCreateContainer,
        app::XGameSaveProviderHandle* game_save_provider_handle,
        app::String* container_name,
        app::XGameSaveContainerHandle** container_context
    )
    IL2CPP_REGISTER_METHOD(0x030B4DD0, void, XGameSaveCloseContainer, app::XGameSaveContainerHandle* container_handle)
    IL2CPP_REGISTER_METHOD(
        0x030B4E80,
        int32_t,
        XGameSaveEnumerateBlobInfo,
        app::XGameSaveContainerHandle* container,
        app::XGameSaveBlobInfo_1__Array** blob_infos
    )
    IL2CPP_REGISTER_METHOD(
        0x030B51C0,
        void,
        XGameSaveReadBlobDataAsync,
        app::XGameSaveContainerHandle* container,
        app::String__Array* blob_names,
        app::XGameSaveReadBlobDataCompleted* completion_routine
    )
    IL2CPP_REGISTER_METHOD(
        0x030B5620,
        int32_t,
        XGameSaveCreateUpdate,
        app::XGameSaveContainerHandle* container,
        app::String* container_display_name,
        app::XGameSaveUpdateHandle** update_handle
    )
    IL2CPP_REGISTER_METHOD(0x030B5870, void, XGameSaveCloseUpdateHandle, app::XGameSaveUpdateHandle* update_handle)
    IL2CPP_REGISTER_METHOD(
        0x030B5920,
        int32_t,
        XGameSaveSubmitBlobWrite,
        app::XGameSaveUpdateHandle* update_handle,
        app::String* blob_name,
        app::Byte__Array* data
    )
    IL2CPP_REGISTER_METHOD(0x030B5A50, int32_t, XGameSaveSubmitBlobDelete, app::XGameSaveUpdateHandle* update_handle, app::String* blob_name)
    IL2CPP_REGISTER_METHOD(
        0x030B5B40,
        void,
        XGameSaveSubmitUpdateAsync,
        app::XGameSaveUpdateHandle* update_handle,
        app::XGameSaveSubmitUpdateCompleted* completion_routine
    )
    IL2CPP_REGISTER_METHOD(0x030B5EB0, void, UserChangeEventCallback, void* context, app::XUserLocalId user_local_id, app::XUserChangeEvent__Enum event_type)
    IL2CPP_REGISTER_METHOD(0x030B5FF0, void, XUserCloseHandle, app::XUserHandle* user)
    IL2CPP_REGISTER_METHOD(0x030B60C0, void, XUserAddAsync, app::XUserAddOptions__Enum options, app::XUserAddCompleted* completion_routine)
    IL2CPP_REGISTER_METHOD(0x030B6400, int32_t, XUserGetId, app::XUserHandle* user, uint64_t* user_id)
    IL2CPP_REGISTER_METHOD(
        0x030B64F0,
        int32_t,
        XUserGetGamertag,
        app::XUserHandle* user,
        app::XUserGamertagComponent__Enum gamertag_component,
        app::String** gamertag
    )
    IL2CPP_REGISTER_METHOD(
        0x030B6810,
        void,
        XUserGetGamerPictureAsync,
        app::XUserHandle* user,
        app::XUserGamerPictureSize__Enum picture_size,
        app::XUserGetGamerPictureCompleted* completion_routine
    )
    IL2CPP_REGISTER_METHOD(
        0x030B6BA0,
        void,
        XUserGetTokenAndSignatureUtf16Async,
        app::XUserHandle* user,
        app::XUserGetTokenAndSignatureOptions__Enum options,
        app::String* method_1,
        app::String* url,
        app::XUserGetTokenAndSignatureUtf16HttpHeader__Array* headers,
        app::Byte__Array* body,
        app::XUserGetTokenAndSignatureUtf16Result* completion_routine
    )
    IL2CPP_REGISTER_METHOD(
        0x030B70E0,
        void,
        XUserResolveIssueWithUiUtf16Async,
        app::XUserHandle* user,
        app::String* url,
        app::XUserResolveIssueWithUiUtf16Result* completion_routine
    )
    IL2CPP_REGISTER_METHOD(
        0x030B7470,
        int32_t,
        XUserRegisterForChangeEvent,
        app::XUserChangeEventCallback* callback,
        app::XRegistrationToken** registration_token
    )
    IL2CPP_REGISTER_METHOD(0x030B7890, void, XUserUnregisterForChangeEvent, app::XRegistrationToken* registration_token)
    IL2CPP_REGISTER_METHOD(0x030B7960, int32_t, XGameRuntimeInitialize, )
    IL2CPP_REGISTER_METHOD(0x030B7C20, void, XTaskQueueDispatch, uint32_t timeout_ms)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::XGamingRuntime::SDK
