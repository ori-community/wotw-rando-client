#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicHierarchyAttribute {
        namespace {
            inline app::DynamicHierarchyAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DynamicHierarchyAttribute__Class** type_info = &type_info_ref;
        inline app::DynamicHierarchyAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicHierarchyAttribute__Class>(type_info, "", "DynamicHierarchyAttribute");
        }
        inline app::DynamicHierarchyAttribute* create() {
            return il2cpp::create_object<app::DynamicHierarchyAttribute>(get_class());
        }
    } // namespace DynamicHierarchyAttribute
} // namespace app::classes::types
