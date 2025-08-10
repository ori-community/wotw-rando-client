#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IXmlSchemaInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlAttribute.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlElement.h>
#include <Modloader/app/structs/XmlLinkedNode.h>
#include <Modloader/app/structs/XmlName.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlSpace__Enum.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::XmlAttribute {
    IL2CPP_REGISTER_METHOD(0x0195ADF0, void, ctor_1, app::XmlAttribute* this_ptr, app::XmlName* name, app::XmlDocument* doc)
    IL2CPP_REGISTER_METHOD(0x0195AF50, int32_t, get_LocalNameHash, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0195AF70,
        void,
        ctor_2,
        app::XmlAttribute* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* namespace_u_r_i,
        app::XmlDocument* doc
    )
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XmlName*, get_XmlName, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_XmlName, app::XmlAttribute* this_ptr, app::XmlName* value)
    IL2CPP_REGISTER_METHOD(0x0195AFC0, app::XmlNode*, CloneNode, app::XmlAttribute* this_ptr, bool deep)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlNode*, get_ParentNode, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195B0B0, app::String*, get_Name, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E0120, app::String*, get_LocalName, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195B0D0, app::String*, get_NamespaceURI, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195B0F0, app::String*, get_Prefix, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195B110, void, set_Prefix, app::XmlAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::XmlNodeType__Enum, get_NodeType, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195B1D0, app::XmlDocument*, get_OwnerDocument, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195B1F0, app::String*, get_Value, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195B210, void, set_Value, app::XmlAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IXmlSchemaInfo*, get_SchemaInfo, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195B230, void, set_InnerText, app::XmlAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0195B2A0, bool, PrepareOwnerElementInElementIdAttrMap, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195B370, void, ResetOwnerElementInElementIdAttrMap, app::XmlAttribute* this_ptr, app::String* old_inner_text)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsContainer, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195B4F0, app::XmlNode*, AppendChildForLoad, app::XmlAttribute* this_ptr, app::XmlNode* new_child, app::XmlDocument* doc)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::XmlLinkedNode*, get_LastNode, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_LastNode, app::XmlAttribute* this_ptr, app::XmlLinkedNode* value)
    IL2CPP_REGISTER_METHOD(0x0195B6C0, bool, IsValidChildType, app::XmlAttribute* this_ptr, app::XmlNodeType__Enum type)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Specified, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195B6D0, app::XmlNode*, InsertBefore, app::XmlAttribute* this_ptr, app::XmlNode* new_child, app::XmlNode* ref_child)
    IL2CPP_REGISTER_METHOD(0x0195B770, app::XmlNode*, InsertAfter, app::XmlAttribute* this_ptr, app::XmlNode* new_child, app::XmlNode* ref_child)
    IL2CPP_REGISTER_METHOD(0x0195B810, app::XmlNode*, RemoveChild, app::XmlAttribute* this_ptr, app::XmlNode* old_child)
    IL2CPP_REGISTER_METHOD(0x0195B890, app::XmlNode*, PrependChild, app::XmlAttribute* this_ptr, app::XmlNode* new_child)
    IL2CPP_REGISTER_METHOD(0x0195B950, app::XmlNode*, AppendChild, app::XmlAttribute* this_ptr, app::XmlNode* new_child)
    IL2CPP_REGISTER_METHOD(0x0195B9D0, app::XmlElement*, get_OwnerElement, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195BA90, void, set_InnerXml, app::XmlAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0195BC10, void, WriteTo, app::XmlAttribute* this_ptr, app::XmlWriter* w)
    IL2CPP_REGISTER_METHOD(0x0195BCE0, void, WriteContentTo, app::XmlAttribute* this_ptr, app::XmlWriter* w)
    IL2CPP_REGISTER_METHOD(0x0195BD50, app::String*, get_BaseURI, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, SetParent, app::XmlAttribute* this_ptr, app::XmlNode* node)
    IL2CPP_REGISTER_METHOD(0x0195BE30, app::XmlSpace__Enum, get_XmlSpace, app::XmlAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195BE90, app::String*, get_XmlLang, app::XmlAttribute* this_ptr)
} // namespace app::classes::System::Xml::XmlAttribute
