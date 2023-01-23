#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_sendRequestHeaders.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestHeaders {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_sendRequestHeaders * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01DCB240, void, Invoke, (app::BrowserNative_Calltype_zfb_sendRequestHeaders * this_ptr, int32_t request_id, int32_t response_length, app::String* headers_j_s_o_n))
    IL2CPP_REGISTER_METHOD(0x01DCB5C0, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_sendRequestHeaders * this_ptr, int32_t request_id, int32_t response_length, app::String* headers_j_s_o_n, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_sendRequestHeaders * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestHeaders
