#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::BaseProcessor {
    IL2CPP_REGISTER_METHOD(0x019A3F00, void, ctor_1, (app::BaseProcessor * this_ptr, app::XmlNameTable* name_table, app::SchemaNames* schema_names, app::ValidationEventHandler* event_handler))
    IL2CPP_REGISTER_METHOD(0x019A4080, void, ctor_2, (app::BaseProcessor * this_ptr, app::XmlNameTable* name_table, app::SchemaNames* schema_names, app::ValidationEventHandler* event_handler, app::XmlSchemaCompilationSettings* compilation_settings))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XmlNameTable*, get_NameTable, (app::BaseProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A4160, app::SchemaNames*, get_SchemaNames, (app::BaseProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::ValidationEventHandler*, get_EventHandler, (app::BaseProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::XmlSchemaCompilationSettings*, get_CompilationSettings, (app::BaseProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A42C0, bool, get_HasErrors, (app::BaseProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A42D0, void, AddToTable, (app::BaseProcessor * this_ptr, app::XmlSchemaObjectTable* table, app::XmlQualifiedName* qname, app::XmlSchemaObject* item))
    IL2CPP_REGISTER_METHOD(0x019A4790, bool, IsValidAttributeGroupRedefine, (app::BaseProcessor * this_ptr, app::XmlSchemaObject* existing_object, app::XmlSchemaObject* item, app::XmlSchemaObjectTable* table))
    IL2CPP_REGISTER_METHOD(0x019A4920, bool, IsValidGroupRedefine, (app::BaseProcessor * this_ptr, app::XmlSchemaObject* existing_object, app::XmlSchemaObject* item, app::XmlSchemaObjectTable* table))
    IL2CPP_REGISTER_METHOD(0x019A4A80, bool, IsValidTypeRedefine, (app::BaseProcessor * this_ptr, app::XmlSchemaObject* existing_object, app::XmlSchemaObject* item, app::XmlSchemaObjectTable* table))
    IL2CPP_REGISTER_METHOD(0x019A4BF0, void, SendValidationEvent_1, (app::BaseProcessor * this_ptr, app::String* code, app::XmlSchemaObject* source))
    IL2CPP_REGISTER_METHOD(0x019A4D70, void, SendValidationEvent_2, (app::BaseProcessor * this_ptr, app::String* code, app::String* msg, app::XmlSchemaObject* source))
    IL2CPP_REGISTER_METHOD(0x019A4EF0, void, SendValidationEvent_3, (app::BaseProcessor * this_ptr, app::String* code, app::String* msg1, app::String* msg2, app::XmlSchemaObject* source))
    IL2CPP_REGISTER_METHOD(0x019A5130, void, SendValidationEvent_4, (app::BaseProcessor * this_ptr, app::String* code, app::String__Array* args, app::Exception* inner_exception, app::XmlSchemaObject* source))
    IL2CPP_REGISTER_METHOD(0x019A5300, void, SendValidationEvent_5, (app::BaseProcessor * this_ptr, app::String* code, app::String* msg1, app::String* msg2, app::String* source_uri, int32_t line_number, int32_t line_position))
    IL2CPP_REGISTER_METHOD(0x019A5550, void, SendValidationEvent_6, (app::BaseProcessor * this_ptr, app::String* code, app::XmlSchemaObject* source, app::XmlSeverityType__Enum severity))
    IL2CPP_REGISTER_METHOD(0x019A56D0, void, SendValidationEvent_7, (app::BaseProcessor * this_ptr, app::XmlSchemaException* e))
    IL2CPP_REGISTER_METHOD(0x019A56E0, void, SendValidationEvent_8, (app::BaseProcessor * this_ptr, app::String* code, app::String* msg, app::XmlSchemaObject* source, app::XmlSeverityType__Enum severity))
    IL2CPP_REGISTER_METHOD(0x019A5870, void, SendValidationEvent_9, (app::BaseProcessor * this_ptr, app::XmlSchemaException* e, app::XmlSeverityType__Enum severity))
    IL2CPP_REGISTER_METHODINFO(0x04769540, BaseProcessor_SendValidationEvent_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019A5A20, void, SendValidationEventNoThrow, (app::BaseProcessor * this_ptr, app::XmlSchemaException* e, app::XmlSeverityType__Enum severity))
} // namespace app::classes::System::Xml::Schema::BaseProcessor
