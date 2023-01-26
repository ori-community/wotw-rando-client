#pragma once
#include <Modloader/app/structs/DynamicHierarchyAttribute.h>
#include <Modloader/app/structs/DynamicHierarchyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicHierarchyAttribute {
        inline app::DynamicHierarchyAttribute__Class** type_info() {
            static app::DynamicHierarchyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicHierarchyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicHierarchyAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicHierarchyAttribute__Class>(type_info(), "", "DynamicHierarchyAttribute");
        }
        inline app::DynamicHierarchyAttribute* create() {
            return il2cpp::create_object<app::DynamicHierarchyAttribute>(get_class());
        }
    } // namespace DynamicHierarchyAttribute
} // namespace app::classes::types
