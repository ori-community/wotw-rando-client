#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::HttpListenerRequest_GCCDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::HttpListenerRequest_GCCDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D4A360, app::X509Certificate2*, Invoke, (app::HttpListenerRequest_GCCDelegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::HttpListenerRequest_GCCDelegate * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::X509Certificate2*, EndInvoke, (app::HttpListenerRequest_GCCDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::HttpListenerRequest_GCCDelegate
