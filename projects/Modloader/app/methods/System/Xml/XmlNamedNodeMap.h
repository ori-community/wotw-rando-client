#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::XmlNamedNodeMap {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XmlNamedNodeMap * this_ptr, app::XmlNode* parent))
    IL2CPP_REGISTER_METHOD(0x01DC1020, app::XmlNode*, GetNamedItem, (app::XmlNamedNodeMap * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01DC1240, app::XmlNode*, SetNamedItem, (app::XmlNamedNodeMap * this_ptr, app::XmlNode* node))
    IL2CPP_REGISTER_METHOD(0x0195CDA0, int32_t, get_Count, (app::XmlNamedNodeMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC1320, app::IEnumerator*, GetEnumerator, (app::XmlNamedNodeMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC1330, int32_t, FindNodeOffset_1, (app::XmlNamedNodeMap * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01DC14A0, int32_t, FindNodeOffset_2, (app::XmlNamedNodeMap * this_ptr, app::String* local_name, app::String* namespace_u_r_i))
    IL2CPP_REGISTER_METHOD(0x01DC1660, app::XmlNode*, AddNode, (app::XmlNamedNodeMap * this_ptr, app::XmlNode* node))
    IL2CPP_REGISTER_METHOD(0x01DC18A0, app::XmlNode*, AddNodeForLoad, (app::XmlNamedNodeMap * this_ptr, app::XmlNode* node, app::XmlDocument* doc))
    IL2CPP_REGISTER_METHOD(0x01DC1960, app::XmlNode*, RemoveNodeAt, (app::XmlNamedNodeMap * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x01DC1B30, app::XmlNode*, ReplaceNodeAt, (app::XmlNamedNodeMap * this_ptr, int32_t i, app::XmlNode* node))
    IL2CPP_REGISTER_METHOD(0x01DC1BA0, app::XmlNode*, InsertNodeAt, (app::XmlNamedNodeMap * this_ptr, int32_t i, app::XmlNode* node))
} // namespace app::classes::System::Xml::XmlNamedNodeMap
