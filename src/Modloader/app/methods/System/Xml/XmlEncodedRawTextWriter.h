#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/XmlEncodedRawTextWriter.h>
#include <Modloader/app/structs/XmlStandalone__Enum.h>
#include <Modloader/app/structs/XmlWriterSettings.h>
#include <Modloader/app/structs/char16_t.h>

namespace app::classes::System::Xml::XmlEncodedRawTextWriter {
    IL2CPP_REGISTER_METHOD(0x01DAF800, void, ctor_1, app::XmlEncodedRawTextWriter* this_ptr, app::XmlWriterSettings* settings)
    IL2CPP_REGISTER_METHOD(0x01DAF930, void, ctor_2, app::XmlEncodedRawTextWriter* this_ptr, app::TextWriter* writer, app::XmlWriterSettings* settings)
    IL2CPP_REGISTER_METHOD(0x01DAFA50, void, ctor_3, app::XmlEncodedRawTextWriter* this_ptr, app::Stream* stream, app::XmlWriterSettings* settings)
    IL2CPP_REGISTER_METHOD(0x01DAFE00, void, WriteXmlDeclaration_1, app::XmlEncodedRawTextWriter* this_ptr, app::XmlStandalone__Enum standalone)
    IL2CPP_REGISTER_METHOD(0x01DB0040, void, WriteXmlDeclaration_2, app::XmlEncodedRawTextWriter* this_ptr, app::String* xmldecl)
    IL2CPP_REGISTER_METHOD(
        0x01DB00F0,
        void,
        WriteDocType,
        app::XmlEncodedRawTextWriter* this_ptr,
        app::String* name,
        app::String* pubid,
        app::String* sysid,
        app::String* subset
    )
    IL2CPP_REGISTER_METHOD(
        0x01DB04A0,
        void,
        WriteStartElement,
        app::XmlEncodedRawTextWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(0x01DB05B0, void, StartElementContent, app::XmlEncodedRawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01DB0600,
        void,
        WriteEndElement,
        app::XmlEncodedRawTextWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(
        0x01DB0860,
        void,
        WriteFullEndElement,
        app::XmlEncodedRawTextWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(
        0x01DB0A00,
        void,
        WriteStartAttribute,
        app::XmlEncodedRawTextWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(0x01DB0BA0, void, WriteEndAttribute, app::XmlEncodedRawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01DB0C20,
        void,
        WriteNamespaceDeclaration,
        app::XmlEncodedRawTextWriter* this_ptr,
        app::String* prefix,
        app::String* namespace_name
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsNamespaceDeclarationInChunks, app::XmlEncodedRawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DB0C80, void, WriteStartNamespaceDeclaration, app::XmlEncodedRawTextWriter* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01DB0E60, void, WriteEndNamespaceDeclaration, app::XmlEncodedRawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DB0EE0, void, WriteCData, app::XmlEncodedRawTextWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01DB1270, void, WriteComment, app::XmlEncodedRawTextWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01DB1490, void, WriteProcessingInstruction, app::XmlEncodedRawTextWriter* this_ptr, app::String* name, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01DB1670, void, WriteEntityRef, app::XmlEncodedRawTextWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01DB1780, void, WriteCharEntity, app::XmlEncodedRawTextWriter* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x01DB1A30, void, WriteWhitespace, app::XmlEncodedRawTextWriter* this_ptr, app::String* ws)
    IL2CPP_REGISTER_METHOD(0x01DB1AB0, void, WriteString, app::XmlEncodedRawTextWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01DB1B30, void, WriteSurrogateCharEntity, app::XmlEncodedRawTextWriter* this_ptr, char16_t low_char, char16_t high_char)
    IL2CPP_REGISTER_METHOD(0x01DB1D60, void, WriteChars, app::XmlEncodedRawTextWriter* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01DB1E00, void, WriteRaw_1, app::XmlEncodedRawTextWriter* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01950800, void, WriteRaw_2, app::XmlEncodedRawTextWriter* this_ptr, app::String* data)
    IL2CPP_REGISTER_METHOD(0x01DB1E90, void, Close, app::XmlEncodedRawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DB2170, void, Flush, app::XmlEncodedRawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DB21E0, void, FlushBuffer, app::XmlEncodedRawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01DB2470,
        void,
        EncodeChars,
        app::XmlEncodedRawTextWriter* this_ptr,
        int32_t start_offset,
        int32_t end_offset,
        bool write_all_to_stream
    )
    IL2CPP_REGISTER_METHOD(0x01DB2600, void, FlushEncoder, app::XmlEncodedRawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DB26E0, void, WriteAttributeTextBlock, app::XmlEncodedRawTextWriter* this_ptr, char16_t* p_src, char16_t* p_src_end)
    IL2CPP_REGISTER_METHOD(0x01DB29E0, void, WriteElementTextBlock, app::XmlEncodedRawTextWriter* this_ptr, char16_t* p_src, char16_t* p_src_end)
    IL2CPP_REGISTER_METHOD(0x01DB2D50, void, RawText_1, app::XmlEncodedRawTextWriter* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01DB2D80, void, RawText_2, app::XmlEncodedRawTextWriter* this_ptr, char16_t* p_src_begin, char16_t* p_src_end)
    IL2CPP_REGISTER_METHOD(0x01DB2F80, void, WriteRawWithCharChecking, app::XmlEncodedRawTextWriter* this_ptr, char16_t* p_src_begin, char16_t* p_src_end)
    IL2CPP_REGISTER_METHOD(0x01DB32D0, void, WriteCommentOrPi, app::XmlEncodedRawTextWriter* this_ptr, app::String* text, int32_t stop_char)
    IL2CPP_REGISTER_METHOD(0x01DB3750, void, WriteCDataSection, app::XmlEncodedRawTextWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01DB3BA0, char16_t*, EncodeSurrogate, char16_t* p_src, char16_t* p_src_end, char16_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01DB3D60, char16_t*, InvalidXmlChar, app::XmlEncodedRawTextWriter* this_ptr, int32_t ch, char16_t* p_dst, bool entitize)
    IL2CPP_REGISTER_METHOD(
        0x01DB3F20,
        void,
        EncodeChar,
        app::XmlEncodedRawTextWriter* this_ptr,
        app::char16_t** p_src,
        char16_t* p_src_end,
        app::char16_t** p_dst
    )
    IL2CPP_REGISTER_METHOD(0x01DB3FB0, void, ChangeTextContentMark, app::XmlEncodedRawTextWriter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01DB40F0, void, GrowTextContentMarks, app::XmlEncodedRawTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DB41C0, char16_t*, WriteNewLine, app::XmlEncodedRawTextWriter* this_ptr, char16_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01DB4240, char16_t*, LtEntity, char16_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01DB4260, char16_t*, GtEntity, char16_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01DB4280, char16_t*, AmpEntity, char16_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01DB42A0, char16_t*, QuoteEntity, char16_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01DB42C0, char16_t*, TabEntity, char16_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01DB42E0, char16_t*, LineFeedEntity, char16_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01DB4300, char16_t*, CarriageReturnEntity, char16_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01DB4320, char16_t*, CharEntity, char16_t* p_dst, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x01DB4420, char16_t*, RawStartCData, char16_t* p_dst)
    IL2CPP_REGISTER_METHOD(0x01DB4450, char16_t*, RawEndCData, char16_t* p_dst)
    IL2CPP_REGISTER_METHOD(
        0x01DB4470,
        void,
        ValidateContentChars,
        app::XmlEncodedRawTextWriter* this_ptr,
        app::String* chars,
        app::String* property_name,
        bool allow_only_whitespace
    )
} // namespace app::classes::System::Xml::XmlEncodedRawTextWriter
