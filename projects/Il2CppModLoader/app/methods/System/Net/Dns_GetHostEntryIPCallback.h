#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Dns_GetHostEntryIPCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Dns_GetHostEntryIPCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, app::IPHostEntry*, Invoke, (app::Dns_GetHostEntryIPCallback * this_ptr, app::IPAddress* host_address))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Dns_GetHostEntryIPCallback * this_ptr, app::IPAddress* host_address, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::IPHostEntry*, EndInvoke, (app::Dns_GetHostEntryIPCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::Dns_GetHostEntryIPCallback
