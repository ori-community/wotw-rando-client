#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerDialogCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_registerDialogCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::BrowserNative_Calltype_zfb_registerDialogCallback * this_ptr, int32_t id, app::BrowserNative_DisplayDialogFunc* cb))
    IL2CPP_REGISTER_METHOD(0x01DCA0C0, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_registerDialogCallback * this_ptr, int32_t id, app::BrowserNative_DisplayDialogFunc* cb, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_registerDialogCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerDialogCallback
