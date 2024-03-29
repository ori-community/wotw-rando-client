#pragma once
#include <Modloader/app/structs/XPathNode.h>
#include <Modloader/app/structs/XPathNode__Array.h>
#include <Modloader/app/structs/XPathNode__Boxed.h>
#include <Modloader/app/structs/XPathNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathNode {
        inline app::XPathNode__Class** type_info() {
            static app::XPathNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XPathNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XPathNode__Class* get_class() {
            return il2cpp::get_class<app::XPathNode__Class>(type_info(), "MS.Internal.Xml.Cache", "XPathNode");
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
        inline app::XPathNode__Array* create_array(const std::vector<app::XPathNode>& items) {
            return il2cpp::array_new<app::XPathNode__Array>(get_class(), items);
        }
    } // namespace XPathNode
} // namespace app::classes::types
