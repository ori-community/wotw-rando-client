#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MS::Internal::Xml::Cache::XPathNodeInfoAtom {
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XPathNodePageInfo*, get_PageInfo, (app::XPathNodeInfoAtom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_LocalName, (app::XPathNodeInfoAtom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_NamespaceUri, (app::XPathNodeInfoAtom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Prefix, (app::XPathNodeInfoAtom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::XPathNode__Array*, get_SiblingPage, (app::XPathNodeInfoAtom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::XPathNode__Array*, get_ParentPage, (app::XPathNodeInfoAtom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::XPathDocument*, get_Document, (app::XPathNodeInfoAtom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_LineNumberBase, (app::XPathNodeInfoAtom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FDCE0, int32_t, get_LinePositionBase, (app::XPathNodeInfoAtom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021D8550, int32_t, GetHashCode, (app::XPathNodeInfoAtom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021D8670, bool, Equals, (app::XPathNodeInfoAtom * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x021D87B0, app::String*, ToString, (app::XPathNodeInfoAtom * this_ptr))
} // namespace app::classes::MS::Internal::Xml::Cache::XPathNodeInfoAtom
