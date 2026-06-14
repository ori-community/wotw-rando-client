#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/ConformanceLevel__Enum.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/XmlEncodedRawTextWriterIndent.h>
#include <Modloader/app/structs/XmlWriterSettings.h>

namespace app::classes::System::Xml::XmlEncodedRawTextWriterIndent {
    IL2CPP_REGISTER_METHOD(0x01DB4830, void, ctor_1, app::XmlEncodedRawTextWriterIndent* this_ptr, app::TextWriter* writer, app::XmlWriterSettings* settings)
    IL2CPP_REGISTER_METHOD(0x01DB4860, void, ctor_2, app::XmlEncodedRawTextWriterIndent* this_ptr, app::Stream* stream, app::XmlWriterSettings* settings)
    IL2CPP_REGISTER_METHOD(
        0x01DB4890,
        void,
        WriteDocType,
        app::XmlEncodedRawTextWriterIndent* this_ptr,
        app::String* name,
        app::String* pubid,
        app::String* sysid,
        app::String* subset
    )
    IL2CPP_REGISTER_METHOD(
        0x01DB4900,
        void,
        WriteStartElement,
        app::XmlEncodedRawTextWriterIndent* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(0x01DB4990, void, StartElementContent, app::XmlEncodedRawTextWriterIndent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C74F00, void, OnRootElement, app::XmlEncodedRawTextWriterIndent* this_ptr, app::ConformanceLevel__Enum current_conformance_level)
    IL2CPP_REGISTER_METHOD(
        0x01DB4A20,
        void,
        WriteEndElement,
        app::XmlEncodedRawTextWriterIndent* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(
        0x01DB4B00,
        void,
        WriteFullEndElement,
        app::XmlEncodedRawTextWriterIndent* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(
        0x01DB4BE0,
        void,
        WriteStartAttribute,
        app::XmlEncodedRawTextWriterIndent* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(0x01DB4C40, void, WriteCData, app::XmlEncodedRawTextWriterIndent* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01DB4C50, void, WriteComment, app::XmlEncodedRawTextWriterIndent* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01DB4C90, void, WriteProcessingInstruction, app::XmlEncodedRawTextWriterIndent* this_ptr, app::String* target, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01DB4CE0, void, WriteEntityRef, app::XmlEncodedRawTextWriterIndent* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01DB4DF0, void, WriteCharEntity, app::XmlEncodedRawTextWriterIndent* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x01DB4E00, void, WriteSurrogateCharEntity, app::XmlEncodedRawTextWriterIndent* this_ptr, char16_t low_char, char16_t high_char)
    IL2CPP_REGISTER_METHOD(0x01DB4E10, void, WriteWhitespace, app::XmlEncodedRawTextWriterIndent* this_ptr, app::String* ws)
    IL2CPP_REGISTER_METHOD(0x01DB4E90, void, WriteString, app::XmlEncodedRawTextWriterIndent* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01DB4F10, void, WriteChars, app::XmlEncodedRawTextWriterIndent* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01DB4FB0, void, WriteRaw_1, app::XmlEncodedRawTextWriterIndent* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01DB4FD0, void, WriteRaw_2, app::XmlEncodedRawTextWriterIndent* this_ptr, app::String* data)
    IL2CPP_REGISTER_METHOD(0x01DB5040, void, WriteBase64, app::XmlEncodedRawTextWriterIndent* this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01DB5060, void, Init, app::XmlEncodedRawTextWriterIndent* this_ptr, app::XmlWriterSettings* settings)
    IL2CPP_REGISTER_METHOD(0x01DB5240, void, WriteIndent, app::XmlEncodedRawTextWriterIndent* this_ptr)
} // namespace app::classes::System::Xml::XmlEncodedRawTextWriterIndent
