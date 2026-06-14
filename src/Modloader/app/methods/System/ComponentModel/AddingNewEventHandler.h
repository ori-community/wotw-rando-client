#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddingNewEventArgs.h>
#include <Modloader/app/structs/AddingNewEventHandler.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::AddingNewEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::AddingNewEventHandler* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, app::AddingNewEventHandler* this_ptr, app::Object* sender, app::AddingNewEventArgs* e)
    IL2CPP_REGISTER_METHOD(
        0x01435260,
        app::IAsyncResult*,
        BeginInvoke,
        app::AddingNewEventHandler* this_ptr,
        app::Object* sender,
        app::AddingNewEventArgs* e,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::AddingNewEventHandler* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::ComponentModel::AddingNewEventHandler
