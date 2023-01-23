#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_free.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_free {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_free * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::BrowserNative_Calltype_zfb_free * this_ptr, void* mem))
    IL2CPP_REGISTER_METHOD(0x01C79FD0, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_free * this_ptr, void* mem, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_free * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_free
