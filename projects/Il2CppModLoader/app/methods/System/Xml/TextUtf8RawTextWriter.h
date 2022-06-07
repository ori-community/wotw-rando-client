#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::TextUtf8RawTextWriter {
    IL2CPP_REGISTER_METHOD(0x019508A0, void, ctor, (app::TextUtf8RawTextWriter * this_ptr, app::Stream * stream, app::XmlWriterSettings * settings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration_1, (app::TextUtf8RawTextWriter * this_ptr, app::XmlStandalone__Enum standalone))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration_2, (app::TextUtf8RawTextWriter * this_ptr, app::String * xmldecl))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteDocType, (app::TextUtf8RawTextWriter * this_ptr, app::String * name, app::String * pubid, app::String * sysid, app::String * subset))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteStartElement, (app::TextUtf8RawTextWriter * this_ptr, app::String * prefix, app::String * local_name, app::String * ns))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteEndElement, (app::TextUtf8RawTextWriter * this_ptr, app::String * prefix, app::String * local_name, app::String * ns))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteFullEndElement, (app::TextUtf8RawTextWriter * this_ptr, app::String * prefix, app::String * local_name, app::String * ns))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartElementContent, (app::TextUtf8RawTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019507E0, void, WriteStartAttribute, (app::TextUtf8RawTextWriter * this_ptr, app::String * prefix, app::String * local_name, app::String * ns))
    IL2CPP_REGISTER_METHOD(0x019507F0, void, WriteEndAttribute, (app::TextUtf8RawTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteNamespaceDeclaration, (app::TextUtf8RawTextWriter * this_ptr, app::String * prefix, app::String * ns))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsNamespaceDeclarationInChunks, (app::TextUtf8RawTextWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019508B0, void, WriteCData, (app::TextUtf8RawTextWriter * this_ptr, app::String * text))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteComment, (app::TextUtf8RawTextWriter * this_ptr, app::String * text))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteProcessingInstruction, (app::TextUtf8RawTextWriter * this_ptr, app::String * name, app::String * text))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteEntityRef, (app::TextUtf8RawTextWriter * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteCharEntity, (app::TextUtf8RawTextWriter * this_ptr, uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteSurrogateCharEntity, (app::TextUtf8RawTextWriter * this_ptr, uint16_t low_char, uint16_t high_char))
    IL2CPP_REGISTER_METHOD(0x019508F0, void, WriteWhitespace, (app::TextUtf8RawTextWriter * this_ptr, app::String * ws))
    IL2CPP_REGISTER_METHOD(0x019508F0, void, WriteString, (app::TextUtf8RawTextWriter * this_ptr, app::String * text_block))
    IL2CPP_REGISTER_METHOD(0x01950940, void, WriteChars, (app::TextUtf8RawTextWriter * this_ptr, app::Char__Array * buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01950940, void, WriteRaw_1, (app::TextUtf8RawTextWriter * this_ptr, app::Char__Array * buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x019508F0, void, WriteRaw_2, (app::TextUtf8RawTextWriter * this_ptr, app::String * data))
}
