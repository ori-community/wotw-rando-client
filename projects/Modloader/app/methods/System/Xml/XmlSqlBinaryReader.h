#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinXmlToken__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/ReadState__Enum_1.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceScope__Enum.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlReaderSettings.h>
#include <Modloader/app/structs/XmlSpace__Enum.h>
#include <Modloader/app/structs/XmlSqlBinaryReader.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_NamespaceDecl.h>

namespace app::classes::System::Xml::XmlSqlBinaryReader {
    IL2CPP_REGISTER_METHOD(
        0x01707790,
        void,
        ctor,
        app::XmlSqlBinaryReader* this_ptr,
        app::Stream* stream,
        app::Byte__Array* data,
        int32_t len,
        app::String* base_uri,
        bool close_input,
        app::XmlReaderSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x01707E60, app::XmlReaderSettings*, get_Settings, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005065F0, app::XmlNodeType__Enum, get_NodeType, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::String*, get_LocalName, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::String*, get_NamespaceURI, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::String*, get_Prefix, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01708100, app::String*, get_Value, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017082E0, int32_t, get_Depth, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String*, get_BaseURI, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017083B0, bool, get_IsEmptyElement, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017083D0, app::XmlSpace__Enum, get_XmlSpace, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01708460, app::String*, get_XmlLang, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBC0, app::Type*, get_ValueType, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01708560, int32_t, get_AttributeCount, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017085C0, app::String*, GetAttribute_1, app::XmlSqlBinaryReader* this_ptr, app::String* name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x01708760, app::String*, GetAttribute_2, app::XmlSqlBinaryReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x017087D0, app::String*, GetAttribute_3, app::XmlSqlBinaryReader* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x017088D0, bool, MoveToAttribute_1, app::XmlSqlBinaryReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01708960, void, MoveToAttribute_2, app::XmlSqlBinaryReader* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x01708A70, bool, MoveToFirstAttribute, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01708AF0, bool, MoveToNextAttribute, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01708B90, bool, MoveToElement, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01708C80, bool, get_EOF, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01708C90, bool, ReadAttributeValue, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01708EB0, void, Close, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlNameTable*, get_NameTable, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01708F40, app::String*, LookupNamespace, app::XmlSqlBinaryReader* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01709090, void, ResolveEntity, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017090E0, app::ReadState__Enum_1, get_ReadState, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017091B0, bool, Read, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01709370,
        app::IDictionary_2_System_String_System_String_*,
        IXmlNamespaceResolver_GetNamespacesInScope,
        app::XmlSqlBinaryReader* this_ptr,
        app::XmlNamespaceScope__Enum scope
    )
    IL2CPP_REGISTER_METHOD(0x017097C0, app::String*, IXmlNamespaceResolver_LookupPrefix, app::XmlSqlBinaryReader* this_ptr, app::String* namespace_name)
    IL2CPP_REGISTER_METHOD(0x01709980, void, VerifyVersion, app::XmlSqlBinaryReader* this_ptr, int32_t required_version, app::BinXmlToken__Enum token)
    IL2CPP_REGISTER_METHOD(0x01709A30, void, AddInitNamespace, app::XmlSqlBinaryReader* this_ptr, app::String* prefix, app::String* uri)
    IL2CPP_REGISTER_METHOD(0x01709C40, void, AddName, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01709DE0, void, AddQName, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170A1A0, void, NameFlush, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170A200, void, SkipExtn, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170A2C0, int32_t, ReadQNameRef, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170A3A0, int32_t, ReadNameRef, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170A480, bool, FillAllowEOF, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170A6E0, void, Fill_, app::XmlSqlBinaryReader* this_ptr, int32_t require)
    IL2CPP_REGISTER_METHOD(0x0170A7A0, void, Fill, app::XmlSqlBinaryReader* this_ptr, int32_t require)
    IL2CPP_REGISTER_METHOD(0x0170A870, uint8_t, ReadByte, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170A8C0, uint16_t, ReadUShort, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170A950, int32_t, ParseMB32_1, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170A9C0, int32_t, ParseMB32_, app::XmlSqlBinaryReader* this_ptr, uint8_t b)
    IL2CPP_REGISTER_METHOD(0x0170ABD0, int32_t, ParseMB32_2, app::XmlSqlBinaryReader* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x0170A950, int32_t, ParseMB64, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170AD90, app::BinXmlToken__Enum, PeekToken, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170AE00, app::BinXmlToken__Enum, ReadToken, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170AE80, app::BinXmlToken__Enum, NextToken2, app::XmlSqlBinaryReader* this_ptr, app::BinXmlToken__Enum token)
    IL2CPP_REGISTER_METHOD(0x0170B0E0, app::BinXmlToken__Enum, NextToken1, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170B1B0, app::BinXmlToken__Enum, NextToken, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170B2D0, app::BinXmlToken__Enum, PeekNextToken, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170B2F0, app::BinXmlToken__Enum, RescanNextToken, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170B690, app::String*, ParseText, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170B770, int32_t, ScanText, app::XmlSqlBinaryReader* this_ptr, int32_t* start)
    IL2CPP_REGISTER_METHOD(0x0170B8A0, app::String*, GetString, app::XmlSqlBinaryReader* this_ptr, int32_t pos, int32_t cch)
    IL2CPP_REGISTER_METHOD(0x0170BA40, app::String*, GetStringAligned, app::XmlSqlBinaryReader* this_ptr, app::Byte__Array* data, int32_t offset, int32_t cch)
    IL2CPP_REGISTER_METHOD(0x0170BA70, app::String*, GetAttributeText, app::XmlSqlBinaryReader* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x0170BC60, int32_t, LocateAttribute_1, app::XmlSqlBinaryReader* this_ptr, app::String* name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x0170BD10, int32_t, LocateAttribute_2, app::XmlSqlBinaryReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0170BE60, void, PositionOnAttribute, app::XmlSqlBinaryReader* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x0170BFC0, void, GrowElements, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170C0A0, void, GrowAttributes, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170C170, void, ClearAttributes, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170C190, void, PushNamespace, app::XmlSqlBinaryReader* this_ptr, app::String* prefix, app::String* ns, bool implied)
    IL2CPP_REGISTER_METHOD(0x0170C5B0, void, PopNamespaces, app::XmlSqlBinaryReader* this_ptr, app::XmlSqlBinaryReader_NamespaceDecl* first_in_scope_chain)
    IL2CPP_REGISTER_METHOD(0x0170C6D0, void, GenerateImpliedXmlnsAttrs, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170C8C0, bool, ReadInit, app::XmlSqlBinaryReader* this_ptr, bool skip_xml_decl)
    IL2CPP_REGISTER_METHOD(0x0170CD90, void, ScanAttributes, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170D3F0, void, SimpleCheckForDuplicateAttributes, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170D5A0, void, HashCheckForDuplicateAttributes, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170D8F0, app::String*, XmlDeclValue, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170DB20, app::String*, CDATAValue, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170DD90, void, FinishCDATA, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170DEC0, void, FinishEndElement, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170E030, bool, ReadDoc, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170E8A0, void, ImplReadData, app::XmlSqlBinaryReader* this_ptr, app::BinXmlToken__Enum token_type)
    IL2CPP_REGISTER_METHOD(0x0170EA80, void, ImplReadElement, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170EE10, void, ImplReadEndElement, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170EF40, void, ImplReadDoctype, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170F280, void, ImplReadPI, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170F300, void, ImplReadComment, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170F340, void, ImplReadCDATA, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170F380, void, ImplReadNest, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170F530, void, ImplReadEndNest, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170F570, void, ImplReadXmlText, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170FCF0, void, UpdateFromTextReader_1, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170FDC0, bool, UpdateFromTextReader_2, app::XmlSqlBinaryReader* this_ptr, bool need_update)
    IL2CPP_REGISTER_METHOD(0x0170FDE0, void, CheckAllowContent, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0170FE90, void, GenerateTokenTypeMap, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01710E70, app::Type*, GetValueType, app::XmlSqlBinaryReader* this_ptr, app::BinXmlToken__Enum token)
    IL2CPP_REGISTER_METHOD(0x01710FA0, void, ReScanOverValue, app::XmlSqlBinaryReader* this_ptr, app::BinXmlToken__Enum token)
    IL2CPP_REGISTER_METHOD(
        0x01710FC0,
        app::XmlNodeType__Enum,
        ScanOverValue,
        app::XmlSqlBinaryReader* this_ptr,
        app::BinXmlToken__Enum token,
        bool attr,
        bool check_chars
    )
    IL2CPP_REGISTER_METHOD(
        0x017111F0,
        app::XmlNodeType__Enum,
        ScanOverAnyValue,
        app::XmlSqlBinaryReader* this_ptr,
        app::BinXmlToken__Enum token,
        bool attr,
        bool check_chars
    )
    IL2CPP_REGISTER_METHOD(0x01711790, app::XmlNodeType__Enum, CheckText, app::XmlSqlBinaryReader* this_ptr, bool attr)
    IL2CPP_REGISTER_METHOD(0x01711A30, app::XmlNodeType__Enum, CheckTextIsWS, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01711AE0, void, CheckValueTokenBounds, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01711B90, int32_t, GetXsdKatmaiTokenLength, app::XmlSqlBinaryReader* this_ptr, app::BinXmlToken__Enum token)
    IL2CPP_REGISTER_METHOD(0x01711D20, int32_t, XsdKatmaiTimeScaleToValueLength, app::XmlSqlBinaryReader* this_ptr, uint8_t scale)
    IL2CPP_REGISTER_METHOD(0x01711E30, int64_t, ValueAsLong, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01712130, uint64_t, ValueAsULong, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017121F0, app::Decimal, ValueAsDecimal, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017124A0, double, ValueAsDouble, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017126B0, app::String*, ValueAsDateTimeString, app::XmlSqlBinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01712D40, app::String*, ValueAsString, app::XmlSqlBinaryReader* this_ptr, app::BinXmlToken__Enum token)
    IL2CPP_REGISTER_METHOD(0x017135A0, int16_t, GetInt16, app::XmlSqlBinaryReader* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x017135A0, uint16_t, GetUInt16, app::XmlSqlBinaryReader* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x01713610, int32_t, GetInt32, app::XmlSqlBinaryReader* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x01713610, uint32_t, GetUInt32, app::XmlSqlBinaryReader* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x017136D0, int64_t, GetInt64, app::XmlSqlBinaryReader* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x017136D0, uint64_t, GetUInt64, app::XmlSqlBinaryReader* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x01713880, float, GetSingle, app::XmlSqlBinaryReader* this_ptr, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x01713940, double, GetDouble, app::XmlSqlBinaryReader* this_ptr, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x01713B70, app::Exception*, ThrowUnexpectedToken, app::XmlSqlBinaryReader* this_ptr, app::BinXmlToken__Enum token)
    IL2CPP_REGISTER_METHOD(0x01713C00, app::Exception*, ThrowXmlException_1, app::XmlSqlBinaryReader* this_ptr, app::String* res)
    IL2CPP_REGISTER_METHOD(
        0x01713D60,
        app::Exception*,
        ThrowXmlException_2,
        app::XmlSqlBinaryReader* this_ptr,
        app::String* res,
        app::String* arg1,
        app::String* arg2
    )
    IL2CPP_REGISTER_METHOD(0x01713F80, app::Exception*, ThrowNotSupported, app::XmlSqlBinaryReader* this_ptr, app::String* res)
    IL2CPP_REGISTER_METHOD(0x017140E0, void, cctor, )
} // namespace app::classes::System::Xml::XmlSqlBinaryReader
