#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlEventCache.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlWriter.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/XmlStandalone__Enum.h>
#include <Modloader/app/structs/XmlEventCache_XmlEventType__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::XmlEventCache {
    IL2CPP_REGISTER_METHOD(0x01DB6180, void, ctor, (app::XmlEventCache * this_ptr, app::String* base_uri, bool has_root_node))
    IL2CPP_REGISTER_METHOD(0x01DB6190, void, EndEvents, (app::XmlEventCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB61E0, void, EventsToWriter, (app::XmlEventCache * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHOD(0x01DB6B00, void, WriteDocType, (app::XmlEventCache * this_ptr, app::String* name, app::String* pubid, app::String* sysid, app::String* subset))
    IL2CPP_REGISTER_METHOD(0x01DB6B90, void, WriteStartElement, (app::XmlEventCache * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01DB6BC0, void, WriteStartAttribute, (app::XmlEventCache * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01DB6BF0, void, WriteEndAttribute, (app::XmlEventCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB6C40, void, WriteCData, (app::XmlEventCache * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01DB6CA0, void, WriteComment, (app::XmlEventCache * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01DB6D00, void, WriteProcessingInstruction, (app::XmlEventCache * this_ptr, app::String* name, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01DB6D70, void, WriteWhitespace, (app::XmlEventCache * this_ptr, app::String* ws))
    IL2CPP_REGISTER_METHOD(0x01DB6DD0, void, WriteString, (app::XmlEventCache * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01701610, void, WriteChars, (app::XmlEventCache * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0195E400, void, WriteRaw_1, (app::XmlEventCache * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01DB6E50, void, WriteRaw_2, (app::XmlEventCache * this_ptr, app::String* data))
    IL2CPP_REGISTER_METHOD(0x01DB6EB0, void, WriteEntityRef, (app::XmlEventCache * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01DB6F10, void, WriteCharEntity, (app::XmlEventCache * this_ptr, uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x01DB6FF0, void, WriteSurrogateCharEntity, (app::XmlEventCache * this_ptr, uint16_t low_char, uint16_t high_char))
    IL2CPP_REGISTER_METHOD(0x01DB7120, void, WriteBase64, (app::XmlEventCache * this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01DB71A0, void, WriteBinHex, (app::XmlEventCache * this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01DB7220, void, Close, (app::XmlEventCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB7270, void, Flush, (app::XmlEventCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01701410, void, WriteValue, (app::XmlEventCache * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01DB72C0, void, Dispose, (app::XmlEventCache * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01DB73E0, void, WriteXmlDeclaration_1, (app::XmlEventCache * this_ptr, app::XmlStandalone__Enum standalone))
    IL2CPP_REGISTER_METHOD(0x01DB74C0, void, WriteXmlDeclaration_2, (app::XmlEventCache * this_ptr, app::String* xmldecl))
    IL2CPP_REGISTER_METHOD(0x01DB7520, void, StartElementContent, (app::XmlEventCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB7570, void, WriteEndElement, (app::XmlEventCache * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01DB75A0, void, WriteFullEndElement, (app::XmlEventCache * this_ptr, app::String* prefix, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01DB75D0, void, WriteNamespaceDeclaration, (app::XmlEventCache * this_ptr, app::String* prefix, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01DB7640, void, WriteEndBase64, (app::XmlEventCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB7690, void, AddEvent_1, (app::XmlEventCache * this_ptr, app::XmlEventCache_XmlEventType__Enum event_type))
    IL2CPP_REGISTER_METHOD(0x01DB76E0, void, AddEvent_2, (app::XmlEventCache * this_ptr, app::XmlEventCache_XmlEventType__Enum event_type, app::String* s1))
    IL2CPP_REGISTER_METHOD(0x01DB7750, void, AddEvent_3, (app::XmlEventCache * this_ptr, app::XmlEventCache_XmlEventType__Enum event_type, app::String* s1, app::String* s2))
    IL2CPP_REGISTER_METHOD(0x01DB77D0, void, AddEvent_4, (app::XmlEventCache * this_ptr, app::XmlEventCache_XmlEventType__Enum event_type, app::String* s1, app::String* s2, app::String* s3))
    IL2CPP_REGISTER_METHOD(0x01DB7850, void, AddEvent_5, (app::XmlEventCache * this_ptr, app::XmlEventCache_XmlEventType__Enum event_type, app::String* s1, app::String* s2, app::String* s3, app::Object* o))
    IL2CPP_REGISTER_METHOD(0x01DB78E0, void, AddEvent_6, (app::XmlEventCache * this_ptr, app::XmlEventCache_XmlEventType__Enum event_type, app::Object* o))
    IL2CPP_REGISTER_METHOD(0x01DB7950, int32_t, NewEvent, (app::XmlEventCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB7B90, app::Byte__Array*, ToBytes, (app::Byte__Array * buffer, int32_t index, int32_t count))
} // namespace app::classes::System::Xml::XmlEventCache
