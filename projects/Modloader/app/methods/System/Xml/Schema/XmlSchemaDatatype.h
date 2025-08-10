#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SchemaNames.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#include <Modloader/app/structs/XmlSchemaDatatypeVariety__Enum.h>
#include <Modloader/app/structs/XmlSchemaSimpleType__Array.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>

namespace app::classes::System::Xml::Schema::XmlSchemaDatatype {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlSchemaDatatypeVariety__Enum, get_Variety, app::XmlSchemaDatatype* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlTypeCode__Enum, get_TypeCode, app::XmlSchemaDatatype* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDerivedFrom, app::XmlSchemaDatatype* this_ptr, app::XmlSchemaDatatype* datatype)
    IL2CPP_REGISTER_METHOD(0x01CA6130, app::String*, get_TypeCodeString, app::XmlSchemaDatatype* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CA62A0, app::String*, TypeCodeToString, app::XmlSchemaDatatype* this_ptr, app::XmlTypeCode__Enum type_code)
    IL2CPP_REGISTER_METHOD(0x01CA6670, app::String*, ConcatenatedToString, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01CA6B60, app::XmlSchemaDatatype*, FromXmlTokenizedType, app::XmlTokenizedType__Enum token)
    IL2CPP_REGISTER_METHOD(0x01CA6CC0, app::XmlSchemaDatatype*, FromXmlTokenizedTypeXsd, app::XmlTokenizedType__Enum token)
    IL2CPP_REGISTER_METHOD(0x01CA6E20, app::XmlSchemaDatatype*, FromXdrName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01CA6FD0, app::XmlSchemaDatatype*, DeriveByUnion, app::XmlSchemaSimpleType__Array* types, app::XmlSchemaType* schema_type)
    IL2CPP_REGISTER_METHOD(0x01CA7080, app::String*, XdrCanonizeUri, app::String* uri, app::XmlNameTable* name_table, app::SchemaNames* schema_names)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XmlSchemaDatatype* this_ptr)
} // namespace app::classes::System::Xml::Schema::XmlSchemaDatatype
