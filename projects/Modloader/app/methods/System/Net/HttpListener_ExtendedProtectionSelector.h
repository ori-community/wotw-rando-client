#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HttpListener_ExtendedProtectionSelector.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ExtendedProtectionPolicy.h>
#include <Modloader/app/structs/HttpListenerRequest.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Net::HttpListener_ExtendedProtectionSelector {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::HttpListener_ExtendedProtectionSelector * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x014347E0, app::ExtendedProtectionPolicy*, Invoke, (app::HttpListener_ExtendedProtectionSelector * this_ptr, app::HttpListenerRequest* request))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::HttpListener_ExtendedProtectionSelector * this_ptr, app::HttpListenerRequest* request, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::ExtendedProtectionPolicy*, EndInvoke, (app::HttpListener_ExtendedProtectionSelector * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::HttpListener_ExtendedProtectionSelector
