#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CachingEventHandler.h>
#include <Modloader/app/structs/IXmlLineInfo.h>
#include <Modloader/app/structs/ReadState__Enum_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValidatingReaderNodeData.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlReaderSettings.h>
#include <Modloader/app/structs/XmlSpace__Enum.h>
#include <Modloader/app/structs/XsdCachingReader.h>

namespace app::classes::System::Xml::XsdCachingReader {
    IL2CPP_REGISTER_METHOD(
        0x01FD82A0,
        void,
        ctor,
        app::XsdCachingReader* this_ptr,
        app::XmlReader* reader,
        app::IXmlLineInfo* line_info,
        app::CachingEventHandler* handler_method
    )
    IL2CPP_REGISTER_METHOD(0x01FD8390, void, Init, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD8550, void, Reset, app::XsdCachingReader* this_ptr, app::XmlReader* reader)
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::XmlReaderSettings*, get_Settings, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD8560, app::XmlNodeType__Enum, get_NodeType, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD8580, app::String*, get_Name, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B5FE20, app::String*, get_LocalName, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E0390, app::String*, get_NamespaceURI, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD85B0, app::String*, get_Prefix, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD85D0, app::String*, get_Value, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD8610, int32_t, get_Depth, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717120, app::String*, get_BaseURI, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsEmptyElement, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsDefault, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017171B0, char16_t, get_QuoteChar, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017171E0, app::XmlSpace__Enum, get_XmlSpace, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717210, app::String*, get_XmlLang, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_AttributeCount, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD8630, app::String*, GetAttribute_1, app::XsdCachingReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01FD86E0, app::String*, GetAttribute_2, app::XsdCachingReader* this_ptr, app::String* name, app::String* namespace_u_r_i)
    IL2CPP_REGISTER_METHOD(0x01FD8830, app::String*, GetAttribute_3, app::XsdCachingReader* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x01FD8930, bool, MoveToAttribute_1, app::XsdCachingReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01FD89E0, void, MoveToAttribute_2, app::XsdCachingReader* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x01FD8AD0, bool, MoveToFirstAttribute, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD8B20, bool, MoveToNextAttribute, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD8B80, bool, MoveToElement, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD8BD0, bool, Read, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01FD8F90,
        app::ValidatingReaderNodeData*,
        RecordTextNode,
        app::XsdCachingReader* this_ptr,
        app::String* text_value,
        app::String* original_string_value,
        int32_t depth,
        int32_t line_no,
        int32_t line_pos
    )
    IL2CPP_REGISTER_METHOD(
        0x01FD8FF0,
        void,
        SwitchTextNodeAndEndElement,
        app::XsdCachingReader* this_ptr,
        app::String* text_value,
        app::String* original_string_value
    )
    IL2CPP_REGISTER_METHOD(0x01FD9180, void, RecordEndElementNode, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD9330, bool, get_EOF, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD9370, void, Close, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016FB7D0, app::ReadState__Enum_1, get_ReadState, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD93B0, void, Skip, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XmlNameTable*, get_NameTable, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717620, app::String*, LookupNamespace, app::XsdCachingReader* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01FD9500, void, ResolveEntity, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD9550, bool, ReadAttributeValue, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IXmlLineInfo_HasLineInfo, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD95A0, int32_t, IXmlLineInfo_get_LineNumber, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD95C0, int32_t, IXmlLineInfo_get_LinePosition, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD95E0, void, SetToReplayMode, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XmlReader*, GetCoreReader, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::IXmlLineInfo*, GetLineInfo, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD9610, void, ClearAttributesInfo, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD9620, app::ValidatingReaderNodeData*, AddAttribute, app::XsdCachingReader* this_ptr, int32_t att_index)
    IL2CPP_REGISTER_METHOD(0x01FD98C0, app::ValidatingReaderNodeData*, AddContent, app::XsdCachingReader* this_ptr, app::XmlNodeType__Enum node_type)
    IL2CPP_REGISTER_METHOD(0x01FD9B70, void, RecordAttributes, app::XsdCachingReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD9D70, int32_t, GetAttributeIndexWithoutPrefix, app::XsdCachingReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01FD9E20, int32_t, GetAttributeIndexWithPrefix, app::XsdCachingReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x01FD9EF0,
        app::ValidatingReaderNodeData*,
        CreateDummyTextNode,
        app::XsdCachingReader* this_ptr,
        app::String* attribute_value,
        int32_t depth
    )
} // namespace app::classes::System::Xml::XsdCachingReader
