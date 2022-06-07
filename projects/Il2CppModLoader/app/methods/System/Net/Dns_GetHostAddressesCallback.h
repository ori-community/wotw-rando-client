#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Dns_GetHostAddressesCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Dns_GetHostAddressesCallback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x014347E0, app::IPAddress__Array *, Invoke, (app::Dns_GetHostAddressesCallback * this_ptr, app::String * host_name))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::Dns_GetHostAddressesCallback * this_ptr, app::String * host_name, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::IPAddress__Array *, EndInvoke, (app::Dns_GetHostAddressesCallback * this_ptr, app::IAsyncResult * result))
}
