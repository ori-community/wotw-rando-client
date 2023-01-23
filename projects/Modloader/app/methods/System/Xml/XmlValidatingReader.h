#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlValidatingReader.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSpace__Enum.h>
#include <Modloader/app/structs/ReadState__Enum_1.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/XmlNamespaceScope__Enum.h>
#include <Modloader/app/structs/IDtdInfo.h>

namespace app::classes::System::Xml::XmlValidatingReader {
    IL2CPP_REGISTER_METHOD(0x016D9400, app::XmlNodeType__Enum, get_NodeType, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717030, app::String*, get_Name, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717060, app::String*, get_LocalName, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717090, app::String*, get_NamespaceURI, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00442880, app::String*, get_Prefix, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017170C0, app::String*, get_Value, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017170F0, int32_t, get_Depth, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717120, app::String*, get_BaseURI, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717150, bool, get_IsEmptyElement, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717180, bool, get_IsDefault, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017171B0, uint16_t, get_QuoteChar, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017171E0, app::XmlSpace__Enum, get_XmlSpace, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717210, app::String*, get_XmlLang, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717240, int32_t, get_AttributeCount, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717270, app::String*, GetAttribute_1, (app::XmlValidatingReader * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x017172A0, app::String*, GetAttribute_2, (app::XmlValidatingReader * this_ptr, app::String* local_name, app::String* namespace_u_r_i))
    IL2CPP_REGISTER_METHOD(0x017172D0, app::String*, GetAttribute_3, (app::XmlValidatingReader * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x01717300, bool, MoveToAttribute_1, (app::XmlValidatingReader * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01717330, void, MoveToAttribute_2, (app::XmlValidatingReader * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x01717360, bool, MoveToFirstAttribute, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717390, bool, MoveToNextAttribute, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017173C0, bool, MoveToElement, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017173F0, bool, ReadAttributeValue, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717420, bool, Read, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717450, bool, get_EOF, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FB480, void, Close, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FB7D0, app::ReadState__Enum_1, get_ReadState, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017174B0, app::XmlNameTable*, get_NameTable, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017174E0, app::String*, LookupNamespace, (app::XmlValidatingReader * this_ptr, app::String* prefix))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanResolveEntity, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717520, void, ResolveEntity, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC90E0, app::String*, ReadString, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, HasLineInfo, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC9110, int32_t, get_LineNumber, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC9200, int32_t, get_LinePosition, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC92F0, app::IDictionary_2_System_String_System_String_*, IXmlNamespaceResolver_GetNamespacesInScope, (app::XmlValidatingReader * this_ptr, app::XmlNamespaceScope__Enum scope))
    IL2CPP_REGISTER_METHOD(0x01717620, app::String*, IXmlNamespaceResolver_LookupNamespace, (app::XmlValidatingReader * this_ptr, app::String* prefix))
    IL2CPP_REGISTER_METHOD(0x01FC9310, app::String*, IXmlNamespaceResolver_LookupPrefix, (app::XmlValidatingReader * this_ptr, app::String* namespace_name))
    IL2CPP_REGISTER_METHOD(0x01FC9330, bool, get_Namespaces, (app::XmlValidatingReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717A70, app::IDtdInfo*, get_DtdInfo, (app::XmlValidatingReader * this_ptr))
} // namespace app::classes::System::Xml::XmlValidatingReader
