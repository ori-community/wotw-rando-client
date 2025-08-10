#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_getImage.h>
#include <Modloader/app/structs/BrowserNative_RenderData.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getImage {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::BrowserNative_Calltype_zfb_getImage* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01C7A160, app::BrowserNative_RenderData, Invoke, app::BrowserNative_Calltype_zfb_getImage* this_ptr, int32_t id, bool force_dirty)
    IL2CPP_REGISTER_METHOD(
        0x01C7A5B0,
        app::IAsyncResult*,
        BeginInvoke,
        app::BrowserNative_Calltype_zfb_getImage* this_ptr,
        int32_t id,
        bool force_dirty,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x01C7A680, app::BrowserNative_RenderData, EndInvoke, app::BrowserNative_Calltype_zfb_getImage* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getImage
