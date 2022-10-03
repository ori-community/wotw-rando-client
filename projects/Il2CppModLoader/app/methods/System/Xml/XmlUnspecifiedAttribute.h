#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::XmlUnspecifiedAttribute {
    IL2CPP_REGISTER_METHOD(0x0195AF70, void, ctor, (app::XmlUnspecifiedAttribute * this_ptr, app::String* prefix, app::String* local_name, app::String* namespace_u_r_i, app::XmlDocument* doc))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Specified, (app::XmlUnspecifiedAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FC3A30, app::XmlNode*, CloneNode, (app::XmlUnspecifiedAttribute * this_ptr, bool deep))
    IL2CPP_REGISTER_METHOD(0x01FC3BD0, void, set_InnerText, (app::XmlUnspecifiedAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01FC3C50, app::XmlNode*, InsertBefore, (app::XmlUnspecifiedAttribute * this_ptr, app::XmlNode* new_child, app::XmlNode* ref_child))
    IL2CPP_REGISTER_METHOD(0x01FC3CE0, app::XmlNode*, InsertAfter, (app::XmlUnspecifiedAttribute * this_ptr, app::XmlNode* new_child, app::XmlNode* ref_child))
    IL2CPP_REGISTER_METHOD(0x01FC3D70, app::XmlNode*, RemoveChild, (app::XmlUnspecifiedAttribute * this_ptr, app::XmlNode* old_child))
    IL2CPP_REGISTER_METHOD(0x01FC3E00, app::XmlNode*, AppendChild, (app::XmlUnspecifiedAttribute * this_ptr, app::XmlNode* new_child))
    IL2CPP_REGISTER_METHOD(0x01FC3E90, void, WriteTo, (app::XmlUnspecifiedAttribute * this_ptr, app::XmlWriter* w))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, SetSpecified, (app::XmlUnspecifiedAttribute * this_ptr, bool f))
} // namespace app::classes::System::Xml::XmlUnspecifiedAttribute
