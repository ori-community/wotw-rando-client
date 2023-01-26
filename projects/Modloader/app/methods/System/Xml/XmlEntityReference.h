#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlEntityReference.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlLinkedNode.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::XmlEntityReference {
    IL2CPP_REGISTER_METHOD(0x01DB5690, void, ctor, (app::XmlEntityReference * this_ptr, app::String* name, app::XmlDocument* doc))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Name, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_LocalName, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_Value, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB57F0, void, set_Value, (app::XmlEntityReference * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x008E77B0, app::XmlNodeType__Enum, get_NodeType, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB5860, app::XmlNode*, CloneNode, (app::XmlEntityReference * this_ptr, bool deep))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsContainer, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB58B0, void, SetParent, (app::XmlEntityReference * this_ptr, app::XmlNode* node))
    IL2CPP_REGISTER_METHOD(0x01DB5A70, void, SetParentForLoad, (app::XmlEntityReference * this_ptr, app::XmlNode* node))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::XmlLinkedNode*, get_LastNode, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_LastNode, (app::XmlEntityReference * this_ptr, app::XmlLinkedNode* value))
    IL2CPP_REGISTER_METHOD(0x01DAE3C0, bool, IsValidChildType, (app::XmlEntityReference * this_ptr, app::XmlNodeType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01DB5A90, void, WriteTo, (app::XmlEntityReference * this_ptr, app::XmlWriter* w))
    IL2CPP_REGISTER_METHOD(0x01DB5AC0, void, WriteContentTo, (app::XmlEntityReference * this_ptr, app::XmlWriter* w))
    IL2CPP_REGISTER_METHOD(0x01DB5D40, app::String*, get_BaseURI, (app::XmlEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB5D80, app::String*, ConstructBaseURI, (app::XmlEntityReference * this_ptr, app::String* base_u_r_i, app::String* system_id))
    IL2CPP_REGISTER_METHOD(0x01DB5EA0, app::String*, get_ChildBaseURI, (app::XmlEntityReference * this_ptr))
} // namespace app::classes::System::Xml::XmlEntityReference
