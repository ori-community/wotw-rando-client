#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrowserNative_Calltype_zfb_setFocused.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setFocused {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_setFocused * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01DCBA90, void, Invoke, (app::BrowserNative_Calltype_zfb_setFocused * this_ptr, int32_t id, bool focused))
    IL2CPP_REGISTER_METHOD(0x01DCBDE0, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_setFocused * this_ptr, int32_t id, bool focused, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_setFocused * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setFocused
