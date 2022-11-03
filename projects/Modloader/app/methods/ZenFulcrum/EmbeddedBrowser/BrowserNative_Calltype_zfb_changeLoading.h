#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_changeLoading {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_changeLoading * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C774C0, void, Invoke, (app::BrowserNative_Calltype_zfb_changeLoading * this_ptr, int32_t id, app::BrowserNative_LoadChange__Enum what))
    IL2CPP_REGISTER_METHOD(0x01C77800, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_changeLoading * this_ptr, int32_t id, app::BrowserNative_LoadChange__Enum what, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_changeLoading * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_changeLoading
