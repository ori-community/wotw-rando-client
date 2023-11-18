#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XObjectWrapper.h>
#include <Modloader/app/structs/IXmlNode.h>
#include <Modloader/app/structs/List_1_Newtonsoft_Json_Converters_IXmlNode_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XObject.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>

namespace app::classes::Newtonsoft::Json::Converters::XObjectWrapper {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XObjectWrapper * this_ptr, app::XObject* xml_object))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_WrappedNode, (app::XObjectWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717030, app::XmlNodeType__Enum, get_NodeType, (app::XObjectWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_LocalName, (app::XObjectWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A59BD0, app::List_1_Newtonsoft_Json_Converters_IXmlNode_*, get_ChildNodes, (app::XObjectWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A59C70, app::List_1_Newtonsoft_Json_Converters_IXmlNode_*, get_Attributes, (app::XObjectWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IXmlNode*, get_ParentNode, (app::XObjectWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_Value, (app::XObjectWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A59D10, app::IXmlNode*, AppendChild, (app::XObjectWrapper * this_ptr, app::IXmlNode* new_child))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_NamespaceUri, (app::XObjectWrapper * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Converters::XObjectWrapper
