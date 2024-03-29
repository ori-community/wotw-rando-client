#pragma once
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem.h>
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem__Array.h>
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyDebugMenu_GameObjectItem {
        inline app::HierarchyDebugMenu_GameObjectItem__Class** type_info() {
            static app::HierarchyDebugMenu_GameObjectItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HierarchyDebugMenu_GameObjectItem__Class**)(modloader::win::memory::resolve_rva(0x047897A8));
            }
            return cache;
        }
        inline app::HierarchyDebugMenu_GameObjectItem__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyDebugMenu_GameObjectItem__Class>(type_info(), "", "HierarchyDebugMenu", "GameObjectItem");
        }
        inline app::HierarchyDebugMenu_GameObjectItem* create() {
            return il2cpp::create_object<app::HierarchyDebugMenu_GameObjectItem>(get_class());
        }
        inline app::HierarchyDebugMenu_GameObjectItem__Array* create_array(int size) {
            return il2cpp::array_new<app::HierarchyDebugMenu_GameObjectItem__Array>(get_class(), size);
        }
        inline app::HierarchyDebugMenu_GameObjectItem__Array* create_array(const std::vector<app::HierarchyDebugMenu_GameObjectItem*>& items) {
            return il2cpp::array_new<app::HierarchyDebugMenu_GameObjectItem__Array>(get_class(), items);
        }
    } // namespace HierarchyDebugMenu_GameObjectItem
} // namespace app::classes::types
