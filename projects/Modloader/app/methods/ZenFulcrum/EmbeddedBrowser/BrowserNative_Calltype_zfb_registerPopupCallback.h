#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_registerPopupCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/BrowserNative_NewWindowAction__Enum.h>
#include <Modloader/app/structs/BrowserNative_ZFBSettings.h>
#include <Modloader/app/structs/BrowserNative_NewWindowFunc.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerPopupCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_registerPopupCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01DCA330, void, Invoke, (app::BrowserNative_Calltype_zfb_registerPopupCallback * this_ptr, int32_t id, app::BrowserNative_NewWindowAction__Enum window_action, app::BrowserNative_ZFBSettings base_settings, app::BrowserNative_NewWindowFunc* cb))
    IL2CPP_REGISTER_METHOD(0x01DCA8B0, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_registerPopupCallback * this_ptr, int32_t id, app::BrowserNative_NewWindowAction__Enum window_action, app::BrowserNative_ZFBSettings base_settings, app::BrowserNative_NewWindowFunc* cb, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_registerPopupCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerPopupCallback
