#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::XmlComment {
    IL2CPP_REGISTER_METHOD(0x01714A90, void, ctor, (app::XmlComment * this_ptr, app::String * comment, app::XmlDocument * doc))
    IL2CPP_REGISTER_METHOD(0x01960390, app::String *, get_Name, (app::XmlComment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01960390, app::String *, get_LocalName, (app::XmlComment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::XmlNodeType__Enum, get_NodeType, (app::XmlComment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019603C0, app::XmlNode *, CloneNode, (app::XmlComment * this_ptr, bool deep))
    IL2CPP_REGISTER_METHOD(0x01960420, void, WriteTo, (app::XmlComment * this_ptr, app::XmlWriter * w))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (app::XmlComment * this_ptr, app::XmlWriter * w))
}
