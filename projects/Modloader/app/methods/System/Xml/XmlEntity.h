#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::XmlEntity {
    IL2CPP_REGISTER_METHOD(0x01DB52D0, void, ctor, (app::XmlEntity * this_ptr, app::String* name, app::String* strdata, app::String* public_id, app::String* system_id, app::String* notation_name, app::XmlDocument* doc))
    IL2CPP_REGISTER_METHOD(0x01DB5380, app::XmlNode*, CloneNode, (app::XmlEntity * this_ptr, bool deep))
    IL2CPP_REGISTER_METHODINFO(0x04779FD8, XmlEntity_CloneNode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::XmlEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Name, (app::XmlEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_LocalName, (app::XmlEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DAF6D0, app::String*, get_InnerText, (app::XmlEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB53F0, void, set_InnerText, (app::XmlEntity * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04777B10, XmlEntity_set_InnerText__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsContainer, (app::XmlEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB5460, app::XmlLinkedNode*, get_LastNode, (app::XmlEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_LastNode, (app::XmlEntity * this_ptr, app::XmlLinkedNode* value))
    IL2CPP_REGISTER_METHOD(0x01DB5600, bool, IsValidChildType, (app::XmlEntity * this_ptr, app::XmlNodeType__Enum type))
    IL2CPP_REGISTER_METHOD(0x005D89A0, app::XmlNodeType__Enum, get_NodeType, (app::XmlEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_SystemId, (app::XmlEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB5620, void, set_InnerXml, (app::XmlEntity * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04741370, XmlEntity_set_InnerXml__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteTo, (app::XmlEntity * this_ptr, app::XmlWriter* w))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (app::XmlEntity * this_ptr, app::XmlWriter* w))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_BaseURI, (app::XmlEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, SetBaseURI, (app::XmlEntity * this_ptr, app::String* in_base_u_r_i))
} // namespace app::classes::System::Xml::XmlEntity
