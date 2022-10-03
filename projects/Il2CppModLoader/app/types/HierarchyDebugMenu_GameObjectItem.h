#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyDebugMenu_GameObjectItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HierarchyDebugMenu_GameObjectItem__Class** type_info;
        inline app::HierarchyDebugMenu_GameObjectItem__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyDebugMenu_GameObjectItem__Class>(type_info, "", "HierarchyDebugMenu", "GameObjectItem");
        }
        inline app::HierarchyDebugMenu_GameObjectItem* create() {
            return il2cpp::create_object<app::HierarchyDebugMenu_GameObjectItem>(get_class());
        }
        inline app::HierarchyDebugMenu_GameObjectItem__Array* create_array(int size) {
            return il2cpp::array_new<app::HierarchyDebugMenu_GameObjectItem__Array>(get_class(), size);
        }
    } // namespace HierarchyDebugMenu_GameObjectItem
} // namespace app::classes::types
