#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlAsyncCheckWriter.h>
#include <Modloader/app/structs/XmlWriter.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/WriteState__Enum.h>
#include <Modloader/app/structs/XmlReader.h>

namespace app::classes::System::Xml::XmlAsyncCheckWriter {
    IL2CPP_REGISTER_METHOD(0x0195A260, void, ctor, (app::XmlAsyncCheckWriter * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHOD(0x0195A320, void, CheckAsync, (app::XmlAsyncCheckWriter * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477FFE8, XmlAsyncCheckWriter_CheckAsync__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0195A400, void, WriteStartDocument_1, (app::XmlAsyncCheckWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0195A440, void, WriteStartDocument_2, (app::XmlAsyncCheckWriter * this_ptr, bool standalone))
    IL2CPP_REGISTER_METHOD(0x0195A490, void, WriteEndDocument, (app::XmlAsyncCheckWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0195A4D0, void, WriteDocType, (app::XmlAsyncCheckWriter * this_ptr, app::String* name, app::String* pubid, app::String* sysid, app::String* subset))
    IL2CPP_REGISTER_METHOD(0x0195A540, void, WriteStartElement, (app::XmlAsyncCheckWriter * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x0195A5B0, void, WriteEndElement, (app::XmlAsyncCheckWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0195A5F0, void, WriteFullEndElement, (app::XmlAsyncCheckWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0195A630, void, WriteStartAttribute, (app::XmlAsyncCheckWriter * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x0195A6A0, void, WriteEndAttribute, (app::XmlAsyncCheckWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0195A6E0, void, WriteCData, (app::XmlAsyncCheckWriter * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x0195A730, void, WriteComment, (app::XmlAsyncCheckWriter * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x0195A780, void, WriteProcessingInstruction, (app::XmlAsyncCheckWriter * this_ptr, app::String* name, app::String* text))
    IL2CPP_REGISTER_METHOD(0x0195A7E0, void, WriteEntityRef, (app::XmlAsyncCheckWriter * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x0195A830, void, WriteCharEntity, (app::XmlAsyncCheckWriter * this_ptr, uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x0195A880, void, WriteWhitespace, (app::XmlAsyncCheckWriter * this_ptr, app::String* ws))
    IL2CPP_REGISTER_METHOD(0x0195A8D0, void, WriteString, (app::XmlAsyncCheckWriter * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x0195A920, void, WriteSurrogateCharEntity, (app::XmlAsyncCheckWriter * this_ptr, uint16_t low_char, uint16_t high_char))
    IL2CPP_REGISTER_METHOD(0x0195A980, void, WriteChars, (app::XmlAsyncCheckWriter * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0195A9F0, void, WriteRaw_1, (app::XmlAsyncCheckWriter * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0195AA60, void, WriteRaw_2, (app::XmlAsyncCheckWriter * this_ptr, app::String* data))
    IL2CPP_REGISTER_METHOD(0x0195AAB0, void, WriteBase64, (app::XmlAsyncCheckWriter * this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0195AB20, void, WriteBinHex, (app::XmlAsyncCheckWriter * this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0195AB90, app::WriteState__Enum, get_WriteState, (app::XmlAsyncCheckWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0195ABD0, void, Close, (app::XmlAsyncCheckWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0195AC10, void, Flush, (app::XmlAsyncCheckWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0195AC50, app::String*, LookupPrefix, (app::XmlAsyncCheckWriter * this_ptr, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x0195ACA0, void, WriteValue, (app::XmlAsyncCheckWriter * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0195ACF0, void, WriteAttributes, (app::XmlAsyncCheckWriter * this_ptr, app::XmlReader* reader, bool defattr))
    IL2CPP_REGISTER_METHOD(0x0195AD50, void, WriteNode, (app::XmlAsyncCheckWriter * this_ptr, app::XmlReader* reader, bool defattr))
    IL2CPP_REGISTER_METHOD(0x0195ADB0, void, Dispose, (app::XmlAsyncCheckWriter * this_ptr, bool disposing))
} // namespace app::classes::System::Xml::XmlAsyncCheckWriter
