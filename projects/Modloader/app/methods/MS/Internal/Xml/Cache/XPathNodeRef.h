#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MS::Internal::Xml::Cache::XPathNodeRef {
    IL2CPP_REGISTER_METHOD(0x0011D2D0, void, ctor, (app::XPathNodeRef__Boxed * this_ptr, app::XPathNode__Array* page, int32_t idx))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::XPathNode__Array*, get_Page, (app::XPathNodeRef__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_Index, (app::XPathNodeRef__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DE540, int32_t, GetHashCode, (app::XPathNodeRef__Boxed * this_ptr))
} // namespace app::classes::MS::Internal::Xml::Cache::XPathNodeRef
