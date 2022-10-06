#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathNode {
        namespace {
            app::XPathNode__Class* type_info_ref = nullptr;
        }
        app::XPathNode__Class** type_info = &type_info_ref;
        inline app::XPathNode__Class* get_class() {
            return il2cpp::get_class<app::XPathNode__Class>(type_info, "MS.Internal.Xml.Cache", "XPathNode");
        }
        inline app::XPathNode* create() {
            return il2cpp::create_object<app::XPathNode>(get_class());
        }
        inline app::XPathNode__Boxed* box(app::XPathNode value) {
            return il2cpp::box_value<app::XPathNode__Boxed>(get_class(), value);
        }
        inline app::XPathNode__Array* create_array(int size) {
            return il2cpp::array_new<app::XPathNode__Array>(get_class(), size);
        }
        inline app::XPathNode__Array* create_array(const std::vector<app::XPathNode__Boxed>& items) {
            return il2cpp::array_new<app::XPathNode__Array>(get_class(), items);
        }
    } // namespace XPathNode
} // namespace app::classes::types
