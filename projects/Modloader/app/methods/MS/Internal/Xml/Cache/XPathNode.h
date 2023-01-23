#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XPathNodeType__Enum.h>
#include <Modloader/app/structs/XPathNode__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XPathDocument.h>
#include <Modloader/app/structs/XPathNodePageInfo.h>
#include <Modloader/app/structs/XPathNode__Array.h>

namespace app::classes::MS::Internal::Xml::Cache::XPathNode {
    IL2CPP_REGISTER_METHOD(0x001DE330, app::XPathNodeType__Enum, get_NodeType, (app::XPathNode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE340, app::String*, get_Prefix, (app::XPathNode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE360, app::String*, get_LocalName, (app::XPathNode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE380, app::String*, get_Name, (app::XPathNode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE390, app::String*, get_NamespaceUri, (app::XPathNode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE3B0, app::XPathDocument*, get_Document, (app::XPathNode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE3D0, int32_t, get_LineNumber, (app::XPathNode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE400, int32_t, get_LinePosition, (app::XPathNode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE420, int32_t, get_CollapsedLinePosition, (app::XPathNode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE450, app::XPathNodePageInfo*, get_PageInfo, (app::XPathNode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE470, int32_t, GetParent, (app::XPathNode__Boxed * this_ptr, app::XPathNode__Array** page_node))
    IL2CPP_REGISTER_METHOD(0x001DE4A0, int32_t, GetSibling, (app::XPathNode__Boxed * this_ptr, app::XPathNode__Array** page_node))
    IL2CPP_REGISTER_METHOD(0x001DE4D0, bool, get_IsXmlNamespaceNode, (app::XPathNode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE4E0, bool, get_HasSibling, (app::XPathNode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE4F0, bool, get_HasCollapsedText, (app::XPathNode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE500, bool, get_IsText, (app::XPathNode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE510, bool, get_HasNamespaceDecls, (app::XPathNode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C30, app::String*, get_Value, (app::XPathNode__Boxed * this_ptr))
} // namespace app::classes::MS::Internal::Xml::Cache::XPathNode
