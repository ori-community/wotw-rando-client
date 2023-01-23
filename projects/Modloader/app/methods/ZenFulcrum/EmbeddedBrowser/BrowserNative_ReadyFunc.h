#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BrowserNative_ReadyFunc.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_ReadyFunc * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::BrowserNative_ReadyFunc * this_ptr, int32_t browser_id))
    IL2CPP_REGISTER_METHOD(0x01DCDD50, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_ReadyFunc * this_ptr, int32_t browser_id, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_ReadyFunc * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc
