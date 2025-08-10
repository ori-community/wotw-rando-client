#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityHandling__Enum.h>
#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/IDtdInfo.h>
#include <Modloader/app/structs/ReadState__Enum_1.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextReader.h>
#include <Modloader/app/structs/WhitespaceHandling__Enum.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlNamespaceScope__Enum.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSpace__Enum.h>
#include <Modloader/app/structs/XmlTextReader.h>
#include <Modloader/app/structs/XmlTextReaderImpl.h>

namespace app::classes::System::Xml::XmlTextReader {
    IL2CPP_REGISTER_METHOD(0x017166E0, void, ctor_1, app::XmlTextReader* this_ptr, app::Stream* input)
    IL2CPP_REGISTER_METHOD(0x017169B0, void, ctor_2, app::XmlTextReader* this_ptr, app::String* url, app::Stream* input, app::XmlNameTable* nt)
    IL2CPP_REGISTER_METHOD(0x01716B60, void, ctor_3, app::XmlTextReader* this_ptr, app::TextReader* input)
    IL2CPP_REGISTER_METHOD(0x01716E30, void, ctor_4, app::XmlTextReader* this_ptr, app::TextReader* input, app::XmlNameTable* nt)
    IL2CPP_REGISTER_METHOD(0x016D9400, app::XmlNodeType__Enum, get_NodeType, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717030, app::String*, get_Name, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717060, app::String*, get_LocalName, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717090, app::String*, get_NamespaceURI, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00442880, app::String*, get_Prefix, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017170C0, app::String*, get_Value, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017170F0, int32_t, get_Depth, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717120, app::String*, get_BaseURI, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717150, bool, get_IsEmptyElement, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717180, bool, get_IsDefault, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017171B0, char16_t, get_QuoteChar, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017171E0, app::XmlSpace__Enum, get_XmlSpace, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717210, app::String*, get_XmlLang, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717240, int32_t, get_AttributeCount, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717270, app::String*, GetAttribute_1, app::XmlTextReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x017172A0, app::String*, GetAttribute_2, app::XmlTextReader* this_ptr, app::String* local_name, app::String* namespace_u_r_i)
    IL2CPP_REGISTER_METHOD(0x017172D0, app::String*, GetAttribute_3, app::XmlTextReader* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x01717300, bool, MoveToAttribute_1, app::XmlTextReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01717330, void, MoveToAttribute_2, app::XmlTextReader* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x01717360, bool, MoveToFirstAttribute, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717390, bool, MoveToNextAttribute, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017173C0, bool, MoveToElement, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017173F0, bool, ReadAttributeValue, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717420, bool, Read, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717450, bool, get_EOF, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016FB480, void, Close, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016FB7D0, app::ReadState__Enum_1, get_ReadState, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717480, void, Skip, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017174B0, app::XmlNameTable*, get_NameTable, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017174E0, app::String*, LookupNamespace, app::XmlTextReader* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanResolveEntity, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717520, void, ResolveEntity, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanReadValueChunk, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717550, app::String*, ReadString, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, HasLineInfo, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717580, int32_t, get_LineNumber, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017175B0, int32_t, get_LinePosition, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x017175E0,
        app::IDictionary_2_System_String_System_String_*,
        IXmlNamespaceResolver_GetNamespacesInScope,
        app::XmlTextReader* this_ptr,
        app::XmlNamespaceScope__Enum scope
    )
    IL2CPP_REGISTER_METHOD(0x01717620, app::String*, IXmlNamespaceResolver_LookupNamespace, app::XmlTextReader* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01717650, app::String*, IXmlNamespaceResolver_LookupPrefix, app::XmlTextReader* this_ptr, app::String* namespace_name)
    IL2CPP_REGISTER_METHOD(0x01717690, bool, get_Namespaces, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017176B0, bool, get_Normalization, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017176D0, void, set_Normalization, app::XmlTextReader* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x017177E0, void, set_WhitespaceHandling, app::XmlTextReader* this_ptr, app::WhitespaceHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x01717910, void, set_EntityHandling, app::XmlTextReader* this_ptr, app::EntityHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x01717A00, void, set_XmlResolver, app::XmlTextReader* this_ptr, app::XmlResolver* value)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XmlTextReaderImpl*, get_Impl, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717A20, app::XmlNamespaceManager*, get_NamespaceManager, app::XmlTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717A50, void, set_XmlValidatingReaderCompatibilityMode, app::XmlTextReader* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01717A70, app::IDtdInfo*, get_DtdInfo, app::XmlTextReader* this_ptr)
} // namespace app::classes::System::Xml::XmlTextReader
