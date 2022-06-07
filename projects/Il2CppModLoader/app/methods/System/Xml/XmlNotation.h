#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::XmlNotation {
    IL2CPP_REGISTER_METHOD(0x016FEF80, void, ctor, (app::XmlNotation * this_ptr, app::String * name, app::String * public_id, app::String * system_id, app::XmlDocument * doc))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String *, get_Name, (app::XmlNotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String *, get_LocalName, (app::XmlNotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADC4A0, app::XmlNodeType__Enum, get_NodeType, (app::XmlNotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FF020, app::XmlNode *, CloneNode, (app::XmlNotation * this_ptr, bool deep))
    IL2CPP_REGISTER_METHODINFO(0x0474DDC8, XmlNotation_CloneNode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::XmlNotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FF090, void, set_InnerXml, (app::XmlNotation * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x0478E188, XmlNotation_set_InnerXml__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteTo, (app::XmlNotation * this_ptr, app::XmlWriter * w))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (app::XmlNotation * this_ptr, app::XmlWriter * w))
}
