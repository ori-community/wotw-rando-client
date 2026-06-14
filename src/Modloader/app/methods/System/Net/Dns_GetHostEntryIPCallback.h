#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Dns_GetHostEntryIPCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IPAddress.h>
#include <Modloader/app/structs/IPHostEntry.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::Dns_GetHostEntryIPCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Dns_GetHostEntryIPCallback* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01852930, app::IPHostEntry*, Invoke, app::Dns_GetHostEntryIPCallback* this_ptr, app::IPAddress* host_address)
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::Dns_GetHostEntryIPCallback* this_ptr,
        app::IPAddress* host_address,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, app::IPHostEntry*, EndInvoke, app::Dns_GetHostEntryIPCallback* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Net::Dns_GetHostEntryIPCallback
