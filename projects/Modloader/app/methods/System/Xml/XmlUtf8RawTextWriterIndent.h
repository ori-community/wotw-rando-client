#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlUtf8RawTextWriterIndent.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/XmlWriterSettings.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ConformanceLevel__Enum.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::System::Xml::XmlUtf8RawTextWriterIndent {
    IL2CPP_REGISTER_METHOD(0x01FC8790, void, ctor, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::Stream* stream, app::XmlWriterSettings* settings))
    IL2CPP_REGISTER_METHOD(0x01FC87C0, void, WriteDocType, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::String* name, app::String* pubid, app::String* sysid, app::String* subset))
    IL2CPP_REGISTER_METHOD(0x01FC8830, void, WriteStartElement, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01FC88C0, void, StartElementContent, (app::XmlUtf8RawTextWriterIndent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC8940, void, OnRootElement, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::ConformanceLevel__Enum current_conformance_level))
    IL2CPP_REGISTER_METHOD(0x01FC8950, void, WriteEndElement, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01FC8A30, void, WriteFullEndElement, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01FC8B10, void, WriteStartAttribute, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01FC8B70, void, WriteCData, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01FC8B80, void, WriteComment, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01FC8BC0, void, WriteProcessingInstruction, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::String* target, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01FC8C10, void, WriteEntityRef, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01FC8CE0, void, WriteCharEntity, (app::XmlUtf8RawTextWriterIndent * this_ptr, uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x01FC8CF0, void, WriteSurrogateCharEntity, (app::XmlUtf8RawTextWriterIndent * this_ptr, uint16_t low_char, uint16_t high_char))
    IL2CPP_REGISTER_METHOD(0x01FC8D00, void, WriteWhitespace, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::String* ws))
    IL2CPP_REGISTER_METHOD(0x01FC8D00, void, WriteString, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01FC8D50, void, WriteChars, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01FC8DB0, void, WriteRaw_1, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01FC8E10, void, WriteRaw_2, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::String* data))
    IL2CPP_REGISTER_METHOD(0x01FC8E60, void, WriteBase64, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01FC8E80, void, Init, (app::XmlUtf8RawTextWriterIndent * this_ptr, app::XmlWriterSettings* settings))
    IL2CPP_REGISTER_METHOD(0x01FC9050, void, WriteIndent, (app::XmlUtf8RawTextWriterIndent * this_ptr))
} // namespace app::classes::System::Xml::XmlUtf8RawTextWriterIndent
