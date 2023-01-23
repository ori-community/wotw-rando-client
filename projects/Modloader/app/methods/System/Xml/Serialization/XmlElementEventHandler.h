#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlElementEventHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlElementEventArgs.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Xml::Serialization::XmlElementEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XmlElementEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::XmlElementEventHandler * this_ptr, app::Object* sender, app::XmlElementEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::XmlElementEventHandler * this_ptr, app::Object* sender, app::XmlElementEventArgs* e, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XmlElementEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Xml::Serialization::XmlElementEventHandler
