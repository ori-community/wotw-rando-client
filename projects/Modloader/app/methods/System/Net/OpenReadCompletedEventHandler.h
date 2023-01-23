#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OpenReadCompletedEventHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/OpenReadCompletedEventArgs.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Net::OpenReadCompletedEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::OpenReadCompletedEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::OpenReadCompletedEventHandler * this_ptr, app::Object* sender, app::OpenReadCompletedEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::OpenReadCompletedEventHandler * this_ptr, app::Object* sender, app::OpenReadCompletedEventArgs* e, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::OpenReadCompletedEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::OpenReadCompletedEventHandler
