#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlWellFormedWriter_AttributeValueCache.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/XmlWriter.h>
#include <Modloader/app/structs/XmlWellFormedWriter_AttributeValueCache_ItemType__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::XmlWellFormedWriter_AttributeValueCache {
    IL2CPP_REGISTER_METHOD(0x01FD3600, app::String*, get_StringValue, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FD3640, void, WriteEntityRef, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01FD38F0, void, WriteCharEntity, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr, uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x01FD39F0, void, WriteSurrogateCharEntity, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr, uint16_t low_char, uint16_t high_char))
    IL2CPP_REGISTER_METHOD(0x01FD3B60, void, WriteWhitespace, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr, app::String* ws))
    IL2CPP_REGISTER_METHOD(0x01FD3BF0, void, WriteString, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01FD3C90, void, WriteChars, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01FD3E70, void, WriteRaw_1, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr, app::Char__Array* buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01FD4050, void, WriteRaw_2, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr, app::String* data))
    IL2CPP_REGISTER_METHOD(0x01FD40E0, void, WriteValue, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01FD4170, void, Replay, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHOD(0x01FD45E0, void, Trim, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FD4C00, void, Clear, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FD4C40, void, StartComplexValue, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FD4C90, void, AddItem, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr, app::XmlWellFormedWriter_AttributeValueCache_ItemType__Enum type, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x01FD4F10, void, ctor, (app::XmlWellFormedWriter_AttributeValueCache * this_ptr))
} // namespace app::classes::System::Xml::XmlWellFormedWriter_AttributeValueCache
