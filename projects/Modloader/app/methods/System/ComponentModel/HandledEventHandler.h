#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HandledEventHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/HandledEventArgs.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::ComponentModel::HandledEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::HandledEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::HandledEventHandler * this_ptr, app::Object* sender, app::HandledEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::HandledEventHandler * this_ptr, app::Object* sender, app::HandledEventArgs* e, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::HandledEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::ComponentModel::HandledEventHandler
