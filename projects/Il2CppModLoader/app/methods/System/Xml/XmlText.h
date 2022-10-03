#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::XmlText {
    IL2CPP_REGISTER_METHOD(0x01714A50, void, ctor_1, (app::XmlText * this_ptr, app::String* str_data))
    IL2CPP_REGISTER_METHOD(0x01714A90, void, ctor_2, (app::XmlText * this_ptr, app::String* str_data, app::XmlDocument* doc))
    IL2CPP_REGISTER_METHOD(0x01714AD0, app::String*, get_Name, (app::XmlText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01714AD0, app::String*, get_LocalName, (app::XmlText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420230, app::XmlNodeType__Enum, get_NodeType, (app::XmlText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01714B00, app::XmlNode*, get_ParentNode, (app::XmlText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01714BA0, app::XmlNode*, CloneNode, (app::XmlText * this_ptr, bool deep))
    IL2CPP_REGISTER_METHOD(0x01707640, app::String*, get_Value, (app::XmlText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01714C00, void, set_Value, (app::XmlText * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01707750, void, WriteTo, (app::XmlText * this_ptr, app::XmlWriter* w))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (app::XmlText * this_ptr, app::XmlWriter* w))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsText, (app::XmlText * this_ptr))
} // namespace app::classes::System::Xml::XmlText
