#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/QueryOutputWriter.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlRawWriter.h>
#include <Modloader/app/structs/XmlStandalone__Enum.h>
#include <Modloader/app/structs/XmlWriterSettings.h>

namespace app::classes::System::Xml::QueryOutputWriter {
    IL2CPP_REGISTER_METHOD(0x0199E650, void, ctor, app::QueryOutputWriter* this_ptr, app::XmlRawWriter* writer, app::XmlWriterSettings* settings)
    IL2CPP_REGISTER_METHOD(0x0199EB10, void, set_NamespaceResolver, app::QueryOutputWriter* this_ptr, app::IXmlNamespaceResolver* value)
    IL2CPP_REGISTER_METHOD(0x0199EB40, void, WriteXmlDeclaration_1, app::QueryOutputWriter* this_ptr, app::XmlStandalone__Enum standalone)
    IL2CPP_REGISTER_METHOD(0x0199EB70, void, WriteXmlDeclaration_2, app::QueryOutputWriter* this_ptr, app::String* xmldecl)
    IL2CPP_REGISTER_METHOD(
        0x0199EBA0,
        void,
        WriteDocType,
        app::QueryOutputWriter* this_ptr,
        app::String* name,
        app::String* pubid,
        app::String* sysid,
        app::String* subset
    )
    IL2CPP_REGISTER_METHOD(0x0199EBE0, void, WriteStartElement, app::QueryOutputWriter* this_ptr, app::String* prefix, app::String* local_name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x0199EE10, void, WriteEndElement, app::QueryOutputWriter* this_ptr, app::String* prefix, app::String* local_name, app::String* ns)
    IL2CPP_REGISTER_METHOD(
        0x0199EE80,
        void,
        WriteFullEndElement,
        app::QueryOutputWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(0x0195E8E0, void, StartElementContent, app::QueryOutputWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0199EEF0,
        void,
        WriteStartAttribute,
        app::QueryOutputWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(0x0199EF30, void, WriteEndAttribute, app::QueryOutputWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0199EF60, void, WriteNamespaceDeclaration, app::QueryOutputWriter* this_ptr, app::String* prefix, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x0195E9E0, bool, get_SupportsNamespaceDeclarationInChunks, app::QueryOutputWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0199EF90, void, WriteStartNamespaceDeclaration, app::QueryOutputWriter* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x0195EA70, void, WriteEndNamespaceDeclaration, app::QueryOutputWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0199EFC0, void, WriteCData, app::QueryOutputWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x0199EFF0, void, WriteComment, app::QueryOutputWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x0199F020, void, WriteProcessingInstruction, app::QueryOutputWriter* this_ptr, app::String* name, app::String* text)
    IL2CPP_REGISTER_METHOD(0x0199F050, void, WriteWhitespace, app::QueryOutputWriter* this_ptr, app::String* ws)
    IL2CPP_REGISTER_METHOD(0x0199F0D0, void, WriteString, app::QueryOutputWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x0199F150, void, WriteChars, app::QueryOutputWriter* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x0199F1F0, void, WriteEntityRef, app::QueryOutputWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0199F220, void, WriteCharEntity, app::QueryOutputWriter* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x0199F250, void, WriteSurrogateCharEntity, app::QueryOutputWriter* this_ptr, char16_t low_char, char16_t high_char)
    IL2CPP_REGISTER_METHOD(0x0199F280, void, WriteRaw_1, app::QueryOutputWriter* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x0199F320, void, WriteRaw_2, app::QueryOutputWriter* this_ptr, app::String* data)
    IL2CPP_REGISTER_METHOD(0x0199F3A0, void, Close, app::QueryOutputWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0199F4A0, void, Flush, app::QueryOutputWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0199F4D0, bool, StartCDataSection, app::QueryOutputWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0089F980, void, EndCDataSection, app::QueryOutputWriter* this_ptr)
} // namespace app::classes::System::Xml::QueryOutputWriter
