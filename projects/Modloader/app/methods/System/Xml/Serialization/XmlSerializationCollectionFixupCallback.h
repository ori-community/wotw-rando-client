#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlSerializationCollectionFixupCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Xml::Serialization::XmlSerializationCollectionFixupCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XmlSerializationCollectionFixupCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (app::XmlSerializationCollectionFixupCallback * this_ptr, app::Object* collection, app::Object* collection_items))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::XmlSerializationCollectionFixupCallback * this_ptr, app::Object* collection, app::Object* collection_items, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XmlSerializationCollectionFixupCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Xml::Serialization::XmlSerializationCollectionFixupCallback
