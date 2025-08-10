#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_goToHTML.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToHTML {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::BrowserNative_Calltype_zfb_goToHTML* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01C795D0, void, Invoke, app::BrowserNative_Calltype_zfb_goToHTML* this_ptr, int32_t id, app::String* html, app::String* url)
    IL2CPP_REGISTER_METHOD(
        0x01C7B1C0,
        app::IAsyncResult*,
        BeginInvoke,
        app::BrowserNative_Calltype_zfb_goToHTML* this_ptr,
        int32_t id,
        app::String* html,
        app::String* url,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::BrowserNative_Calltype_zfb_goToHTML* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToHTML
