#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/AuthenticationSchemeSelector.h>
#include <Modloader/app/structs/AuthenticationSchemes__Enum.h>
#include <Modloader/app/structs/HttpListenerRequest.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::AuthenticationSchemeSelector {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::AuthenticationSchemeSelector* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x020105B0,
        app::AuthenticationSchemes__Enum,
        Invoke,
        app::AuthenticationSchemeSelector* this_ptr,
        app::HttpListenerRequest* http_request
    )
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::AuthenticationSchemeSelector* this_ptr,
        app::HttpListenerRequest* http_request,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::AuthenticationSchemes__Enum, EndInvoke, app::AuthenticationSchemeSelector* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Net::AuthenticationSchemeSelector
