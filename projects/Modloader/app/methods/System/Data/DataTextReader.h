#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataTextReader.h>
#include <Modloader/app/structs/ReadState__Enum_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlReaderSettings.h>
#include <Modloader/app/structs/XmlSpace__Enum.h>

namespace app::classes::System::Data::DataTextReader {
    IL2CPP_REGISTER_METHOD(0x01F3E890, app::XmlReader*, CreateReader, app::XmlReader* xr)
    IL2CPP_REGISTER_METHOD(0x01F3EA50, void, ctor, app::DataTextReader* this_ptr, app::XmlReader* input)
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::XmlReaderSettings*, get_Settings, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016D9400, app::XmlNodeType__Enum, get_NodeType, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717030, app::String*, get_Name, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717060, app::String*, get_LocalName, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717090, app::String*, get_NamespaceURI, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00442880, app::String*, get_Prefix, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017170C0, app::String*, get_Value, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017170F0, int32_t, get_Depth, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717120, app::String*, get_BaseURI, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717150, bool, get_IsEmptyElement, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717180, bool, get_IsDefault, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017171B0, char16_t, get_QuoteChar, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017171E0, app::XmlSpace__Enum, get_XmlSpace, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717210, app::String*, get_XmlLang, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717240, int32_t, get_AttributeCount, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717270, app::String*, GetAttribute_1, app::DataTextReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x017172A0, app::String*, GetAttribute_2, app::DataTextReader* this_ptr, app::String* local_name, app::String* namespace_u_r_i)
    IL2CPP_REGISTER_METHOD(0x017172D0, app::String*, GetAttribute_3, app::DataTextReader* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x01717300, bool, MoveToAttribute_1, app::DataTextReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01717330, void, MoveToAttribute_2, app::DataTextReader* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x01717360, bool, MoveToFirstAttribute, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717390, bool, MoveToNextAttribute, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017173C0, bool, MoveToElement, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017173F0, bool, ReadAttributeValue, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717420, bool, Read, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717450, bool, get_EOF, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016FB480, void, Close, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016FB7D0, app::ReadState__Enum_1, get_ReadState, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717480, void, Skip, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017174B0, app::XmlNameTable*, get_NameTable, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717620, app::String*, LookupNamespace, app::DataTextReader* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01F3EB00, bool, get_CanResolveEntity, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717520, void, ResolveEntity, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F3EB30, bool, get_CanReadValueChunk, app::DataTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016FBBA0, app::String*, ReadString, app::DataTextReader* this_ptr)
} // namespace app::classes::System::Data::DataTextReader
