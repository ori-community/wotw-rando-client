#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_mouseMove.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseMove {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_mouseMove * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C7C840, void, Invoke, (app::BrowserNative_Calltype_zfb_mouseMove * this_ptr, int32_t id, float x, float y))
    IL2CPP_REGISTER_METHOD(0x01C7CC00, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_mouseMove * this_ptr, int32_t id, float x, float y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_mouseMove * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseMove
