#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/XmlAutoDetectWriter.h>
#include <Modloader/app/structs/XmlOutputMethod__Enum.h>
#include <Modloader/app/structs/XmlStandalone__Enum.h>
#include <Modloader/app/structs/XmlWriterSettings.h>

namespace app::classes::System::Xml::XmlAutoDetectWriter {
    IL2CPP_REGISTER_METHOD(0x0195DDC0, void, ctor_1, app::XmlAutoDetectWriter* this_ptr, app::XmlWriterSettings* writer_settings)
    IL2CPP_REGISTER_METHOD(0x0195DF50, void, ctor_2, app::XmlAutoDetectWriter* this_ptr, app::TextWriter* text_writer, app::XmlWriterSettings* writer_settings)
    IL2CPP_REGISTER_METHOD(0x0195DF80, void, ctor_3, app::XmlAutoDetectWriter* this_ptr, app::Stream* strm, app::XmlWriterSettings* writer_settings)
    IL2CPP_REGISTER_METHOD(
        0x0195DFB0,
        void,
        WriteDocType,
        app::XmlAutoDetectWriter* this_ptr,
        app::String* name,
        app::String* pubid,
        app::String* sysid,
        app::String* subset
    )
    IL2CPP_REGISTER_METHOD(
        0x0195E030,
        void,
        WriteStartElement,
        app::XmlAutoDetectWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(
        0x0195E1A0,
        void,
        WriteStartAttribute,
        app::XmlAutoDetectWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(0x0195E220, void, WriteEndAttribute, app::XmlAutoDetectWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195E250, void, WriteCData, app::XmlAutoDetectWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x0195E2B0, void, WriteComment, app::XmlAutoDetectWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x0195E300, void, WriteProcessingInstruction, app::XmlAutoDetectWriter* this_ptr, app::String* name, app::String* text)
    IL2CPP_REGISTER_METHOD(0x0195E350, void, WriteWhitespace, app::XmlAutoDetectWriter* this_ptr, app::String* ws)
    IL2CPP_REGISTER_METHOD(0x0195E3A0, void, WriteString, app::XmlAutoDetectWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01701610, void, WriteChars, app::XmlAutoDetectWriter* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x0195E400, void, WriteRaw_1, app::XmlAutoDetectWriter* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x0195E440, void, WriteRaw_2, app::XmlAutoDetectWriter* this_ptr, app::String* data)
    IL2CPP_REGISTER_METHOD(0x0195E4A0, void, WriteEntityRef, app::XmlAutoDetectWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0195E500, void, WriteCharEntity, app::XmlAutoDetectWriter* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x0195E560, void, WriteSurrogateCharEntity, app::XmlAutoDetectWriter* this_ptr, char16_t low_char, char16_t high_char)
    IL2CPP_REGISTER_METHOD(0x0195E5D0, void, WriteBase64, app::XmlAutoDetectWriter* this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x0195E650, void, WriteBinHex, app::XmlAutoDetectWriter* this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x0195E6D0, void, Close, app::XmlAutoDetectWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195E720, void, Flush, app::XmlAutoDetectWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195E770, void, WriteValue, app::XmlAutoDetectWriter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0195E7D0, void, set_NamespaceResolver, app::XmlAutoDetectWriter* this_ptr, app::IXmlNamespaceResolver* value)
    IL2CPP_REGISTER_METHOD(0x0195E820, void, WriteXmlDeclaration_1, app::XmlAutoDetectWriter* this_ptr, app::XmlStandalone__Enum standalone)
    IL2CPP_REGISTER_METHOD(0x0195E880, void, WriteXmlDeclaration_2, app::XmlAutoDetectWriter* this_ptr, app::String* xmldecl)
    IL2CPP_REGISTER_METHOD(0x0195E8E0, void, StartElementContent, app::XmlAutoDetectWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195E910, void, WriteEndElement, app::XmlAutoDetectWriter* this_ptr, app::String* prefix, app::String* local_name, app::String* ns)
    IL2CPP_REGISTER_METHOD(
        0x0195E940,
        void,
        WriteFullEndElement,
        app::XmlAutoDetectWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(0x0195E970, void, WriteNamespaceDeclaration, app::XmlAutoDetectWriter* this_ptr, app::String* prefix, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x0195E9E0, bool, get_SupportsNamespaceDeclarationInChunks, app::XmlAutoDetectWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195EA10, void, WriteStartNamespaceDeclaration, app::XmlAutoDetectWriter* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x0195EA70, void, WriteEndNamespaceDeclaration, app::XmlAutoDetectWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195EAA0, bool, IsHtmlTag, app::String* tag_name)
    IL2CPP_REGISTER_METHOD(0x0195EB80, void, EnsureWrappedWriter, app::XmlAutoDetectWriter* this_ptr, app::XmlOutputMethod__Enum out_method)
    IL2CPP_REGISTER_METHOD(0x0195EB90, bool, TextBlockCreatesWriter, app::XmlAutoDetectWriter* this_ptr, app::String* text_block)
    IL2CPP_REGISTER_METHOD(0x0195EC40, void, CreateWrappedWriter, app::XmlAutoDetectWriter* this_ptr, app::XmlOutputMethod__Enum out_method)
} // namespace app::classes::System::Xml::XmlAutoDetectWriter
