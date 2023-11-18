#pragma once
#include <Modloader/app/structs/XPathNodeRef__Array.h>
#include <Modloader/app/structs/XPathNodeRef__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathNodeRef__Array {
        inline app::XPathNodeRef__Array__Class** type_info() {
            static app::XPathNodeRef__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XPathNodeRef__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XPathNodeRef__Array__Class* get_class() {
            return il2cpp::get_class<app::XPathNodeRef__Array__Class>(type_info(), "MS.Internal.Xml.Cache", "XPathNodeRef[]");
        }
        inline app::XPathNodeRef__Array* create() {
            return il2cpp::create_object<app::XPathNodeRef__Array>(get_class());
        }
    } // namespace XPathNodeRef__Array
} // namespace app::classes::types
