#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyDebugMenu_CompareType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HierarchyDebugMenu_CompareType__Enum__Class** type_info;
        inline app::HierarchyDebugMenu_CompareType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyDebugMenu_CompareType__Enum__Class>(type_info, "", "HierarchyDebugMenu", "CompareType");
        }
        inline app::HierarchyDebugMenu_CompareType__Enum* create() {
            return il2cpp::create_object<app::HierarchyDebugMenu_CompareType__Enum>(get_class());
        }
    } // namespace HierarchyDebugMenu_CompareType__Enum
} // namespace app::classes::types
