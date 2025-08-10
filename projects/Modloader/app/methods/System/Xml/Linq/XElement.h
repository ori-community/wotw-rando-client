#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Xml_Linq_XAttribute_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Xml_Linq_XElement_.h>
#include <Modloader/app/structs/LoadOptions__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XAttribute.h>
#include <Modloader/app/structs/XElement.h>
#include <Modloader/app/structs/XName.h>
#include <Modloader/app/structs/XNamespace.h>
#include <Modloader/app/structs/XNode.h>
#include <Modloader/app/structs/XStreamingElement.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::Linq::XElement {
    IL2CPP_REGISTER_METHOD(0x03036610, app::IEnumerable_1_System_Xml_Linq_XElement_*, get_EmptySequence, )
    IL2CPP_REGISTER_METHOD(0x030366C0, void, ctor_1, app::XElement* this_ptr, app::XName* name)
    IL2CPP_REGISTER_METHOD(0x03036780, void, ctor_2, app::XElement* this_ptr, app::XElement* other)
    IL2CPP_REGISTER_METHOD(0x03036970, void, ctor_3, app::XElement* this_ptr, app::XStreamingElement* other)
    IL2CPP_REGISTER_METHOD(0x00938880, bool, get_HasAttributes, app::XElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E99DD0, bool, get_IsEmpty, app::XElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::XName*, get_Name, app::XElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, app::XmlNodeType__Enum, get_NodeType, app::XElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03036A40, app::String*, get_Value, app::XElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03036C10, void, set_Value, app::XElement* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x03036CE0, app::XAttribute*, Attribute, app::XElement* this_ptr, app::XName* name)
    IL2CPP_REGISTER_METHOD(0x03036D20, app::IEnumerable_1_System_Xml_Linq_XAttribute_*, Attributes, app::XElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03036D30, app::String*, GetPrefixOfNamespace, app::XElement* this_ptr, app::XNamespace* ns)
    IL2CPP_REGISTER_METHOD(0x03037030, void, WriteTo, app::XElement* this_ptr, app::XmlWriter* writer)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlSchema*, IXmlSerializable_GetSchema, app::XElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03037130, void, IXmlSerializable_ReadXml, app::XElement* this_ptr, app::XmlReader* reader)
    IL2CPP_REGISTER_METHOD(0x00C53A30, void, IXmlSerializable_WriteXml, app::XElement* this_ptr, app::XmlWriter* writer)
    IL2CPP_REGISTER_METHOD(0x03037360, void, AddAttribute, app::XElement* this_ptr, app::XAttribute* a)
    IL2CPP_REGISTER_METHOD(0x030376C0, void, AddAttributeSkipNotify, app::XElement* this_ptr, app::XAttribute* a)
    IL2CPP_REGISTER_METHOD(0x030378F0, void, AppendAttribute, app::XElement* this_ptr, app::XAttribute* a)
    IL2CPP_REGISTER_METHOD(0x03037A90, void, AppendAttributeSkipNotify, app::XElement* this_ptr, app::XAttribute* a)
    IL2CPP_REGISTER_METHOD(0x03037AE0, app::XNode*, CloneNode, app::XElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03037C30, app::IEnumerable_1_System_Xml_Linq_XAttribute_*, GetAttributes, app::XElement* this_ptr, app::XName* name)
    IL2CPP_REGISTER_METHOD(0x03037DD0, app::String*, GetNamespaceOfPrefixInScope, app::XElement* this_ptr, app::String* prefix, app::XElement* out_of_scope)
    IL2CPP_REGISTER_METHOD(0x03037F10, void, ReadElementFrom, app::XElement* this_ptr, app::XmlReader* r, app::LoadOptions__Enum o)
    IL2CPP_REGISTER_METHOD(0x03038430, void, SetEndElementLineInfo, app::XElement* this_ptr, int32_t line_number, int32_t line_position)
    IL2CPP_REGISTER_METHOD(0x030385A0, void, ValidateNode, app::XElement* this_ptr, app::XNode* node, app::XNode* previous)
} // namespace app::classes::System::Xml::Linq::XElement
