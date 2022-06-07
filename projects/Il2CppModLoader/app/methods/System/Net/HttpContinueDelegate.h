#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::HttpContinueDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::HttpContinueDelegate * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::HttpContinueDelegate * this_ptr, int32_t status_code, app::WebHeaderCollection * http_headers))
    IL2CPP_REGISTER_METHOD(0x01D406D0, app::IAsyncResult *, BeginInvoke, (app::HttpContinueDelegate * this_ptr, int32_t status_code, app::WebHeaderCollection * http_headers, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::HttpContinueDelegate * this_ptr, app::IAsyncResult * result))
}
