#pragma once
#include <Modloader/app/structs/XPathNodeRef.h>
#include <Modloader/app/structs/XPathNodeRef__Array.h>
#include <Modloader/app/structs/XPathNodeRef__Boxed.h>
#include <Modloader/app/structs/XPathNodeRef__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathNodeRef {
        inline app::XPathNodeRef__Class** type_info() {
            static app::XPathNodeRef__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XPathNodeRef__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XPathNodeRef__Class* get_class() {
            return il2cpp::get_class<app::XPathNodeRef__Class>(type_info(), "MS.Internal.Xml.Cache", "XPathNodeRef");
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
        inline app::XPathNodeRef__Array* create_array(const std::vector<app::XPathNodeRef>& items) {
            return il2cpp::array_new<app::XPathNodeRef__Array>(get_class(), items);
        }
    } // namespace XPathNodeRef
} // namespace app::classes::types
