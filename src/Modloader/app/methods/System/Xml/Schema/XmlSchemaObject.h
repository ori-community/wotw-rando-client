#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlAttribute__Array.h>
#include <Modloader/app/structs/XmlSchemaAnnotation.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSerializerNamespaces.h>

namespace app::classes::System::Xml::Schema::XmlSchemaObject {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_LineNumber, app::XmlSchemaObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_LineNumber, app::XmlSchemaObject* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_LinePosition, app::XmlSchemaObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_LinePosition, app::XmlSchemaObject* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_SourceUri, app::XmlSchemaObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_SourceUri, app::XmlSchemaObject* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::XmlSchemaObject*, get_Parent, app::XmlSchemaObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Parent, app::XmlSchemaObject* this_ptr, app::XmlSchemaObject* value)
    IL2CPP_REGISTER_METHOD(0x01CB6620, app::XmlSerializerNamespaces*, get_Namespaces, app::XmlSchemaObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Namespaces, app::XmlSchemaObject* this_ptr, app::XmlSerializerNamespaces* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAdd, app::XmlSchemaObject* this_ptr, app::XmlSchemaObjectCollection* container, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRemove, app::XmlSchemaObject* this_ptr, app::XmlSchemaObjectCollection* container, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnClear, app::XmlSchemaObject* this_ptr, app::XmlSchemaObjectCollection* container)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_IdAttribute, app::XmlSchemaObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_IdAttribute, app::XmlSchemaObject* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetUnhandledAttributes, app::XmlSchemaObject* this_ptr, app::XmlAttribute__Array* more_attributes)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AddAnnotation, app::XmlSchemaObject* this_ptr, app::XmlSchemaAnnotation* annotation)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_NameAttribute, app::XmlSchemaObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_NameAttribute, app::XmlSchemaObject* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsProcessing, app::XmlSchemaObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsProcessing, app::XmlSchemaObject* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01CB6770, app::XmlSchemaObject*, Clone, app::XmlSchemaObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XmlSchemaObject* this_ptr)
} // namespace app::classes::System::Xml::Schema::XmlSchemaObject
