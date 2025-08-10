#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_registerNavStateCallback.h>
#include <Modloader/app/structs/BrowserNative_NavStateFunc.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerNavStateCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::BrowserNative_Calltype_zfb_registerNavStateCallback* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x015C22A0,
        void,
        Invoke,
        app::BrowserNative_Calltype_zfb_registerNavStateCallback* this_ptr,
        int32_t id,
        app::BrowserNative_NavStateFunc* callback
    )
    IL2CPP_REGISTER_METHOD(
        0x01DCA260,
        app::IAsyncResult*,
        BeginInvoke,
        app::BrowserNative_Calltype_zfb_registerNavStateCallback* this_ptr,
        int32_t id,
        app::BrowserNative_NavStateFunc* callback,
        app::AsyncCallback* __callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::BrowserNative_Calltype_zfb_registerNavStateCallback* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerNavStateCallback
