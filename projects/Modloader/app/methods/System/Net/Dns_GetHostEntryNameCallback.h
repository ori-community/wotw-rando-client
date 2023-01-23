#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dns_GetHostEntryNameCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IPHostEntry.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Net::Dns_GetHostEntryNameCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Dns_GetHostEntryNameCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, app::IPHostEntry*, Invoke, (app::Dns_GetHostEntryNameCallback * this_ptr, app::String* host_name))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Dns_GetHostEntryNameCallback * this_ptr, app::String* host_name, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::IPHostEntry*, EndInvoke, (app::Dns_GetHostEntryNameCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::Dns_GetHostEntryNameCallback
