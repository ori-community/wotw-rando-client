#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::HttpAbortDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::HttpAbortDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D3D560, bool, Invoke, (app::HttpAbortDelegate * this_ptr, app::HttpWebRequest* request, app::WebException* web_exception))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::HttpAbortDelegate * this_ptr, app::HttpWebRequest* request, app::WebException* web_exception, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::HttpAbortDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::HttpAbortDelegate
