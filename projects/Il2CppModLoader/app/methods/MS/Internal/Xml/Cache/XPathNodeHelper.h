#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MS::Internal::Xml::Cache::XPathNodeHelper {
    IL2CPP_REGISTER_METHOD(0x021D8020, int32_t, GetLocalNamespaces, (app::XPathNode__Array * page_elem, int32_t idx_elem, app::XPathNode__Array** page_nmsp))
    IL2CPP_REGISTER_METHOD(0x021D80B0, int32_t, GetInScopeNamespaces, (app::XPathNode__Array * page_elem, int32_t idx_elem, app::XPathNode__Array** page_nmsp))
    IL2CPP_REGISTER_METHOD(0x021D81D0, bool, GetParent, (app::XPathNode__Array * *page_node, int32_t* idx_node))
    IL2CPP_REGISTER_METHOD(0x021D8240, int32_t, GetLocation, (app::XPathNode__Array * page_node, int32_t idx_node))
    IL2CPP_REGISTER_METHOD(0x021D82A0, bool, GetTextFollowing, (app::XPathNode__Array * *page_current, int32_t* idx_current, app::XPathNode__Array* page_end, int32_t idx_end))
    IL2CPP_REGISTER_METHOD(0x021D8470, bool, GetNonDescendant, (app::XPathNode__Array * *page_node, int32_t* idx_node))
} // namespace app::classes::MS::Internal::Xml::Cache::XPathNodeHelper
