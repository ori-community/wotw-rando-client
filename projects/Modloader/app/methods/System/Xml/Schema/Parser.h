#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Parser_1.h>
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/SchemaNames.h>
#include <Modloader/app/structs/SchemaType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XmlAttribute.h>
#include <Modloader/app/structs/XmlElement.h>
#include <Modloader/app/structs/XmlEntityReference.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchema.h>

namespace app::classes::System::Xml::Schema::Parser {
    IL2CPP_REGISTER_METHOD(0x016D2ED0, void, ctor, (app::Parser_1 * this_ptr, app::SchemaType__Enum schema_type, app::XmlNameTable* name_table, app::SchemaNames* schema_names, app::ValidationEventHandler* event_handler))
    IL2CPP_REGISTER_METHOD(0x016D3070, app::SchemaType__Enum, Parse, (app::Parser_1 * this_ptr, app::XmlReader* reader, app::String* target_namespace))
    IL2CPP_REGISTER_METHOD(0x016D30D0, void, StartParsing, (app::Parser_1 * this_ptr, app::XmlReader* reader, app::String* target_namespace))
    IL2CPP_REGISTER_METHOD(0x016D39C0, bool, CheckSchemaRoot, (app::Parser_1 * this_ptr, app::SchemaType__Enum root_type, app::String** code))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::SchemaType__Enum, FinishParsing, (app::Parser_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlSchema*, get_XmlSchema, (app::Parser_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_XmlResolver, (app::Parser_1 * this_ptr, app::XmlResolver* value))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::SchemaInfo*, get_XdrSchema, (app::Parser_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016D3AC0, bool, ParseReaderNode, (app::Parser_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016D4520, void, ProcessAppInfoDocMarkup, (app::Parser_1 * this_ptr, bool root))
    IL2CPP_REGISTER_METHOD(0x016D48B0, app::XmlElement*, LoadElementNode, (app::Parser_1 * this_ptr, bool root))
    IL2CPP_REGISTER_METHOD(0x016D4E80, app::XmlAttribute*, CreateXmlNsAttribute, (app::Parser_1 * this_ptr, app::String* prefix, app::String* value))
    IL2CPP_REGISTER_METHOD(0x016D5010, app::XmlAttribute*, LoadAttributeNode, (app::Parser_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016D5220, app::XmlEntityReference*, LoadEntityReferenceInAttribute, (app::Parser_1 * this_ptr))
} // namespace app::classes::System::Xml::Schema::Parser
