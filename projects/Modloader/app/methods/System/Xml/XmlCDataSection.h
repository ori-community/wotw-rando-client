#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::XmlCDataSection {
    IL2CPP_REGISTER_METHOD(0x01714A90, void, ctor, (app::XmlCDataSection * this_ptr, app::String* data, app::XmlDocument* doc))
    IL2CPP_REGISTER_METHOD(0x0195EF30, app::String*, get_Name, (app::XmlCDataSection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0195EF30, app::String*, get_LocalName, (app::XmlCDataSection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::XmlNodeType__Enum, get_NodeType, (app::XmlCDataSection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01714B00, app::XmlNode*, get_ParentNode, (app::XmlCDataSection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0195EF60, app::XmlNode*, CloneNode, (app::XmlCDataSection * this_ptr, bool deep))
    IL2CPP_REGISTER_METHOD(0x0195EFC0, void, WriteTo, (app::XmlCDataSection * this_ptr, app::XmlWriter* w))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (app::XmlCDataSection * this_ptr, app::XmlWriter* w))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsText, (app::XmlCDataSection * this_ptr))
} // namespace app::classes::System::Xml::XmlCDataSection
