#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::XmlDocumentFragment {
    IL2CPP_REGISTER_METHOD(0x01DAAEE0, void, ctor, (app::XmlDocumentFragment * this_ptr, app::XmlDocument * owner_document))
    IL2CPP_REGISTER_METHODINFO(0x047885A8, XmlDocumentFragment__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DAAFB0, app::String *, get_Name, (app::XmlDocumentFragment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DAAFB0, app::String *, get_LocalName, (app::XmlDocumentFragment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FA040, app::XmlNodeType__Enum, get_NodeType, (app::XmlDocumentFragment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlNode *, get_ParentNode, (app::XmlDocumentFragment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DAAFE0, app::XmlDocument *, get_OwnerDocument, (app::XmlDocumentFragment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DAB0B0, void, set_InnerXml, (app::XmlDocumentFragment * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x01DAB230, app::XmlNode *, CloneNode, (app::XmlDocumentFragment * this_ptr, bool deep))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsContainer, (app::XmlDocumentFragment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XmlLinkedNode *, get_LastNode, (app::XmlDocumentFragment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_LastNode, (app::XmlDocumentFragment * this_ptr, app::XmlLinkedNode * value))
    IL2CPP_REGISTER_METHOD(0x01DAB2D0, bool, IsValidChildType, (app::XmlDocumentFragment * this_ptr, app::XmlNodeType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01DAB380, bool, CanInsertAfter, (app::XmlDocumentFragment * this_ptr, app::XmlNode * new_child, app::XmlNode * ref_child))
    IL2CPP_REGISTER_METHOD(0x01DAB400, bool, CanInsertBefore, (app::XmlDocumentFragment * this_ptr, app::XmlNode * new_child, app::XmlNode * ref_child))
    IL2CPP_REGISTER_METHOD(0x01971EE0, void, WriteTo, (app::XmlDocumentFragment * this_ptr, app::XmlWriter * w))
    IL2CPP_REGISTER_METHOD(0x01DAB470, void, WriteContentTo, (app::XmlDocumentFragment * this_ptr, app::XmlWriter * w))
}
