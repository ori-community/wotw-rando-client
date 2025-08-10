#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyChangingEventArgs.h>
#include <Modloader/app/structs/PropertyChangingEventHandler.h>

namespace app::classes::System::ComponentModel::PropertyChangingEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::PropertyChangingEventHandler* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, app::PropertyChangingEventHandler* this_ptr, app::Object* sender, app::PropertyChangingEventArgs* e)
    IL2CPP_REGISTER_METHOD(
        0x01435260,
        app::IAsyncResult*,
        BeginInvoke,
        app::PropertyChangingEventHandler* this_ptr,
        app::Object* sender,
        app::PropertyChangingEventArgs* e,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::PropertyChangingEventHandler* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::ComponentModel::PropertyChangingEventHandler
