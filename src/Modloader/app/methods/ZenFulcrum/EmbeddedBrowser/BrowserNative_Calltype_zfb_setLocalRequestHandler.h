#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_setLocalRequestHandler.h>
#include <Modloader/app/structs/BrowserNative_NewRequestFunc.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setLocalRequestHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::BrowserNative_Calltype_zfb_setLocalRequestHandler* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::BrowserNative_Calltype_zfb_setLocalRequestHandler* this_ptr,
        app::BrowserNative_NewRequestFunc* request_func
    )
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::BrowserNative_Calltype_zfb_setLocalRequestHandler* this_ptr,
        app::BrowserNative_NewRequestFunc* request_func,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::BrowserNative_Calltype_zfb_setLocalRequestHandler* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setLocalRequestHandler
