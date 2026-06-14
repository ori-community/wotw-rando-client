#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnreferencedObjectEventArgs.h>
#include <Modloader/app/structs/UnreferencedObjectEventHandler.h>

namespace app::classes::System::Xml::Serialization::UnreferencedObjectEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::UnreferencedObjectEventHandler* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, app::UnreferencedObjectEventHandler* this_ptr, app::Object* sender, app::UnreferencedObjectEventArgs* e)
    IL2CPP_REGISTER_METHOD(
        0x01435260,
        app::IAsyncResult*,
        BeginInvoke,
        app::UnreferencedObjectEventHandler* this_ptr,
        app::Object* sender,
        app::UnreferencedObjectEventArgs* e,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::UnreferencedObjectEventHandler* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Xml::Serialization::UnreferencedObjectEventHandler
