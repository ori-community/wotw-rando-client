#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlNodeEventHandler.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlNodeEventArgs.h>

namespace app::classes::System::Xml::Serialization::XmlNodeEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XmlNodeEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::XmlNodeEventHandler * this_ptr, app::Object* sender, app::XmlNodeEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::XmlNodeEventHandler * this_ptr, app::Object* sender, app::XmlNodeEventArgs* e, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XmlNodeEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Xml::Serialization::XmlNodeEventHandler
