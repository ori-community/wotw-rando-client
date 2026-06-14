#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_mouseButton.h>
#include <Modloader/app/structs/BrowserNative_MouseButton__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseButton {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::BrowserNative_Calltype_zfb_mouseButton* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x01C7C360,
        void,
        Invoke,
        app::BrowserNative_Calltype_zfb_mouseButton* this_ptr,
        int32_t id,
        app::BrowserNative_MouseButton__Enum button,
        bool down,
        int32_t click_count
    )
    IL2CPP_REGISTER_METHOD(
        0x01C7C740,
        app::IAsyncResult*,
        BeginInvoke,
        app::BrowserNative_Calltype_zfb_mouseButton* this_ptr,
        int32_t id,
        app::BrowserNative_MouseButton__Enum button,
        bool down,
        int32_t click_count,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::BrowserNative_Calltype_zfb_mouseButton* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseButton
