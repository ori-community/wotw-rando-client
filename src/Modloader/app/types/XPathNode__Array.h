#pragma once
#include <Modloader/app/structs/XPathNode__Array.h>
#include <Modloader/app/structs/XPathNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathNode__Array {
        inline app::XPathNode__Array__Class** type_info() {
            static app::XPathNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XPathNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XPathNode__Array__Class* get_class() {
            return il2cpp::get_class<app::XPathNode__Array__Class>(type_info(), "MS.Internal.Xml.Cache", "XPathNode[]");
        }
        inline app::XPathNode__Array* create() {
            return il2cpp::create_object<app::XPathNode__Array>(get_class());
        }
    } // namespace XPathNode__Array
} // namespace app::classes::types
