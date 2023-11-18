#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlNodeReaderNavigator.h>
#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/IXmlSchemaInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlDeclaration.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlDocumentType.h>
#include <Modloader/app/structs/XmlElement.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceScope__Enum.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlSpace__Enum.h>

namespace app::classes::System::Xml::XmlNodeReaderNavigator {
    IL2CPP_REGISTER_METHOD(0x016FB1D0, void, ctor, (app::XmlNodeReaderNavigator * this_ptr, app::XmlNode* node))
    IL2CPP_REGISTER_METHOD(0x016FB440, app::XmlNodeType__Enum, get_NodeType, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FB480, app::String*, get_NamespaceURI, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FB4B0, app::String*, get_Name, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FB660, app::String*, get_LocalName, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F83F40, bool, get_CreatedOnAttribute, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FB780, bool, IsLocalNameEmpty, (app::XmlNodeReaderNavigator * this_ptr, app::XmlNodeType__Enum nt))
    IL2CPP_REGISTER_METHOD(0x016FB7D0, app::String*, get_Prefix, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FB800, app::String*, get_Value, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FBBA0, app::String*, get_BaseURI, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FBBD0, app::XmlSpace__Enum, get_XmlSpace, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FBC00, app::String*, get_XmlLang, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FBC30, bool, get_IsEmptyElement, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FBD70, bool, get_IsDefault, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FBED0, app::IXmlSchemaInfo*, get_SchemaInfo, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::XmlNameTable*, get_NameTable, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FBF00, int32_t, get_AttributeCount, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FC0A0, void, CheckIndexCondition, (app::XmlNodeReaderNavigator * this_ptr, int32_t attribute_index))
    IL2CPP_REGISTER_METHOD(0x016FC170, void, InitDecAttr, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FC400, app::String*, GetDeclarationAttr_1, (app::XmlNodeReaderNavigator * this_ptr, app::XmlDeclaration* decl, app::String* name))
    IL2CPP_REGISTER_METHOD(0x016FC560, app::String*, GetDeclarationAttr_2, (app::XmlNodeReaderNavigator * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x016FC5C0, int32_t, GetDecAttrInd, (app::XmlNodeReaderNavigator * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x016FC680, void, InitDocTypeAttr, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FC820, app::String*, GetDocumentTypeAttr_1, (app::XmlNodeReaderNavigator * this_ptr, app::XmlDocumentType* doc_type, app::String* name))
    IL2CPP_REGISTER_METHOD(0x016FC930, app::String*, GetDocumentTypeAttr_2, (app::XmlNodeReaderNavigator * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x016FC990, int32_t, GetDocTypeAttrInd, (app::XmlNodeReaderNavigator * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x016FCA50, app::String*, GetAttributeFromElement_1, (app::XmlNodeReaderNavigator * this_ptr, app::XmlElement* elem, app::String* name))
    IL2CPP_REGISTER_METHOD(0x016FCAA0, app::String*, GetAttribute_1, (app::XmlNodeReaderNavigator * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x016FCBF0, app::String*, GetAttributeFromElement_2, (app::XmlNodeReaderNavigator * this_ptr, app::XmlElement* elem, app::String* name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x016FCC50, app::String*, GetAttribute_2, (app::XmlNodeReaderNavigator * this_ptr, app::String* name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x016FCDD0, app::String*, GetAttribute_3, (app::XmlNodeReaderNavigator * this_ptr, int32_t attribute_index))
    IL2CPP_REGISTER_METHOD(0x016FD0A0, void, LogMove, (app::XmlNodeReaderNavigator * this_ptr, int32_t level))
    IL2CPP_REGISTER_METHOD(0x016FD0C0, void, RollBackMove, (app::XmlNodeReaderNavigator * this_ptr, int32_t* level))
    IL2CPP_REGISTER_METHOD(0x016FD0F0, bool, get_IsOnDeclOrDocType, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FD130, void, ResetToAttribute, (app::XmlNodeReaderNavigator * this_ptr, int32_t* level))
    IL2CPP_REGISTER_METHOD(0x016FD1F0, void, ResetMove, (app::XmlNodeReaderNavigator * this_ptr, int32_t* level, app::XmlNodeType__Enum* nt))
    IL2CPP_REGISTER_METHOD(0x016FD3E0, bool, MoveToAttribute_1, (app::XmlNodeReaderNavigator * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x016FD480, bool, MoveToAttributeFromElement, (app::XmlNodeReaderNavigator * this_ptr, app::XmlElement* elem, app::String* name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x016FD570, bool, MoveToAttribute_2, (app::XmlNodeReaderNavigator * this_ptr, app::String* name, app::String* namespace_u_r_i))
    IL2CPP_REGISTER_METHOD(0x016FD7F0, void, MoveToAttribute_3, (app::XmlNodeReaderNavigator * this_ptr, int32_t attribute_index))
    IL2CPP_REGISTER_METHOD(0x016FD9D0, bool, MoveToNextAttribute, (app::XmlNodeReaderNavigator * this_ptr, int32_t* level))
    IL2CPP_REGISTER_METHOD(0x016FDBD0, bool, MoveToParent, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FDC20, bool, MoveToFirstChild, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FDC70, bool, MoveToNextSibling, (app::XmlNodeReaderNavigator * this_ptr, app::XmlNode* node))
    IL2CPP_REGISTER_METHOD(0x016FDCC0, bool, MoveToNext, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FDD50, bool, MoveToElement, (app::XmlNodeReaderNavigator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FDDD0, app::String*, LookupNamespace, (app::XmlNodeReaderNavigator * this_ptr, app::String* prefix))
    IL2CPP_REGISTER_METHOD(0x016FE0A0, app::String*, DefaultLookupNamespace, (app::XmlNodeReaderNavigator * this_ptr, app::String* prefix))
    IL2CPP_REGISTER_METHOD(0x016FE280, app::String*, LookupPrefix, (app::XmlNodeReaderNavigator * this_ptr, app::String* namespace_name))
    IL2CPP_REGISTER_METHOD(0x016FE740, app::IDictionary_2_System_String_System_String_*, GetNamespacesInScope, (app::XmlNodeReaderNavigator * this_ptr, app::XmlNamespaceScope__Enum scope))
    IL2CPP_REGISTER_METHOD(0x016FED70, bool, ReadAttributeValue, (app::XmlNodeReaderNavigator * this_ptr, int32_t* level, bool* b_resolve_entity, app::XmlNodeType__Enum* nt))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::XmlDocument*, get_Document, (app::XmlNodeReaderNavigator * this_ptr))
} // namespace app::classes::System::Xml::XmlNodeReaderNavigator
