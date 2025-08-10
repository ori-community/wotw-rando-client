#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/IXmlSchemaInfo.h>
#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/SchemaElementDecl.h>
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WeakReference.h>
#include <Modloader/app/structs/XmlAttribute.h>
#include <Modloader/app/structs/XmlCDataSection.h>
#include <Modloader/app/structs/XmlComment.h>
#include <Modloader/app/structs/XmlDeclaration.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlDocumentFragment.h>
#include <Modloader/app/structs/XmlDocumentType.h>
#include <Modloader/app/structs/XmlElement.h>
#include <Modloader/app/structs/XmlEntity.h>
#include <Modloader/app/structs/XmlEntityReference.h>
#include <Modloader/app/structs/XmlImplementation.h>
#include <Modloader/app/structs/XmlLinkedNode.h>
#include <Modloader/app/structs/XmlName.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamedNodeMap.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlNodeChangedAction__Enum.h>
#include <Modloader/app/structs/XmlNodeChangedEventArgs.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlProcessingInstruction.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#include <Modloader/app/structs/XmlSignificantWhitespace.h>
#include <Modloader/app/structs/XmlText.h>
#include <Modloader/app/structs/XmlTextReader.h>
#include <Modloader/app/structs/XmlWhitespace.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::XmlDocument {
    IL2CPP_REGISTER_METHOD(0x0196C010, void, ctor_1, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0196C280, void, ctor_2, app::XmlDocument* this_ptr, app::XmlNameTable* nt)
    IL2CPP_REGISTER_METHOD(0x0196C3D0, void, ctor_3, app::XmlDocument* this_ptr, app::XmlImplementation* imp)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::SchemaInfo*, get_DtdSchemaInfo, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_DtdSchemaInfo, app::XmlDocument* this_ptr, app::SchemaInfo* value)
    IL2CPP_REGISTER_METHOD(0x0196C8E0, void, CheckName, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x0196C9E0,
        app::XmlName*,
        AddXmlName,
        app::XmlDocument* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* namespace_u_r_i,
        app::IXmlSchemaInfo* schema_info
    )
    IL2CPP_REGISTER_METHOD(
        0x0196CA10,
        app::XmlName*,
        GetXmlName,
        app::XmlDocument* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* namespace_u_r_i,
        app::IXmlSchemaInfo* schema_info
    )
    IL2CPP_REGISTER_METHOD(
        0x0196CA40,
        app::XmlName*,
        AddAttrXmlName,
        app::XmlDocument* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* namespace_u_r_i,
        app::IXmlSchemaInfo* schema_info
    )
    IL2CPP_REGISTER_METHOD(0x0196CBE0, bool, AddIdInfo, app::XmlDocument* this_ptr, app::XmlName* ele_name, app::XmlName* attr_name)
    IL2CPP_REGISTER_METHOD(0x0196CDA0, app::XmlName*, GetIDInfoByElement_, app::XmlDocument* this_ptr, app::XmlName* ele_name)
    IL2CPP_REGISTER_METHOD(0x0196CF00, app::XmlName*, GetIDInfoByElement, app::XmlDocument* this_ptr, app::XmlName* ele_name)
    IL2CPP_REGISTER_METHOD(0x0196D070, app::WeakReference*, GetElement, app::XmlDocument* this_ptr, app::ArrayList* element_list, app::XmlElement* elem)
    IL2CPP_REGISTER_METHOD(0x0196D5D0, void, AddElementWithId, app::XmlDocument* this_ptr, app::String* id, app::XmlElement* elem)
    IL2CPP_REGISTER_METHOD(0x0196DAA0, void, RemoveElementWithId, app::XmlDocument* this_ptr, app::String* id, app::XmlElement* elem)
    IL2CPP_REGISTER_METHOD(0x0196DC10, app::XmlNode*, CloneNode, app::XmlDocument* this_ptr, bool deep)
    IL2CPP_REGISTER_METHOD(0x00AB4D20, app::XmlNodeType__Enum, get_NodeType, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlNode*, get_ParentNode, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0196DCA0, app::XmlDocumentType*, get_DocumentType, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0196DD80, app::XmlDeclaration*, get_Declaration, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XmlImplementation*, get_Implementation, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::String*, get_Name, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::String*, get_LocalName, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0196DE80, app::XmlElement*, get_DocumentElement, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsContainer, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::XmlLinkedNode*, get_LastNode, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_LastNode, app::XmlDocument* this_ptr, app::XmlLinkedNode* value)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlDocument*, get_OwnerDocument, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Schemas, app::XmlDocument* this_ptr, app::XmlSchemaSet* value)
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_CanReportValidity, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00757DC0, bool, get_HasSetResolver, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A64220, app::XmlResolver*, GetResolver, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0196DF60, void, set_XmlResolver, app::XmlDocument* this_ptr, app::XmlResolver* value)
    IL2CPP_REGISTER_METHOD(0x0196E170, bool, IsValidChildType, app::XmlDocument* this_ptr, app::XmlNodeType__Enum type)
    IL2CPP_REGISTER_METHOD(0x0196E350, bool, HasNodeTypeInPrevSiblings, app::XmlDocument* this_ptr, app::XmlNodeType__Enum nt, app::XmlNode* ref_node)
    IL2CPP_REGISTER_METHOD(0x0196E430, bool, HasNodeTypeInNextSiblings, app::XmlDocument* this_ptr, app::XmlNodeType__Enum nt, app::XmlNode* ref_node)
    IL2CPP_REGISTER_METHOD(0x0196E4A0, bool, CanInsertBefore, app::XmlDocument* this_ptr, app::XmlNode* new_child, app::XmlNode* ref_child)
    IL2CPP_REGISTER_METHOD(0x0196E640, bool, CanInsertAfter, app::XmlDocument* this_ptr, app::XmlNode* new_child, app::XmlNode* ref_child)
    IL2CPP_REGISTER_METHOD(0x0196E760, app::XmlAttribute*, CreateAttribute_1, app::XmlDocument* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x0196E9A0,
        void,
        SetDefaultNamespace,
        app::XmlDocument* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String** namespace_u_r_i
    )
    IL2CPP_REGISTER_METHOD(0x0196EA80, app::XmlCDataSection*, CreateCDataSection, app::XmlDocument* this_ptr, app::String* data)
    IL2CPP_REGISTER_METHOD(0x0196EBF0, app::XmlComment*, CreateComment, app::XmlDocument* this_ptr, app::String* data)
    IL2CPP_REGISTER_METHOD(
        0x0196ED50,
        app::XmlDocumentType*,
        CreateDocumentType,
        app::XmlDocument* this_ptr,
        app::String* name,
        app::String* public_id,
        app::String* system_id,
        app::String* internal_subset
    )
    IL2CPP_REGISTER_METHOD(0x0196EEE0, app::XmlDocumentFragment*, CreateDocumentFragment, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0196F0C0, app::XmlElement*, CreateElement_1, app::XmlDocument* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0196F250, void, AddDefaultAttributes, app::XmlDocument* this_ptr, app::XmlElement* elem)
    IL2CPP_REGISTER_METHOD(0x0196F580, app::SchemaElementDecl*, GetSchemaElementDecl, app::XmlDocument* this_ptr, app::XmlElement* elem)
    IL2CPP_REGISTER_METHOD(
        0x0196F7B0,
        app::XmlAttribute*,
        PrepareDefaultAttribute,
        app::XmlDocument* this_ptr,
        app::SchemaAttDef* attdef,
        app::String* attr_prefix,
        app::String* attr_localname,
        app::String* attr_namespace_u_r_i
    )
    IL2CPP_REGISTER_METHOD(0x0196F910, app::XmlEntityReference*, CreateEntityReference, app::XmlDocument* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x0196FA70,
        app::XmlProcessingInstruction*,
        CreateProcessingInstruction,
        app::XmlDocument* this_ptr,
        app::String* target,
        app::String* data
    )
    IL2CPP_REGISTER_METHOD(
        0x0196FBE0,
        app::XmlDeclaration*,
        CreateXmlDeclaration,
        app::XmlDocument* this_ptr,
        app::String* version,
        app::String* encoding,
        app::String* standalone
    )
    IL2CPP_REGISTER_METHOD(0x0196FD60, app::XmlText*, CreateTextNode, app::XmlDocument* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x0196FEC0, app::XmlSignificantWhitespace*, CreateSignificantWhitespace, app::XmlDocument* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01970020, app::XmlWhitespace*, CreateWhitespace, app::XmlDocument* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(
        0x01970180,
        app::XmlAttribute*,
        CreateAttribute_2,
        app::XmlDocument* this_ptr,
        app::String* qualified_name,
        app::String* namespace_u_r_i
    )
    IL2CPP_REGISTER_METHOD(0x01970310, app::XmlElement*, CreateElement_2, app::XmlDocument* this_ptr, app::String* qualified_name, app::String* namespace_u_r_i)
    IL2CPP_REGISTER_METHOD(0x019704A0, app::XmlNode*, ImportNodeInternal, app::XmlDocument* this_ptr, app::XmlNode* node, bool deep)
    IL2CPP_REGISTER_METHOD(0x01970A20, void, ImportAttributes, app::XmlDocument* this_ptr, app::XmlNode* from_elem, app::XmlNode* to_elem)
    IL2CPP_REGISTER_METHOD(0x01970BA0, void, ImportChildren, app::XmlDocument* this_ptr, app::XmlNode* from_node, app::XmlNode* to_node, bool deep)
    IL2CPP_REGISTER_METHOD(0x0195B0F0, app::XmlNameTable*, get_NameTable, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01970C70,
        app::XmlAttribute*,
        CreateAttribute_3,
        app::XmlDocument* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* namespace_u_r_i
    )
    IL2CPP_REGISTER_METHOD(
        0x01970E00,
        app::XmlAttribute*,
        CreateDefaultAttribute,
        app::XmlDocument* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* namespace_u_r_i
    )
    IL2CPP_REGISTER_METHOD(
        0x01970FA0,
        app::XmlElement*,
        CreateElement_3,
        app::XmlDocument* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* namespace_u_r_i
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01971150, app::XmlNamedNodeMap*, get_Entities, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Entities, app::XmlDocument* this_ptr, app::XmlNamedNodeMap* value)
    IL2CPP_REGISTER_METHOD(0x019712A0, bool, get_IsLoading, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019712B0, void, set_IsLoading, app::XmlDocument* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_ActualLoadingStatus, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019712C0, app::XmlNode*, ReadNode, app::XmlDocument* this_ptr, app::XmlReader* reader)
    IL2CPP_REGISTER_METHOD(0x019714D0, app::XmlTextReader*, SetupReader, app::XmlDocument* this_ptr, app::XmlTextReader* tr)
    IL2CPP_REGISTER_METHOD(0x019715D0, void, Load, app::XmlDocument* this_ptr, app::XmlReader* reader)
    IL2CPP_REGISTER_METHOD(0x019717F0, void, LoadXml, app::XmlDocument* this_ptr, app::String* xml)
    IL2CPP_REGISTER_METHOD(0x01971BA0, void, set_InnerText, app::XmlDocument* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01971C10, void, set_InnerXml, app::XmlDocument* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01971C30, void, Save, app::XmlDocument* this_ptr, app::XmlWriter* w)
    IL2CPP_REGISTER_METHOD(0x01971EE0, void, WriteTo, app::XmlDocument* this_ptr, app::XmlWriter* w)
    IL2CPP_REGISTER_METHOD(0x01971F00, void, WriteContentTo, app::XmlDocument* this_ptr, app::XmlWriter* xw)
    IL2CPP_REGISTER_METHOD(
        0x01972180,
        app::XmlNodeChangedEventArgs*,
        GetEventArgs,
        app::XmlDocument* this_ptr,
        app::XmlNode* node,
        app::XmlNode* old_parent,
        app::XmlNode* new_parent,
        app::String* old_value,
        app::String* new_value,
        app::XmlNodeChangedAction__Enum action
    )
    IL2CPP_REGISTER_METHOD(
        0x01972370,
        app::XmlNodeChangedEventArgs*,
        GetInsertEventArgsForLoad,
        app::XmlDocument* this_ptr,
        app::XmlNode* node,
        app::XmlNode* new_parent
    )
    IL2CPP_REGISTER_METHOD(0x01972530, void, BeforeEvent, app::XmlDocument* this_ptr, app::XmlNodeChangedEventArgs* args)
    IL2CPP_REGISTER_METHOD(0x01972580, void, AfterEvent, app::XmlDocument* this_ptr, app::XmlNodeChangedEventArgs* args)
    IL2CPP_REGISTER_METHOD(
        0x019725D0,
        app::XmlAttribute*,
        GetDefaultAttribute,
        app::XmlDocument* this_ptr,
        app::XmlElement* elem,
        app::String* attr_prefix,
        app::String* attr_localname,
        app::String* attr_namespace_u_r_i
    )
    IL2CPP_REGISTER_METHOD(0x019728A0, app::String*, get_Version, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019728D0, app::String*, get_Encoding, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01972900, app::String*, get_Standalone, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01972930, app::XmlEntity*, GetEntityNode, app::XmlDocument* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01972A30, app::IXmlSchemaInfo*, get_SchemaInfo, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBE0, app::String*, get_BaseURI, app::XmlDocument* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBF0, void, SetBaseURI, app::XmlDocument* this_ptr, app::String* in_base_u_r_i)
    IL2CPP_REGISTER_METHOD(0x01972BB0, app::XmlNode*, AppendChildForLoad, app::XmlDocument* this_ptr, app::XmlNode* new_child, app::XmlDocument* doc)
    IL2CPP_REGISTER_METHOD(0x01972DF0, void, cctor, )
} // namespace app::classes::System::Xml::XmlDocument
