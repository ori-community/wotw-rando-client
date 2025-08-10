#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlComment.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::XmlComment {
    IL2CPP_REGISTER_METHOD(0x01714A90, void, ctor, app::XmlComment* this_ptr, app::String* comment, app::XmlDocument* doc)
    IL2CPP_REGISTER_METHOD(0x01960390, app::String*, get_Name, app::XmlComment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01960390, app::String*, get_LocalName, app::XmlComment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::XmlNodeType__Enum, get_NodeType, app::XmlComment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019603C0, app::XmlNode*, CloneNode, app::XmlComment* this_ptr, bool deep)
    IL2CPP_REGISTER_METHOD(0x01960420, void, WriteTo, app::XmlComment* this_ptr, app::XmlWriter* w)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, app::XmlComment* this_ptr, app::XmlWriter* w)
} // namespace app::classes::System::Xml::XmlComment
