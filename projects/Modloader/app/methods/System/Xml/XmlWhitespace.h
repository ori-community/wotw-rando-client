#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlWhitespace.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::XmlWhitespace {
    IL2CPP_REGISTER_METHOD(0x01FD5270, void, ctor, (app::XmlWhitespace * this_ptr, app::String* str_data, app::XmlDocument* doc))
    IL2CPP_REGISTER_METHODINFO(0x0470EAA0, XmlWhitespace__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FD5380, app::String*, get_Name, (app::XmlWhitespace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FD5380, app::String*, get_LocalName, (app::XmlWhitespace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004AB2B0, app::XmlNodeType__Enum, get_NodeType, (app::XmlWhitespace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01707540, app::XmlNode*, get_ParentNode, (app::XmlWhitespace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01707640, app::String*, get_Value, (app::XmlWhitespace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FD53B0, void, set_Value, (app::XmlWhitespace * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0477FBA0, XmlWhitespace_set_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FD54A0, app::XmlNode*, CloneNode, (app::XmlWhitespace * this_ptr, bool deep))
    IL2CPP_REGISTER_METHOD(0x01FD5500, void, WriteTo, (app::XmlWhitespace * this_ptr, app::XmlWriter* w))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (app::XmlWhitespace * this_ptr, app::XmlWriter* w))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsText, (app::XmlWhitespace * this_ptr))
} // namespace app::classes::System::Xml::XmlWhitespace
