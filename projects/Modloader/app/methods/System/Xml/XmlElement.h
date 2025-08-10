#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IXmlSchemaInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlAttribute.h>
#include <Modloader/app/structs/XmlAttributeCollection.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlElement.h>
#include <Modloader/app/structs/XmlLinkedNode.h>
#include <Modloader/app/structs/XmlName.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::XmlElement {
    IL2CPP_REGISTER_METHOD(0x01DAD950, void, ctor_1, app::XmlElement* this_ptr, app::XmlName* name, bool empty, app::XmlDocument* doc)
    IL2CPP_REGISTER_METHOD(
        0x01DADAD0,
        void,
        ctor_2,
        app::XmlElement* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* namespace_u_r_i,
        app::XmlDocument* doc
    )
    IL2CPP_REGISTER_METHOD(0x002FB950, app::XmlName*, get_XmlName, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_XmlName, app::XmlElement* this_ptr, app::XmlName* value)
    IL2CPP_REGISTER_METHOD(0x01DADB40, app::XmlNode*, CloneNode, app::XmlElement* this_ptr, bool deep)
    IL2CPP_REGISTER_METHOD(0x01DAE040, app::String*, get_Name, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E01F0, app::String*, get_LocalName, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DAE060, app::String*, get_NamespaceURI, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DAE080, app::String*, get_Prefix, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DAE0A0, void, set_Prefix, app::XmlElement* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x00417920, app::XmlNodeType__Enum, get_NodeType, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XmlNode*, get_ParentNode, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DAE170, app::XmlDocument*, get_OwnerDocument, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsContainer, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DAE190, app::XmlNode*, AppendChildForLoad, app::XmlElement* this_ptr, app::XmlNode* new_child, app::XmlDocument* doc)
    IL2CPP_REGISTER_METHOD(0x01DAE360, bool, get_IsEmpty, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DAE370, void, set_IsEmpty, app::XmlElement* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01DAE3B0, app::XmlLinkedNode*, get_LastNode, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_LastNode, app::XmlElement* this_ptr, app::XmlLinkedNode* value)
    IL2CPP_REGISTER_METHOD(0x01DAE3C0, bool, IsValidChildType, app::XmlElement* this_ptr, app::XmlNodeType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01DAE420, app::XmlAttributeCollection*, get_Attributes, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DAE670, bool, get_HasAttributes, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DAE6A0, app::String*, GetAttribute_1, app::XmlElement* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01DAE770, void, SetAttribute_1, app::XmlElement* this_ptr, app::String* name, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01DAE850, app::XmlAttribute*, GetAttributeNode_1, app::XmlElement* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01DAE8C0, app::XmlAttribute*, SetAttributeNode_1, app::XmlElement* this_ptr, app::XmlAttribute* new_attr)
    IL2CPP_REGISTER_METHOD(0x01DAEA40, app::String*, GetAttribute_2, app::XmlElement* this_ptr, app::String* local_name, app::String* namespace_u_r_i)
    IL2CPP_REGISTER_METHOD(
        0x01DAEB20,
        app::String*,
        SetAttribute_2,
        app::XmlElement* this_ptr,
        app::String* local_name,
        app::String* namespace_u_r_i,
        app::String* value
    )
    IL2CPP_REGISTER_METHOD(0x01DAECA0, app::XmlAttribute*, GetAttributeNode_2, app::XmlElement* this_ptr, app::String* local_name, app::String* namespace_u_r_i)
    IL2CPP_REGISTER_METHOD(0x01DAED20, app::XmlAttribute*, SetAttributeNode_2, app::XmlElement* this_ptr, app::String* local_name, app::String* namespace_u_r_i)
    IL2CPP_REGISTER_METHOD(0x01DAEE60, bool, HasAttribute, app::XmlElement* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01DAEE80, void, WriteTo, app::XmlElement* this_ptr, app::XmlWriter* w)
    IL2CPP_REGISTER_METHOD(0x01DAEFD0, void, WriteElementTo, app::XmlWriter* writer, app::XmlElement* e)
    IL2CPP_REGISTER_METHOD(0x01DAF220, void, WriteStartElement, app::XmlElement* this_ptr, app::XmlWriter* w)
    IL2CPP_REGISTER_METHOD(0x0195BCE0, void, WriteContentTo, app::XmlElement* this_ptr, app::XmlWriter* w)
    IL2CPP_REGISTER_METHOD(0x01DAF350, void, RemoveAllAttributes, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DAF4B0, void, RemoveAll, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DAF4E0, void, RemoveAllChildren, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::IXmlSchemaInfo*, get_SchemaInfo, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DAF4F0, void, set_InnerXml, app::XmlElement* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01DAF6D0, app::String*, get_InnerText, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DAF6E0, void, set_InnerText, app::XmlElement* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01DAF7C0, app::XmlNode*, get_NextSibling, app::XmlElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, SetParent, app::XmlElement* this_ptr, app::XmlNode* node)
} // namespace app::classes::System::Xml::XmlElement
