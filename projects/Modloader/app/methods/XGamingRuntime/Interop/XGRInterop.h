#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/SizeT.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XAsyncBlockPtr.h>
#include <Modloader/app/structs/XGameSaveBlobInfoCallback.h>
#include <Modloader/app/structs/XGameSaveContainerHandle_1.h>
#include <Modloader/app/structs/XGameSaveProviderHandle_1.h>
#include <Modloader/app/structs/XGameSaveUpdateHandle_1.h>
#include <Modloader/app/structs/XTaskQueueDispatchMode__Enum.h>
#include <Modloader/app/structs/XTaskQueueHandle.h>
#include <Modloader/app/structs/XTaskQueuePort__Enum.h>
#include <Modloader/app/structs/XTaskQueueRegistrationToken.h>
#include <Modloader/app/structs/XUserAddOptions__Enum.h>
#include <Modloader/app/structs/XUserChangeEventCallback_1.h>
#include <Modloader/app/structs/XUserGamerPictureSize__Enum.h>
#include <Modloader/app/structs/XUserGamertagComponent__Enum.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureOptions__Enum.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16HttpHeader_1__Array.h>
#include <Modloader/app/structs/XUserHandle_1.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::XGamingRuntime::Interop::XGRInterop {
    IL2CPP_REGISTER_METHOD(
        0x030B18E0,
        int32_t,
        XGameSaveInitializeProviderAsync,
        app::XUserHandle_1 user_context,
        app::Byte__Array* configuration_id,
        bool sync_on_demand,
        app::XAsyncBlockPtr async_block
    )
    IL2CPP_REGISTER_METHOD(0x030B19B0, int32_t, XGameSaveInitializeProviderResult, app::XAsyncBlockPtr async_block, app::XGameSaveProviderHandle_1* provider)
    IL2CPP_REGISTER_METHOD(0x030B1A60, void, XGameSaveCloseProvider, app::XGameSaveProviderHandle_1 provider)
    IL2CPP_REGISTER_METHOD(
        0x030B1B00,
        int32_t,
        XGameSaveCreateContainer,
        app::XGameSaveProviderHandle_1 provider,
        app::Byte__Array* container_name,
        app::XGameSaveContainerHandle_1* container_context
    )
    IL2CPP_REGISTER_METHOD(0x030B1BC0, void, XGameSaveCloseContainer, app::XGameSaveContainerHandle_1 container_context)
    IL2CPP_REGISTER_METHOD(
        0x030B1C60,
        int32_t,
        XGameSaveEnumerateBlobInfo,
        app::XGameSaveContainerHandle_1 container,
        void* context,
        app::XGameSaveBlobInfoCallback* callback
    )
    IL2CPP_REGISTER_METHOD(
        0x030B1D20,
        int32_t,
        XGameSaveReadBlobDataAsync,
        app::XGameSaveContainerHandle_1 container,
        void* blob_names,
        uint32_t count_of_blobs,
        app::XAsyncBlockPtr async_block
    )
    IL2CPP_REGISTER_METHOD(
        0x030B1DE0,
        int32_t,
        XGameSaveReadBlobDataResult,
        app::XAsyncBlockPtr async_block,
        app::SizeT blobs_size,
        void* allocated_blob_ptr,
        uint32_t* count_of_blobs
    )
    IL2CPP_REGISTER_METHOD(
        0x030B1EA0,
        int32_t,
        XGameSaveCreateUpdate,
        app::XGameSaveContainerHandle_1 container,
        app::Byte__Array* container_display_name,
        app::XGameSaveUpdateHandle_1* update_context
    )
    IL2CPP_REGISTER_METHOD(0x030B1F60, void, XGameSaveCloseUpdate, app::XGameSaveUpdateHandle_1 context)
    IL2CPP_REGISTER_METHOD(
        0x030B2000,
        int32_t,
        XGameSaveSubmitBlobWrite,
        app::XGameSaveUpdateHandle_1 context,
        app::Byte__Array* blob_name,
        app::Byte__Array* data,
        app::SizeT byte_count
    )
    IL2CPP_REGISTER_METHOD(0x030B20E0, int32_t, XGameSaveSubmitBlobDelete, app::XGameSaveUpdateHandle_1 update_context, app::Byte__Array* blob_name)
    IL2CPP_REGISTER_METHOD(0x030B2190, int32_t, XGameSaveSubmitUpdateAsync, app::XGameSaveUpdateHandle_1 update_context, app::XAsyncBlockPtr async_block)
    IL2CPP_REGISTER_METHOD(0x030B2240, int32_t, XGameSaveSubmitUpdateResult, app::XAsyncBlockPtr async_block)
    IL2CPP_REGISTER_METHOD(0x030B22E0, void, XUserCloseHandle, app::XUserHandle_1 user)
    IL2CPP_REGISTER_METHOD(0x030B2380, int32_t, XUserAddAsync, app::XUserAddOptions__Enum add_options, app::XAsyncBlockPtr async_block)
    IL2CPP_REGISTER_METHOD(0x030B2430, int32_t, XUserAddResult, app::XAsyncBlockPtr async_block, app::XUserHandle_1* new_user)
    IL2CPP_REGISTER_METHOD(0x030B24E0, int32_t, XUserGetId, app::XUserHandle_1 user, uint64_t* user_id)
    IL2CPP_REGISTER_METHOD(
        0x030B2590,
        int32_t,
        XUserGetGamertag,
        app::XUserHandle_1 user,
        app::XUserGamertagComponent__Enum gamertag_component,
        app::SizeT gamertag_size,
        app::Byte__Array* gamertag,
        app::SizeT* gamertag_used
    )
    IL2CPP_REGISTER_METHOD(
        0x030B2700,
        int32_t,
        XUserGetGamerPictureAsync,
        app::XUserHandle_1 user,
        app::XUserGamerPictureSize__Enum picture_size,
        app::XAsyncBlockPtr async_block
    )
    IL2CPP_REGISTER_METHOD(0x030B27B0, int32_t, XUserGetGamerPictureResultSize, app::XAsyncBlockPtr async_block, app::SizeT* buffer_size)
    IL2CPP_REGISTER_METHOD(
        0x030B2860,
        int32_t,
        XUserGetGamerPictureResult,
        app::XAsyncBlockPtr async_block,
        app::SizeT buffer_size,
        app::Byte__Array* buffer,
        app::SizeT* buffer_used
    )
    IL2CPP_REGISTER_METHOD(
        0x030B29C0,
        int32_t,
        XUserGetTokenAndSignatureUtf16Async,
        app::XUserHandle_1 user,
        app::XUserGetTokenAndSignatureOptions__Enum options,
        app::String* method_1,
        app::String* url,
        app::SizeT header_count,
        app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Array* headers,
        app::SizeT body_size,
        app::Byte__Array* body,
        app::XAsyncBlockPtr async_block
    )
    IL2CPP_REGISTER_METHOD(0x030B2CE0, int32_t, XUserGetTokenAndSignatureUtf16ResultSize, app::XAsyncBlockPtr async_block, app::SizeT* buffer_size)
    IL2CPP_REGISTER_METHOD(
        0x030B2D90,
        int32_t,
        XUserGetTokenAndSignatureUtf16Result,
        app::XAsyncBlockPtr async_block,
        app::SizeT buffer_size,
        void* buffer,
        void** ptr_to_buffer,
        app::SizeT* buffer_used
    )
    IL2CPP_REGISTER_METHOD(0x030B2E60, int32_t, XUserResolveIssueWithUiUtf16Async, app::XUserHandle_1 user, app::String* url, app::XAsyncBlockPtr async_block)
    IL2CPP_REGISTER_METHOD(0x030B2F20, int32_t, XUserResolveIssueWithUiUtf16Result, app::XAsyncBlockPtr async_block)
    IL2CPP_REGISTER_METHOD(
        0x030B2FC0,
        int32_t,
        XUserRegisterForChangeEvent,
        app::XTaskQueueHandle queue,
        void* context,
        app::XUserChangeEventCallback_1* callback,
        app::XTaskQueueRegistrationToken* token
    )
    IL2CPP_REGISTER_METHOD(0x030B3090, bool, XUserUnregisterForChangeEvent, app::XTaskQueueRegistrationToken token, bool wait)
    IL2CPP_REGISTER_METHOD(0x030B3140, int32_t, XGameRuntimeInitialize, )
    IL2CPP_REGISTER_METHOD(
        0x030B31D0,
        int32_t,
        XTaskQueueCreate,
        app::XTaskQueueDispatchMode__Enum work_dispatch_mode,
        app::XTaskQueueDispatchMode__Enum completion_dispatch_mode,
        app::XTaskQueueHandle* queue
    )
    IL2CPP_REGISTER_METHOD(0x030B3280, void, XTaskQueueDispatch, app::XTaskQueueHandle queue, app::XTaskQueuePort__Enum port, uint32_t timeout_in_ms)
    IL2CPP_REGISTER_METHOD(0x030B3330, int32_t, XAsyncGetStatus, app::XAsyncBlockPtr async_block, bool wait)
    IL2CPP_REGISTER_METHOD(0x030B33E0, int32_t, XAsyncGetResultSize, app::XAsyncBlockPtr async_block, app::SizeT* buffer_size)
} // namespace app::classes::XGamingRuntime::Interop::XGRInterop
