#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WriteStreamClosedEventHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WriteStreamClosedEventArgs.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Net::WriteStreamClosedEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::WriteStreamClosedEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::WriteStreamClosedEventHandler * this_ptr, app::Object* sender, app::WriteStreamClosedEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::WriteStreamClosedEventHandler * this_ptr, app::Object* sender, app::WriteStreamClosedEventArgs* e, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::WriteStreamClosedEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::WriteStreamClosedEventHandler
