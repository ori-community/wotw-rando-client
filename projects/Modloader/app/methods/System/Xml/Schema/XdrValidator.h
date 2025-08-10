#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseValidator.h>
#include <Modloader/app/structs/IValidationEventHandling.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/SchemaElementDecl.h>
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XdrValidator.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaCollection.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>
#include <Modloader/app/structs/XmlValidatingReaderImpl.h>

namespace app::classes::System::Xml::Schema::XdrValidator {
    IL2CPP_REGISTER_METHOD(0x022325B0, void, ctor_1, app::XdrValidator* this_ptr, app::BaseValidator* validator)
    IL2CPP_REGISTER_METHOD(
        0x022326D0,
        void,
        ctor_2,
        app::XdrValidator* this_ptr,
        app::XmlValidatingReaderImpl* reader,
        app::XmlSchemaCollection* schema_collection,
        app::IValidationEventHandling* event_handling
    )
    IL2CPP_REGISTER_METHOD(0x022327D0, void, Init, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02232D00, void, Validate, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02232DE0, void, ValidateElement, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022331A0, void, ValidateChildElement, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D1A10, bool, get_IsInlineSchemaStarted, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022333A0, void, ProcessInlineSchema, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022336A0, void, ProcessElement, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022337A0, void, ValidateEndElement, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02233A30, app::SchemaElementDecl*, ThoroughGetElementDecl, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02233EB0, void, ValidateStartElement, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02234480, void, ValidateEndStartElement, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02234860, void, LoadSchemaFromLocation, app::XdrValidator* this_ptr, app::String* uri)
    IL2CPP_REGISTER_METHOD(0x02235070, void, LoadSchema, app::XdrValidator* this_ptr, app::String* uri)
    IL2CPP_REGISTER_METHOD(0x01C87090, bool, get_HasSchema, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C870B0, bool, get_PreserveWhitespace, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02235260, void, ProcessTokenizedType, app::XdrValidator* this_ptr, app::XmlTokenizedType__Enum ttype, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02235570, void, CompleteValidation, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02235780, void, CheckValue, app::XdrValidator* this_ptr, app::String* value, app::SchemaAttDef* attdef)
    IL2CPP_REGISTER_METHOD(
        0x02235D20,
        void,
        CheckDefaultValue,
        app::String* value,
        app::SchemaAttDef* attdef,
        app::SchemaInfo* sinfo,
        app::XmlNamespaceManager* ns_manager,
        app::XmlNameTable* name_table,
        app::Object* sender,
        app::ValidationEventHandler* eventhandler,
        app::String* base_uri,
        int32_t line_no,
        int32_t line_pos
    )
    IL2CPP_REGISTER_METHOD(0x02236410, void, AddID, app::XdrValidator* this_ptr, app::String* name, app::Object* node)
    IL2CPP_REGISTER_METHOD(0x01C87A40, app::Object*, FindId, app::XdrValidator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x022365B0, void, Push, app::XdrValidator* this_ptr, app::XmlQualifiedName* element_name)
    IL2CPP_REGISTER_METHOD(0x022367E0, void, Pop, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02236930, void, CheckForwardRefs, app::XdrValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02236B40, app::XmlQualifiedName*, QualifiedName, app::XdrValidator* this_ptr, app::String* name, app::String* ns)
} // namespace app::classes::System::Xml::Schema::XdrValidator
