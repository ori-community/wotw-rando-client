#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_showDevTools.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_showDevTools {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_showDevTools * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01DCBA90, void, Invoke, (app::BrowserNative_Calltype_zfb_showDevTools * this_ptr, int32_t id, bool show))
    IL2CPP_REGISTER_METHOD(0x01DCC4A0, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_showDevTools * this_ptr, int32_t id, bool show, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_showDevTools * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_showDevTools
