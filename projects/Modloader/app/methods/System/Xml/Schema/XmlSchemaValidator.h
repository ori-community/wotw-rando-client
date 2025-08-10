#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IDtdInfo.h>
#include <Modloader/app/structs/IXmlLineInfo.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/SchemaDeclBase.h>
#include <Modloader/app/structs/SchemaElementDecl.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/ValidationState.h>
#include <Modloader/app/structs/ValidatorState__Enum.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaContentType__Enum.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#include <Modloader/app/structs/XmlSchemaElement.h>
#include <Modloader/app/structs/XmlSchemaException.h>
#include <Modloader/app/structs/XmlSchemaInfo.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>
#include <Modloader/app/structs/XmlSchemaValidationException.h>
#include <Modloader/app/structs/XmlSchemaValidationFlags__Enum.h>
#include <Modloader/app/structs/XmlSchemaValidator.h>
#include <Modloader/app/structs/XmlSeverityType__Enum.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>
#include <Modloader/app/structs/XmlValueGetter.h>

namespace app::classes::System::Xml::Schema::XmlSchemaValidator {
    IL2CPP_REGISTER_METHOD(
        0x0191EF60,
        void,
        ctor,
        app::XmlSchemaValidator* this_ptr,
        app::XmlNameTable* name_table,
        app::XmlSchemaSet* schemas,
        app::IXmlNamespaceResolver* namespace_resolver,
        app::XmlSchemaValidationFlags__Enum validation_flags
    )
    IL2CPP_REGISTER_METHOD(0x0191F400, void, Init, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0191FA90, void, Reset, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_XmlResolver, app::XmlSchemaValidator* this_ptr, app::XmlResolver* value)
    IL2CPP_REGISTER_METHOD(0x0191FB70, void, set_LineInfoProvider, app::XmlSchemaValidator* this_ptr, app::IXmlLineInfo* value)
    IL2CPP_REGISTER_METHOD(0x0191FB90, void, set_SourceUri, app::XmlSchemaValidator* this_ptr, app::Uri* value)
    IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_ValidationEventSender, app::XmlSchemaValidator* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0191FBD0, void, add_ValidationEventHandler, app::XmlSchemaValidator* this_ptr, app::ValidationEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x0191FC90, void, remove_ValidationEventHandler, app::XmlSchemaValidator* this_ptr, app::ValidationEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x0191FD50, void, AddSchema, app::XmlSchemaValidator* this_ptr, app::XmlSchema* schema)
    IL2CPP_REGISTER_METHOD(0x019201B0, void, Initialize_1, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01920370, void, Initialize_2, app::XmlSchemaValidator* this_ptr, app::XmlSchemaObject* partial_validation_type)
    IL2CPP_REGISTER_METHOD(
        0x01920670,
        void,
        ValidateElement,
        app::XmlSchemaValidator* this_ptr,
        app::String* local_name,
        app::String* namespace_uri,
        app::XmlSchemaInfo* schema_info,
        app::String* xsi_type,
        app::String* xsi_nil,
        app::String* xsi_schema_location,
        app::String* xsi_no_namespace_schema_location
    )
    IL2CPP_REGISTER_METHOD(
        0x01920C20,
        app::Object*,
        ValidateAttribute_1,
        app::XmlSchemaValidator* this_ptr,
        app::String* local_name,
        app::String* namespace_uri,
        app::XmlValueGetter* attribute_value,
        app::XmlSchemaInfo* schema_info
    )
    IL2CPP_REGISTER_METHOD(
        0x01920D20,
        app::Object*,
        ValidateAttribute_2,
        app::XmlSchemaValidator* this_ptr,
        app::String* l_name,
        app::String* ns,
        app::XmlValueGetter* attribute_value_getter,
        app::String* attribute_string_value,
        app::XmlSchemaInfo* schema_info
    )
    IL2CPP_REGISTER_METHOD(0x019217D0, void, ValidateEndOfAttributes, app::XmlSchemaValidator* this_ptr, app::XmlSchemaInfo* schema_info)
    IL2CPP_REGISTER_METHOD(0x01921910, void, ValidateText_1, app::XmlSchemaValidator* this_ptr, app::XmlValueGetter* element_value)
    IL2CPP_REGISTER_METHOD(
        0x019219E0,
        void,
        ValidateText_2,
        app::XmlSchemaValidator* this_ptr,
        app::String* element_string_value,
        app::XmlValueGetter* element_value_getter
    )
    IL2CPP_REGISTER_METHOD(0x01921E80, void, ValidateWhitespace_1, app::XmlSchemaValidator* this_ptr, app::XmlValueGetter* element_value)
    IL2CPP_REGISTER_METHOD(
        0x01921F50,
        void,
        ValidateWhitespace_2,
        app::XmlSchemaValidator* this_ptr,
        app::String* element_string_value,
        app::XmlValueGetter* element_value_getter
    )
    IL2CPP_REGISTER_METHOD(0x019221D0, app::Object*, ValidateEndElement, app::XmlSchemaValidator* this_ptr, app::XmlSchemaInfo* schema_info)
    IL2CPP_REGISTER_METHOD(0x019221E0, void, SkipToEndElement, app::XmlSchemaValidator* this_ptr, app::XmlSchemaInfo* schema_info)
    IL2CPP_REGISTER_METHOD(0x019224A0, void, EndValidation, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x019225F0,
        void,
        GetUnspecifiedDefaultAttributes,
        app::XmlSchemaValidator* this_ptr,
        app::ArrayList* default_attributes,
        bool create_node_data
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XmlSchemaSet*, get_SchemaSet, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::XmlSchemaValidationFlags__Enum, get_ValidationFlags, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01922D70, app::XmlSchemaContentType__Enum, get_CurrentContentType, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01922DC0, void, SetDtdSchemaInfo, app::XmlSchemaValidator* this_ptr, app::IDtdInfo* dtd_schema_info)
    IL2CPP_REGISTER_METHOD(0x01922DD0, bool, get_StrictlyAssessed, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01922E20, bool, get_HasSchema, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01922E70, app::String*, GetConcatenatedValue, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01922EA0,
        app::Object*,
        InternalValidateEndElement,
        app::XmlSchemaValidator* this_ptr,
        app::XmlSchemaInfo* schema_info,
        app::Object* typed_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01923600,
        void,
        ProcessSchemaLocations,
        app::XmlSchemaValidator* this_ptr,
        app::String* xsi_schema_location,
        app::String* xsi_no_namespace_schema_location
    )
    IL2CPP_REGISTER_METHOD(
        0x01923A20,
        app::Object*,
        ValidateElementContext,
        app::XmlSchemaValidator* this_ptr,
        app::XmlQualifiedName* element_name,
        bool* invalid_element_in_context
    )
    IL2CPP_REGISTER_METHOD(0x01923F40, app::XmlSchemaElement*, GetSubstitutionGroupHead, app::XmlSchemaValidator* this_ptr, app::XmlQualifiedName* member)
    IL2CPP_REGISTER_METHOD(
        0x01924250,
        app::Object*,
        ValidateAtomicValue_1,
        app::XmlSchemaValidator* this_ptr,
        app::String* string_value,
        app::XmlSchemaSimpleType** member_type
    )
    IL2CPP_REGISTER_METHOD(
        0x019245B0,
        app::Object*,
        ValidateAtomicValue_2,
        app::XmlSchemaValidator* this_ptr,
        app::Object* parsed_value,
        app::XmlSchemaSimpleType** member_type
    )
    IL2CPP_REGISTER_METHOD(0x01924A30, app::String*, GetTypeName, app::XmlSchemaValidator* this_ptr, app::SchemaDeclBase* decl)
    IL2CPP_REGISTER_METHOD(0x01924AB0, void, SaveTextValue, app::XmlSchemaValidator* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01924B00, void, Push, app::XmlSchemaValidator* this_ptr, app::XmlQualifiedName* element_name)
    IL2CPP_REGISTER_METHOD(0x01924DF0, void, Pop, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01925000,
        app::SchemaElementDecl*,
        FastGetElementDecl,
        app::XmlSchemaValidator* this_ptr,
        app::XmlQualifiedName* element_name,
        app::Object* particle
    )
    IL2CPP_REGISTER_METHOD(
        0x01925290,
        app::SchemaElementDecl*,
        CheckXsiTypeAndNil,
        app::XmlSchemaValidator* this_ptr,
        app::SchemaElementDecl* element_decl,
        app::String* xsi_type,
        app::String* xsi_nil,
        bool* decl_found
    )
    IL2CPP_REGISTER_METHOD(0x01925B60, void, ThrowDeclNotFoundWarningOrError, app::XmlSchemaValidator* this_ptr, bool decl_found)
    IL2CPP_REGISTER_METHOD(0x01925D90, void, CheckElementProperties, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01925E90, void, ValidateStartElementIdentityConstraints, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01925F00, app::SchemaAttDef*, CheckIsXmlAttribute, app::XmlSchemaValidator* this_ptr, app::XmlQualifiedName* att_q_name)
    IL2CPP_REGISTER_METHOD(0x01926060, void, AddXmlNamespaceSchema, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019261F0, app::Object*, CheckMixedValueConstraint, app::XmlSchemaValidator* this_ptr, app::String* element_value)
    IL2CPP_REGISTER_METHOD(0x01926360, void, LoadSchema, app::XmlSchemaValidator* this_ptr, app::String* uri, app::String* url)
    IL2CPP_REGISTER_METHOD(0x01926810, void, RecompileSchemaSet, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x019268F0,
        void,
        ProcessTokenizedType,
        app::XmlSchemaValidator* this_ptr,
        app::XmlTokenizedType__Enum ttype,
        app::String* name,
        bool attr_value
    )
    IL2CPP_REGISTER_METHOD(0x01926D30, app::Object*, CheckAttributeValue, app::XmlSchemaValidator* this_ptr, app::Object* value, app::SchemaAttDef* attdef)
    IL2CPP_REGISTER_METHOD(0x01927110, app::Object*, CheckElementValue, app::XmlSchemaValidator* this_ptr, app::String* string_value)
    IL2CPP_REGISTER_METHOD(
        0x019274D0,
        void,
        CheckTokenizedTypes,
        app::XmlSchemaValidator* this_ptr,
        app::XmlSchemaDatatype* dtype,
        app::Object* typed_value,
        bool attr_value
    )
    IL2CPP_REGISTER_METHOD(0x01927690, app::Object*, FindId, app::XmlSchemaValidator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x019276B0, void, CheckForwardRefs, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019278A0, bool, get_HasIdentityConstraints, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019278C0, bool, get_ProcessIdentityConstraints, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019278D0, bool, get_ReportValidationWarnings, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019278E0, bool, get_ProcessSchemaHints, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x019278F0,
        void,
        CheckStateTransition,
        app::XmlSchemaValidator* this_ptr,
        app::ValidatorState__Enum to_state,
        app::String* method_name
    )
    IL2CPP_REGISTER_METHOD(0x01927C30, void, ClearPSVI, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01927C80, void, CheckRequiredAttributes, app::XmlSchemaValidator* this_ptr, app::SchemaElementDecl* current_element_decl)
    IL2CPP_REGISTER_METHOD(0x01927E80, app::XmlSchemaElement*, GetSchemaElement, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01927FE0, app::String*, GetDefaultAttributePrefix, app::XmlSchemaValidator* this_ptr, app::String* attribute_n_s)
    IL2CPP_REGISTER_METHOD(0x01928290, void, AddIdentityConstraints, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01928AE0, void, ElementIdentityConstraints, app::XmlSchemaValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01928F00,
        void,
        AttributeIdentityConstraints,
        app::XmlSchemaValidator* this_ptr,
        app::String* name,
        app::String* ns,
        app::Object* obj,
        app::String* sobj,
        app::XmlSchemaDatatype* datatype
    )
    IL2CPP_REGISTER_METHOD(
        0x01929320,
        void,
        EndElementIdentityConstraints,
        app::XmlSchemaValidator* this_ptr,
        app::Object* typed_value,
        app::String* string_value,
        app::XmlSchemaDatatype* datatype
    )
    IL2CPP_REGISTER_METHOD(
        0x0192A650,
        void,
        ElementValidationError,
        app::XmlQualifiedName* name,
        app::ValidationState* context,
        app::ValidationEventHandler* event_handler,
        app::Object* sender,
        app::String* source_uri,
        int32_t line_no,
        int32_t line_pos,
        app::XmlSchemaSet* schema_set
    )
    IL2CPP_REGISTER_METHOD(
        0x0192B3E0,
        void,
        CompleteValidationError,
        app::ValidationState* context,
        app::ValidationEventHandler* event_handler,
        app::Object* sender,
        app::String* source_uri,
        int32_t line_no,
        int32_t line_pos,
        app::XmlSchemaSet* schema_set
    )
    IL2CPP_REGISTER_METHOD(0x0192BCB0, app::String*, PrintExpectedElements, app::ArrayList* expected, bool get_particles)
    IL2CPP_REGISTER_METHOD(0x0192C280, app::String*, PrintNames, app::ArrayList* expected)
    IL2CPP_REGISTER_METHOD(0x0192C4E0, void, PrintNamesWithNS, app::ArrayList* expected, app::StringBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x0192CC80, void, EnumerateAny, app::StringBuilder* builder, app::String* namespaces)
    IL2CPP_REGISTER_METHOD(0x0192CFC0, app::String*, QNameString, app::String* local_name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x0192D080, app::String*, BuildElementName_1, app::XmlQualifiedName* qname)
    IL2CPP_REGISTER_METHOD(0x0192D140, app::String*, BuildElementName_2, app::String* local_name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x0192D310, void, ProcessEntity, app::XmlSchemaValidator* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0192D3F0, void, SendValidationEvent_1, app::XmlSchemaValidator* this_ptr, app::String* code)
    IL2CPP_REGISTER_METHOD(0x0192D490, void, SendValidationEvent_2, app::XmlSchemaValidator* this_ptr, app::String* code, app::String__Array* args)
    IL2CPP_REGISTER_METHOD(0x0192D680, void, SendValidationEvent_3, app::XmlSchemaValidator* this_ptr, app::String* code, app::String* arg)
    IL2CPP_REGISTER_METHOD(0x0192D870, void, SendValidationEvent_4, app::XmlSchemaValidator* this_ptr, app::String* code, app::String* arg1, app::String* arg2)
    IL2CPP_REGISTER_METHOD(
        0x0192DB20,
        void,
        SendValidationEvent_5,
        app::XmlSchemaValidator* this_ptr,
        app::String* code,
        app::String__Array* args,
        app::Exception* inner_exception,
        app::XmlSeverityType__Enum severity
    )
    IL2CPP_REGISTER_METHOD(
        0x0192DD40,
        void,
        SendValidationEvent_6,
        app::XmlSchemaValidator* this_ptr,
        app::String* code,
        app::String__Array* args,
        app::Exception* inner_exception
    )
    IL2CPP_REGISTER_METHOD(0x0192DF40, void, SendValidationEvent_7, app::XmlSchemaValidator* this_ptr, app::XmlSchemaValidationException* e)
    IL2CPP_REGISTER_METHOD(0x0192DF50, void, SendValidationEvent_8, app::XmlSchemaValidator* this_ptr, app::XmlSchemaException* e)
    IL2CPP_REGISTER_METHOD(
        0x0192E110,
        void,
        SendValidationEvent_9,
        app::XmlSchemaValidator* this_ptr,
        app::String* code,
        app::String* msg,
        app::XmlSeverityType__Enum severity
    )
    IL2CPP_REGISTER_METHOD(
        0x0192E310,
        void,
        SendValidationEvent_10,
        app::XmlSchemaValidator* this_ptr,
        app::XmlSchemaValidationException* e,
        app::XmlSeverityType__Enum severity
    )
    IL2CPP_REGISTER_METHOD(
        0x0192E5E0,
        void,
        SendValidationEvent_11,
        app::ValidationEventHandler* event_handler,
        app::Object* sender,
        app::XmlSchemaValidationException* e,
        app::XmlSeverityType__Enum severity
    )
    IL2CPP_REGISTER_METHOD(0x0192E780, void, cctor, )
} // namespace app::classes::System::Xml::Schema::XmlSchemaValidator
