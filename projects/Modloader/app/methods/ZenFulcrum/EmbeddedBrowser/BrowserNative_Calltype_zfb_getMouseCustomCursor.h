#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrowserNative_Calltype_zfb_getMouseCustomCursor.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCustomCursor {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_getMouseCustomCursor * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C7AB70, void, Invoke, (app::BrowserNative_Calltype_zfb_getMouseCustomCursor * this_ptr, int32_t id, void* buffer, int32_t width, int32_t height, int32_t* hot_x, int32_t* hot_y))
    IL2CPP_REGISTER_METHOD(0x01C7B070, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_getMouseCustomCursor * this_ptr, int32_t id, void* buffer, int32_t width, int32_t height, int32_t* hot_x, int32_t* hot_y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x012E78E0, void, EndInvoke, (app::BrowserNative_Calltype_zfb_getMouseCustomCursor * this_ptr, int32_t* hot_x, int32_t* hot_y, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCustomCursor
