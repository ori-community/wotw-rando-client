#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathNodeRef {
        namespace {
            app::XPathNodeRef__Class* type_info_ref = nullptr;
        }
        app::XPathNodeRef__Class** type_info = &type_info_ref;
        inline app::XPathNodeRef__Class* get_class() {
            return il2cpp::get_class<app::XPathNodeRef__Class>(type_info, "MS.Internal.Xml.Cache", "XPathNodeRef");
        }
        inline app::XPathNodeRef* create() {
            return il2cpp::create_object<app::XPathNodeRef>(get_class());
        }
        inline app::XPathNodeRef__Boxed* box(app::XPathNodeRef value) {
            return il2cpp::box_value<app::XPathNodeRef__Boxed>(get_class(), value);
        }
        inline app::XPathNodeRef__Array* create_array(int size) {
            return il2cpp::array_new<app::XPathNodeRef__Array>(get_class(), size);
        }
    } // namespace XPathNodeRef
} // namespace app::classes::types
