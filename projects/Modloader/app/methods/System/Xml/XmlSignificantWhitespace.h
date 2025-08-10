#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlSignificantWhitespace.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::XmlSignificantWhitespace {
    IL2CPP_REGISTER_METHOD(0x01707400, void, ctor, app::XmlSignificantWhitespace* this_ptr, app::String* str_data, app::XmlDocument* doc)
    IL2CPP_REGISTER_METHOD(0x01707510, app::String*, get_Name, app::XmlSignificantWhitespace* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01707510, app::String*, get_LocalName, app::XmlSignificantWhitespace* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8F220, app::XmlNodeType__Enum, get_NodeType, app::XmlSignificantWhitespace* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01707540, app::XmlNode*, get_ParentNode, app::XmlSignificantWhitespace* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017075E0, app::XmlNode*, CloneNode, app::XmlSignificantWhitespace* this_ptr, bool deep)
    IL2CPP_REGISTER_METHOD(0x01707640, app::String*, get_Value, app::XmlSignificantWhitespace* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01707660, void, set_Value, app::XmlSignificantWhitespace* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01707750, void, WriteTo, app::XmlSignificantWhitespace* this_ptr, app::XmlWriter* w)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, app::XmlSignificantWhitespace* this_ptr, app::XmlWriter* w)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsText, app::XmlSignificantWhitespace* this_ptr)
} // namespace app::classes::System::Xml::XmlSignificantWhitespace
