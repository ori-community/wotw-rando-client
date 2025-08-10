#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlStandalone__Enum.h>
#include <Modloader/app/structs/XmlUtf8RawTextWriter.h>
#include <Modloader/app/structs/XmlWriterSettings.h>
#include <Modloader/app/structs/char16_t.h>
#include <Modloader/app/structs/uint8_t.h>

namespace app::classes::System::Xml::XmlUtf8RawTextWriter {
    IL2CPP_REGISTER_METHOD(0x01FC4740, void, ctor_1, app::XmlUtf8RawTextWriter* this_ptr, app::XmlWriterSettings* settings)
    IL2CPP_REGISTER_METHOD(0x01FC4860, void, ctor_2, app::XmlUtf8RawTextWriter* this_ptr, app::Stream* stream, app::XmlWriterSettings* settings)
    IL2CPP_REGISTER_METHOD(0x01FC4AE0, void, WriteXmlDeclaration_1, app::XmlUtf8RawTextWriter* this_ptr, app::XmlStandalone__Enum standalone)
    IL2CPP_REGISTER_METHOD(0x01FC4D00, void, WriteXmlDeclaration_2, app::XmlUtf8RawTextWriter* this_ptr, app::String* xmldecl)
    IL2CPP_REGISTER_METHOD(
        0x01FC4DB0,
        void,
        WriteDocType,
        app::XmlUtf8RawTextWriter* this_ptr,
        app::String* name,
        app::String* pubid,
        app::String* sysid,
        app::String* subset
    )
    IL2CPP_REGISTER_METHOD(
        0x01FC5120,
        void,
        WriteStartElement,
        app::XmlUtf8RawTextWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(0x01FC5200, void, StartElementContent, app::XmlUtf8RawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01FC5250,
        void,
        WriteEndElement,
        app::XmlUtf8RawTextWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(
        0x01FC5460,
        void,
        WriteFullEndElement,
        app::XmlUtf8RawTextWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(
        0x01FC55B0,
        void,
        WriteStartAttribute,
        app::XmlUtf8RawTextWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(0x01FC5700, void, WriteEndAttribute, app::XmlUtf8RawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DB0C20, void, WriteNamespaceDeclaration, app::XmlUtf8RawTextWriter* this_ptr, app::String* prefix, app::String* namespace_name)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsNamespaceDeclarationInChunks, app::XmlUtf8RawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FC5750, void, WriteStartNamespaceDeclaration, app::XmlUtf8RawTextWriter* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01FC58E0, void, WriteEndNamespaceDeclaration, app::XmlUtf8RawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FC5930, void, WriteCData, app::XmlUtf8RawTextWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01FC5C50, void, WriteComment, app::XmlUtf8RawTextWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01FC5E20, void, WriteProcessingInstruction, app::XmlUtf8RawTextWriter* this_ptr, app::String* name, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01FC5FB0, void, WriteEntityRef, app::XmlUtf8RawTextWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01FC6080, void, WriteCharEntity, app::XmlUtf8RawTextWriter* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x01FC62F0, void, WriteWhitespace, app::XmlUtf8RawTextWriter* this_ptr, app::String* ws)
    IL2CPP_REGISTER_METHOD(0x01FC62F0, void, WriteString, app::XmlUtf8RawTextWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01FC6330, void, WriteSurrogateCharEntity, app::XmlUtf8RawTextWriter* this_ptr, char16_t low_char, char16_t high_char)
    IL2CPP_REGISTER_METHOD(0x0199C5A0, void, WriteChars, app::XmlUtf8RawTextWriter* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01FC6520, void, WriteRaw_1, app::XmlUtf8RawTextWriter* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x019508B0, void, WriteRaw_2, app::XmlUtf8RawTextWriter* this_ptr, app::String* data)
    IL2CPP_REGISTER_METHOD(0x01FC6580, void, Close, app::XmlUtf8RawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FC6710, void, Flush, app::XmlUtf8RawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FC6750, void, FlushBuffer, app::XmlUtf8RawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FlushEncoder, app::XmlUtf8RawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FC6AA0, void, WriteAttributeTextBlock, app::XmlUtf8RawTextWriter* this_ptr, char16_t* p_src, char16_t* p_src_end)
    IL2CPP_REGISTER_METHOD(0x01FC6D60, void, WriteElementTextBlock, app::XmlUtf8RawTextWriter* this_ptr, char16_t* p_src, char16_t* p_src_end)
    IL2CPP_REGISTER_METHOD(0x01FC7090, void, RawText_1, app::XmlUtf8RawTextWriter* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01FC70C0, void, RawText_2, app::XmlUtf8RawTextWriter* this_ptr, char16_t* p_src_begin, char16_t* p_src_end)
    IL2CPP_REGISTER_METHOD(0x01FC7230, void, WriteRawWithCharChecking, app::XmlUtf8RawTextWriter* this_ptr, char16_t* p_src_begin, char16_t* p_src_end)
    IL2CPP_REGISTER_METHOD(0x01FC74E0, void, WriteCommentOrPi, app::XmlUtf8RawTextWriter* this_ptr, app::String* text, int32_t stop_char)
    IL2CPP_REGISTER_METHOD(0x01FC7880, void, WriteCDataSection, app::XmlUtf8RawTextWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01FC7BF0, bool, IsSurrogateByte, uint8_t b)
    IL2CPP_REGISTER_METHOD(0x01FC7C00, uint8_t*, EncodeSurrogate, char16_t* p_src, char16_t* p_src_end, uint8_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01FC7E00, uint8_t*, InvalidXmlChar, app::XmlUtf8RawTextWriter* this_ptr, int32_t ch, uint8_t* p_dst, bool entitize)
    IL2CPP_REGISTER_METHOD(0x01FC7FF0, void, EncodeChar, app::XmlUtf8RawTextWriter* this_ptr, app::char16_t** p_src, char16_t* p_src_end, app::uint8_t** p_dst)
    IL2CPP_REGISTER_METHOD(0x01FC80C0, uint8_t*, EncodeMultibyteUTF8, int32_t ch, uint8_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01FC8110, void, CharToUTF8, app::char16_t** p_src, char16_t* p_src_end, app::uint8_t** p_dst)
    IL2CPP_REGISTER_METHOD(0x01FC81C0, uint8_t*, WriteNewLine, app::XmlUtf8RawTextWriter* this_ptr, uint8_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01FC8230, uint8_t*, LtEntity, uint8_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01FC8240, uint8_t*, GtEntity, uint8_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01FC8250, uint8_t*, AmpEntity, uint8_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01FC8260, uint8_t*, QuoteEntity, uint8_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01FC8280, uint8_t*, TabEntity, uint8_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01FC8290, uint8_t*, LineFeedEntity, uint8_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01FC82A0, uint8_t*, CarriageReturnEntity, uint8_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01FC82B0, uint8_t*, CharEntity, uint8_t* p_dst, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x01FC83A0, uint8_t*, RawStartCData, uint8_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01FC83C0, uint8_t*, RawEndCData, uint8_t* p_dst)
    IL2CPP_REGISTER_METHOD(
        0x01FC83D0,
        void,
        ValidateContentChars,
        app::XmlUtf8RawTextWriter* this_ptr,
        app::String* chars,
        app::String* property_name,
        bool allow_only_whitespace
    )
} // namespace app::classes::System::Xml::XmlUtf8RawTextWriter
