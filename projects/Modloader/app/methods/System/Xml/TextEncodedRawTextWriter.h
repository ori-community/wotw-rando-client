#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TextEncodedRawTextWriter.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/XmlWriterSettings.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/XmlStandalone__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Char__Array.h>

namespace app::classes::System::Xml::TextEncodedRawTextWriter {
    IL2CPP_REGISTER_METHOD(0x019507C0, void, ctor_1, (app::TextEncodedRawTextWriter * this_ptr, app::TextWriter* writer, app::XmlWriterSettings* settings))
    IL2CPP_REGISTER_METHOD(0x019507D0, void, ctor_2, (app::TextEncodedRawTextWriter * this_ptr, app::Stream* stream, app::XmlWriterSettings* settings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration_1, (app::TextEncodedRawTextWriter * this_ptr, app::XmlStandalone__Enum standalone))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration_2, (app::TextEncodedRawTextWriter * this_ptr, app::String* xmldecl))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteDocType, (app::TextEncodedRawTextWriter * this_ptr, app::String* name, app::String* pubid, app::String* sysid, app::String* subset))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteStartElement, (app::TextEncodedRawTextWriter * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteEndElement, (app::TextEncodedRawTextWriter * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteFullEndElement, (app::TextEncodedRawTextWriter * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartElementContent, (app::TextEncodedRawTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019507E0, void, WriteStartAttribute, (app::TextEncodedRawTextWriter * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x019507F0, void, WriteEndAttribute, (app::TextEncodedRawTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteNamespaceDeclaration, (app::TextEncodedRawTextWriter * this_ptr, app::String* prefix, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsNamespaceDeclarationInChunks, (app::TextEncodedRawTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01950800, void, WriteCData, (app::TextEncodedRawTextWriter * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteComment, (app::TextEncodedRawTextWriter * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteProcessingInstruction, (app::TextEncodedRawTextWriter * this_ptr, app::String* name, app::String* text))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteEntityRef, (app::TextEncodedRawTextWriter * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteCharEntity, (app::TextEncodedRawTextWriter * this_ptr, uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteSurrogateCharEntity, (app::TextEncodedRawTextWriter * this_ptr, uint16_t low_char, uint16_t high_char))
    IL2CPP_REGISTER_METHOD(0x01950870, void, WriteWhitespace, (app::TextEncodedRawTextWriter * this_ptr, app::String* ws))
    IL2CPP_REGISTER_METHOD(0x01950870, void, WriteString, (app::TextEncodedRawTextWriter * this_ptr, app::String* text_block))
    IL2CPP_REGISTER_METHOD(0x01950880, void, WriteChars, (app::TextEncodedRawTextWriter * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01950880, void, WriteRaw_1, (app::TextEncodedRawTextWriter * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01950870, void, WriteRaw_2, (app::TextEncodedRawTextWriter * this_ptr, app::String* data))
} // namespace app::classes::System::Xml::TextEncodedRawTextWriter
