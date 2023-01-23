#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlDocumentType.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlNamedNodeMap.h>
#include <Modloader/app/structs/XmlWriter.h>
#include <Modloader/app/structs/SchemaInfo.h>

namespace app::classes::System::Xml::XmlDocumentType {
    IL2CPP_REGISTER_METHOD(0x01DAB6F0, void, ctor, (app::XmlDocumentType * this_ptr, app::String* name, app::String* public_id, app::String* system_id, app::String* internal_subset, app::XmlDocument* doc))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Name, (app::XmlDocumentType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_LocalName, (app::XmlDocumentType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008556D0, app::XmlNodeType__Enum, get_NodeType, (app::XmlDocumentType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DAB8D0, app::XmlNode*, CloneNode, (app::XmlDocumentType * this_ptr, bool deep))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::XmlDocumentType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DAB930, app::XmlNamedNodeMap*, get_Entities, (app::XmlDocumentType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DABA80, app::XmlNamedNodeMap*, get_Notations, (app::XmlDocumentType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_PublicId, (app::XmlDocumentType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_SystemId, (app::XmlDocumentType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_InternalSubset, (app::XmlDocumentType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_ParseWithNamespaces, (app::XmlDocumentType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DABBD0, void, WriteTo, (app::XmlDocumentType * this_ptr, app::XmlWriter* w))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (app::XmlDocumentType * this_ptr, app::XmlWriter* w))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::SchemaInfo*, get_DtdSchemaInfo, (app::XmlDocumentType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_DtdSchemaInfo, (app::XmlDocumentType * this_ptr, app::SchemaInfo* value))
} // namespace app::classes::System::Xml::XmlDocumentType
