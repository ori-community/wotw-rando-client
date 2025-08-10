#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/DataTextWriter.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WriteState__Enum.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Data::DataTextWriter {
    IL2CPP_REGISTER_METHOD(0x01F3EB60, app::XmlWriter*, CreateWriter, app::XmlWriter* xw)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor, app::DataTextWriter* this_ptr, app::XmlWriter* w)
    IL2CPP_REGISTER_METHOD(0x01F3ECA0, app::Stream*, get_BaseStream, app::DataTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0182D9B0, void, WriteStartDocument_1, app::DataTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F3ED80, void, WriteStartDocument_2, app::DataTextWriter* this_ptr, bool standalone)
    IL2CPP_REGISTER_METHOD(0x01F3EDB0, void, WriteEndDocument, app::DataTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F3EDE0,
        void,
        WriteDocType,
        app::DataTextWriter* this_ptr,
        app::String* name,
        app::String* pubid,
        app::String* sysid,
        app::String* subset
    )
    IL2CPP_REGISTER_METHOD(0x01F3EE10, void, WriteStartElement, app::DataTextWriter* this_ptr, app::String* prefix, app::String* local_name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x01F3EE40, void, WriteEndElement, app::DataTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F3EE70, void, WriteFullEndElement, app::DataTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F3EEA0, void, WriteStartAttribute, app::DataTextWriter* this_ptr, app::String* prefix, app::String* local_name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x01F3EED0, void, WriteEndAttribute, app::DataTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F3EF00, void, WriteCData, app::DataTextWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01F3EF30, void, WriteComment, app::DataTextWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01F3EF60, void, WriteProcessingInstruction, app::DataTextWriter* this_ptr, app::String* name, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01F3EF90, void, WriteEntityRef, app::DataTextWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01F3EFC0, void, WriteCharEntity, app::DataTextWriter* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x01F3EFF0, void, WriteWhitespace, app::DataTextWriter* this_ptr, app::String* ws)
    IL2CPP_REGISTER_METHOD(0x01F3F020, void, WriteString, app::DataTextWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01F3F050, void, WriteSurrogateCharEntity, app::DataTextWriter* this_ptr, char16_t low_char, char16_t high_char)
    IL2CPP_REGISTER_METHOD(0x01F3F080, void, WriteChars, app::DataTextWriter* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01F3F0B0, void, WriteRaw_1, app::DataTextWriter* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01F3F0E0, void, WriteRaw_2, app::DataTextWriter* this_ptr, app::String* data)
    IL2CPP_REGISTER_METHOD(0x01F3F110, void, WriteBase64, app::DataTextWriter* this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01F3F140, void, WriteBinHex, app::DataTextWriter* this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01F3F170, app::WriteState__Enum, get_WriteState, app::DataTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F3F1A0, void, Close, app::DataTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F3F1D0, void, Flush, app::DataTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F3F200, app::String*, LookupPrefix, app::DataTextWriter* this_ptr, app::String* ns)
} // namespace app::classes::System::Data::DataTextWriter
