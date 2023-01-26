#pragma once
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem__Array.h>
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyDebugMenu_GameObjectItem__Array {
        inline app::HierarchyDebugMenu_GameObjectItem__Array__Class** type_info() {
            static app::HierarchyDebugMenu_GameObjectItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HierarchyDebugMenu_GameObjectItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HierarchyDebugMenu_GameObjectItem__Array__Class* get_class() {
            return il2cpp::get_class<app::HierarchyDebugMenu_GameObjectItem__Array__Class>(type_info(), "", "HierarchyDebugMenu+GameObjectItem[]");
        }
        inline app::HierarchyDebugMenu_GameObjectItem__Array* create() {
            return il2cpp::create_object<app::HierarchyDebugMenu_GameObjectItem__Array>(get_class());
        }
    } // namespace HierarchyDebugMenu_GameObjectItem__Array
} // namespace app::classes::types
