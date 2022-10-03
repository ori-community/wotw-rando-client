#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Converters::XmlNodeWrapper {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XmlNodeWrapper * this_ptr, app::XmlNode* node))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_WrappedNode, (app::XmlNodeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717090, app::XmlNodeType__Enum, get_NodeType, (app::XmlNodeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017174B0, app::String*, get_LocalName, (app::XmlNodeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A62E50, app::List_1_Newtonsoft_Json_Converters_IXmlNode_*, get_ChildNodes, (app::XmlNodeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A63270, app::IXmlNode*, WrapNode, (app::XmlNode * node))
    IL2CPP_REGISTER_METHOD(0x01A636C0, app::List_1_Newtonsoft_Json_Converters_IXmlNode_*, get_Attributes, (app::XmlNodeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A63BB0, bool, get_HasAttributes, (app::XmlNodeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A63CE0, app::IXmlNode*, get_ParentNode, (app::XmlNodeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717030, app::String*, get_Value, (app::XmlNodeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A63DF0, void, set_Value, (app::XmlNodeWrapper * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01A63E20, app::IXmlNode*, AppendChild, (app::XmlNodeWrapper * this_ptr, app::IXmlNode* new_child))
    IL2CPP_REGISTER_METHOD(0x016FB480, app::String*, get_NamespaceUri, (app::XmlNodeWrapper * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Converters::XmlNodeWrapper
