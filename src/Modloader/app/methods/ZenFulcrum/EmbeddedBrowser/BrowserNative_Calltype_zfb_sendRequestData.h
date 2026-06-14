#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_sendRequestData.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestData {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::BrowserNative_Calltype_zfb_sendRequestData* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x01C79170,
        void,
        Invoke,
        app::BrowserNative_Calltype_zfb_sendRequestData* this_ptr,
        int32_t request_id,
        void* data,
        int32_t data_size
    )
    IL2CPP_REGISTER_METHOD(
        0x01DCB150,
        app::IAsyncResult*,
        BeginInvoke,
        app::BrowserNative_Calltype_zfb_sendRequestData* this_ptr,
        int32_t request_id,
        void* data,
        int32_t data_size,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::BrowserNative_Calltype_zfb_sendRequestData* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestData
