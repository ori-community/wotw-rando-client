#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_flatColorTexture.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_flatColorTexture {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::BrowserNative_Calltype_zfb_flatColorTexture* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x01C79A30,
        void*,
        Invoke,
        app::BrowserNative_Calltype_zfb_flatColorTexture* this_ptr,
        int32_t pixel_count,
        int32_t r,
        int32_t g,
        int32_t b,
        int32_t a
    )
    IL2CPP_REGISTER_METHOD(
        0x01C79EB0,
        app::IAsyncResult*,
        BeginInvoke,
        app::BrowserNative_Calltype_zfb_flatColorTexture* this_ptr,
        int32_t pixel_count,
        int32_t r,
        int32_t g,
        int32_t b,
        int32_t a,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F52480, void*, EndInvoke, app::BrowserNative_Calltype_zfb_flatColorTexture* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_flatColorTexture
