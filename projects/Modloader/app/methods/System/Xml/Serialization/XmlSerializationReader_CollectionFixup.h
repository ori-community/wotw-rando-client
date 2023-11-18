#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlSerializationReader_CollectionFixup.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSerializationCollectionFixupCallback.h>

namespace app::classes::System::Xml::Serialization::XmlSerializationReader_CollectionFixup {
    IL2CPP_REGISTER_METHOD(0x025B2FE0, void, ctor, (app::XmlSerializationReader_CollectionFixup * this_ptr, app::Object* collection, app::XmlSerializationCollectionFixupCallback* callback, app::String* id))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XmlSerializationCollectionFixupCallback*, get_Callback, (app::XmlSerializationReader_CollectionFixup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_Collection, (app::XmlSerializationReader_CollectionFixup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Object*, get_Id, (app::XmlSerializationReader_CollectionFixup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object*, get_CollectionItems, (app::XmlSerializationReader_CollectionFixup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_CollectionItems, (app::XmlSerializationReader_CollectionFixup * this_ptr, app::Object* value))
} // namespace app::classes::System::Xml::Serialization::XmlSerializationReader_CollectionFixup
