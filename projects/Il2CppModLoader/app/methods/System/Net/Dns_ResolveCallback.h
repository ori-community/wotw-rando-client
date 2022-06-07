#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Dns_ResolveCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Dns_ResolveCallback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, app::IPHostEntry *, Invoke, (app::Dns_ResolveCallback * this_ptr, app::String * host_name))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::Dns_ResolveCallback * this_ptr, app::String * host_name, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::IPHostEntry *, EndInvoke, (app::Dns_ResolveCallback * this_ptr, app::IAsyncResult * result))
}
