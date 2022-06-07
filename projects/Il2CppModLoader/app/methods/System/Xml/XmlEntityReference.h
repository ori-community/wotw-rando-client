#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::XmlEntityReference {
    IL2CPP_REGISTER_METHOD(0x01DB5690, void, ctor, (app::XmlEntityReference * this_ptr, app::String * name, app::XmlDocument * doc))
    IL2CPP_REGISTER_METHODINFO(0x0476F9D0, XmlEntityReference__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_Name, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_LocalName, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String *, get_Value, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB57F0, void, set_Value, (app::XmlEntityReference * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04706158, XmlEntityReference_set_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008E77B0, app::XmlNodeType__Enum, get_NodeType, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB5860, app::XmlNode *, CloneNode, (app::XmlEntityReference * this_ptr, bool deep))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsContainer, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB58B0, void, SetParent, (app::XmlEntityReference * this_ptr, app::XmlNode * node))
    IL2CPP_REGISTER_METHOD(0x01DB5A70, void, SetParentForLoad, (app::XmlEntityReference * this_ptr, app::XmlNode * node))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::XmlLinkedNode *, get_LastNode, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_LastNode, (app::XmlEntityReference * this_ptr, app::XmlLinkedNode * value))
    IL2CPP_REGISTER_METHOD(0x01DAE3C0, bool, IsValidChildType, (app::XmlEntityReference * this_ptr, app::XmlNodeType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01DB5A90, void, WriteTo, (app::XmlEntityReference * this_ptr, app::XmlWriter * w))
    IL2CPP_REGISTER_METHOD(0x01DB5AC0, void, WriteContentTo, (app::XmlEntityReference * this_ptr, app::XmlWriter * w))
    IL2CPP_REGISTER_METHOD(0x01DB5D40, app::String *, get_BaseURI, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB5D80, app::String *, ConstructBaseURI, (app::XmlEntityReference * this_ptr, app::String * base_u_r_i, app::String * system_id))
    IL2CPP_REGISTER_METHOD(0x01DB5EA0, app::String *, get_ChildBaseURI, (app::XmlEntityReference * this_ptr))
}
