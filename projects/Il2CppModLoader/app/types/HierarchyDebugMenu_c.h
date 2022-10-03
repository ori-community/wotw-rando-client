#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyDebugMenu_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HierarchyDebugMenu_c__Class** type_info;
        inline app::HierarchyDebugMenu_c__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyDebugMenu_c__Class>(type_info, "", "HierarchyDebugMenu", "<>c");
        }
        inline app::HierarchyDebugMenu_c* create() {
            return il2cpp::create_object<app::HierarchyDebugMenu_c>(get_class());
        }
    } // namespace HierarchyDebugMenu_c
} // namespace app::classes::types
