#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicHierarchyAttribute {
        namespace {
            app::DynamicHierarchyAttribute__Class* type_info_ref = nullptr;
        }
        app::DynamicHierarchyAttribute__Class** type_info = &type_info_ref;
        inline app::DynamicHierarchyAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicHierarchyAttribute__Class>(type_info, "", "DynamicHierarchyAttribute");
        }
        inline app::DynamicHierarchyAttribute* create() {
            return il2cpp::create_object<app::DynamicHierarchyAttribute>(get_class());
        }
    } // namespace DynamicHierarchyAttribute
} // namespace app::classes::types
