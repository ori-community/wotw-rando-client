#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaAttribute.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>
#include <Modloader/app/structs/XmlSchemaUse__Enum.h>

namespace app::classes::System::Xml::Schema::XmlSchemaAttribute {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_DefaultValue, app::XmlSchemaAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_DefaultValue, app::XmlSchemaAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String*, get_FixedValue, app::XmlSchemaAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_FixedValue, app::XmlSchemaAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x003FF610, app::XmlSchemaForm__Enum, get_Form, app::XmlSchemaAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F083C0, void, set_Form, app::XmlSchemaAttribute* this_ptr, app::XmlSchemaForm__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String*, get_Name, app::XmlSchemaAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_Name, app::XmlSchemaAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::XmlQualifiedName*, get_RefName, app::XmlSchemaAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CA1330, void, set_RefName, app::XmlSchemaAttribute* this_ptr, app::XmlQualifiedName* value)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::XmlQualifiedName*, get_SchemaTypeName, app::XmlSchemaAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CA1420, void, set_SchemaTypeName, app::XmlSchemaAttribute* this_ptr, app::XmlQualifiedName* value)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::XmlSchemaSimpleType*, get_SchemaType, app::XmlSchemaAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_SchemaType, app::XmlSchemaAttribute* this_ptr, app::XmlSchemaSimpleType* value)
    IL2CPP_REGISTER_METHOD(0x00608710, app::XmlSchemaUse__Enum, get_Use, app::XmlSchemaAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00608720, void, set_Use, app::XmlSchemaAttribute* this_ptr, app::XmlSchemaUse__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::XmlQualifiedName*, get_QualifiedName, app::XmlSchemaAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::XmlSchemaSimpleType*, get_AttributeSchemaType, app::XmlSchemaAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CA1510, app::XmlSchemaDatatype*, get_Datatype, app::XmlSchemaAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, SetQualifiedName, app::XmlSchemaAttribute* this_ptr, app::XmlQualifiedName* value)
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, SetAttributeType, app::XmlSchemaAttribute* this_ptr, app::XmlSchemaSimpleType* value)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::SchemaAttDef*, get_AttDef, app::XmlSchemaAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_AttDef, app::XmlSchemaAttribute* this_ptr, app::SchemaAttDef* value)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String*, get_NameAttribute, app::XmlSchemaAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_NameAttribute, app::XmlSchemaAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01CA1530, app::XmlSchemaObject*, Clone, app::XmlSchemaAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CA16E0, void, ctor, app::XmlSchemaAttribute* this_ptr)
} // namespace app::classes::System::Xml::Schema::XmlSchemaAttribute
