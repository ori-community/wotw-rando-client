#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyDebugMenuPage {
        namespace {
            inline app::HierarchyDebugMenuPage__Class* type_info_ref = nullptr;
        }
        inline app::HierarchyDebugMenuPage__Class** type_info = &type_info_ref;
        inline app::HierarchyDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::HierarchyDebugMenuPage__Class>(type_info, "", "HierarchyDebugMenuPage");
        }
        inline app::HierarchyDebugMenuPage* create() {
            return il2cpp::create_object<app::HierarchyDebugMenuPage>(get_class());
        }
    } // namespace HierarchyDebugMenuPage
} // namespace app::classes::types
