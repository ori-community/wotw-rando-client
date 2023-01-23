#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_memcpy.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_memcpy {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_memcpy * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C78130, void, Invoke, (app::BrowserNative_Calltype_zfb_memcpy * this_ptr, void* dst, void* src, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01C7C270, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_memcpy * this_ptr, void* dst, void* src, int32_t size, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_memcpy * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_memcpy
