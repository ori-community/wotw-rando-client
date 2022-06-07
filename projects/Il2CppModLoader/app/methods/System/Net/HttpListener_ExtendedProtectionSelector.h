#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::HttpListener_ExtendedProtectionSelector {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::HttpListener_ExtendedProtectionSelector * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x014347E0, app::ExtendedProtectionPolicy *, Invoke, (app::HttpListener_ExtendedProtectionSelector * this_ptr, app::HttpListenerRequest * request))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::HttpListener_ExtendedProtectionSelector * this_ptr, app::HttpListenerRequest * request, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::ExtendedProtectionPolicy *, EndInvoke, (app::HttpListener_ExtendedProtectionSelector * this_ptr, app::IAsyncResult * result))
}
