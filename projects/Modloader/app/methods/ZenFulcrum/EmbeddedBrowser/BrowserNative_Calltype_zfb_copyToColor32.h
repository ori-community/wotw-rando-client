#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrowserNative_Calltype_zfb_copyToColor32.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_copyToColor32 {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_copyToColor32 * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C78130, void, Invoke, (app::BrowserNative_Calltype_zfb_copyToColor32 * this_ptr, void* src, void* dest, int32_t pixel_count))
    IL2CPP_REGISTER_METHOD(0x01C784B0, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_copyToColor32 * this_ptr, void* src, void* dest, int32_t pixel_count, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_copyToColor32 * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_copyToColor32
