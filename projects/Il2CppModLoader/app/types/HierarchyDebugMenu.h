#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyDebugMenu {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HierarchyDebugMenu__Class** type_info;
        inline app::HierarchyDebugMenu__Class* get_class() {
            return il2cpp::get_class<app::HierarchyDebugMenu__Class>(type_info, "", "HierarchyDebugMenu");
        }
        inline app::HierarchyDebugMenu* create() {
            return il2cpp::create_object<app::HierarchyDebugMenu>(get_class());
        }
    } // namespace HierarchyDebugMenu
} // namespace app::classes::types
