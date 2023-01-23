#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlValidatingReaderImpl.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XmlReaderSettings.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSpace__Enum.h>
#include <Modloader/app/structs/ReadState__Enum_1.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/XmlNamespaceScope__Enum.h>
#include <Modloader/app/structs/ValidationType__Enum.h>
#include <Modloader/app/structs/XmlSchemaCollection.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/BaseValidator.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/IDtdInfo.h>
#include <Modloader/app/structs/IDtdDefaultAttributeInfo.h>
#include <Modloader/app/structs/XmlTextReaderImpl.h>

namespace app::classes::System::Xml::XmlValidatingReaderImpl {
    IL2CPP_REGISTER_METHOD(0x01FC9360, void, ctor, (app::XmlValidatingReaderImpl * this_ptr, app::XmlReader* reader, app::ValidationEventHandler* settings_event_handler, bool process_identity_constraints))
    IL2CPP_REGISTER_METHODINFO(0x04748F68, XmlValidatingReaderImpl__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FC9920, app::XmlReaderSettings*, get_Settings, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016D9400, app::XmlNodeType__Enum, get_NodeType, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717030, app::String*, get_Name, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717060, app::String*, get_LocalName, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717090, app::String*, get_NamespaceURI, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00442880, app::String*, get_Prefix, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017170C0, app::String*, get_Value, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017170F0, int32_t, get_Depth, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717120, app::String*, get_BaseURI, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717150, bool, get_IsEmptyElement, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717180, bool, get_IsDefault, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017171B0, uint16_t, get_QuoteChar, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017171E0, app::XmlSpace__Enum, get_XmlSpace, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717210, app::String*, get_XmlLang, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC9B60, app::ReadState__Enum_1, get_ReadState, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717450, bool, get_EOF, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017174B0, app::XmlNameTable*, get_NameTable, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717240, int32_t, get_AttributeCount, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717270, app::String*, GetAttribute_1, (app::XmlValidatingReaderImpl * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x017172A0, app::String*, GetAttribute_2, (app::XmlValidatingReaderImpl * this_ptr, app::String* local_name, app::String* namespace_u_r_i))
    IL2CPP_REGISTER_METHOD(0x017172D0, app::String*, GetAttribute_3, (app::XmlValidatingReaderImpl * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x01FC9BA0, bool, MoveToAttribute_1, (app::XmlValidatingReaderImpl * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01FC9BF0, void, MoveToAttribute_2, (app::XmlValidatingReaderImpl * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x01FC9C30, bool, MoveToFirstAttribute, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC9C80, bool, MoveToNextAttribute, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC9CD0, bool, MoveToElement, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC9D20, bool, Read, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC9EE0, void, Close, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC9F20, app::String*, LookupNamespace, (app::XmlValidatingReaderImpl * this_ptr, app::String* prefix))
    IL2CPP_REGISTER_METHOD(0x01FC9F50, bool, ReadAttributeValue, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanResolveEntity, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC9FC0, void, ResolveEntity, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FCA000, void, MoveOffEntityReference, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04772FB0, XmlValidatingReaderImpl_MoveOffEntityReference__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FCA110, app::String*, ReadString, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, HasLineInfo, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FCA130, int32_t, get_LineNumber, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FCA210, int32_t, get_LinePosition, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FCA2F0, app::IDictionary_2_System_String_System_String_*, IXmlNamespaceResolver_GetNamespacesInScope, (app::XmlValidatingReaderImpl * this_ptr, app::XmlNamespaceScope__Enum scope))
    IL2CPP_REGISTER_METHOD(0x0171CA40, app::String*, IXmlNamespaceResolver_LookupNamespace, (app::XmlValidatingReaderImpl * this_ptr, app::String* prefix))
    IL2CPP_REGISTER_METHOD(0x01FCA300, app::String*, IXmlNamespaceResolver_LookupPrefix, (app::XmlValidatingReaderImpl * this_ptr, app::String* namespace_name))
    IL2CPP_REGISTER_METHOD(0x01FCA310, app::IDictionary_2_System_String_System_String_*, GetNamespacesInScope, (app::XmlValidatingReaderImpl * this_ptr, app::XmlNamespaceScope__Enum scope))
    IL2CPP_REGISTER_METHOD(0x01FCA3B0, app::String*, LookupPrefix, (app::XmlValidatingReaderImpl * this_ptr, app::String* namespace_name))
    IL2CPP_REGISTER_METHOD(0x002FB970, app::ValidationType__Enum, get_ValidationType, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::XmlSchemaCollection*, get_Schemas, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FCA460, bool, get_Namespaces, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FCA480, void, ParseDtdFromParserContext, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FCA6B0, void, ValidateDtd, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FCA830, void, ResolveEntityInternally, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FCA8D0, void, SetupValidation, (app::XmlValidatingReaderImpl * this_ptr, app::ValidationType__Enum val_type))
    IL2CPP_REGISTER_METHOD(0x01FCAB50, app::XmlResolver*, GetResolver, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FCAD40, void, ProcessCoreReaderEvent, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::BaseValidator*, get_Validator, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Validator, (app::XmlValidatingReaderImpl * this_ptr, app::BaseValidator* value))
    IL2CPP_REGISTER_METHOD(0x01FCAEC0, app::XmlNamespaceManager*, get_NamespaceManager, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FCAEF0, bool, get_StandAlone, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FCAF10, void, set_SchemaTypeObject, (app::XmlValidatingReaderImpl * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01FCAF50, app::Object*, get_TypedValueObject, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FCAF90, void, set_TypedValueObject, (app::XmlValidatingReaderImpl * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01FCAFD0, bool, AddDefaultAttribute, (app::XmlValidatingReaderImpl * this_ptr, app::SchemaAttDef* attdef))
    IL2CPP_REGISTER_METHOD(0x01FCAFF0, app::IDtdInfo*, get_DtdInfo, (app::XmlValidatingReaderImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FCB020, void, ValidateDefaultAttributeOnUse, (app::XmlValidatingReaderImpl * this_ptr, app::IDtdDefaultAttributeInfo* default_attribute, app::XmlTextReaderImpl* core_reader))
    IL2CPP_REGISTER_METHODINFO(0x0474F3D8, XmlValidatingReaderImpl_ValidateDefaultAttributeOnUse__MethodInfo)
} // namespace app::classes::System::Xml::XmlValidatingReaderImpl
