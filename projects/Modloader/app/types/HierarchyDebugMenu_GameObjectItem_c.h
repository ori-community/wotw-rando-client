#pragma once
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem_c.h>
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyDebugMenu_GameObjectItem_c {
        inline app::HierarchyDebugMenu_GameObjectItem_c__Class** type_info() {
            static app::HierarchyDebugMenu_GameObjectItem_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HierarchyDebugMenu_GameObjectItem_c__Class**)(modloader::win::memory::resolve_rva(0x0472F058));
            }
            return cache;
        }
        inline app::HierarchyDebugMenu_GameObjectItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyDebugMenu_GameObjectItem_c__Class>(type_info(), "", "HierarchyDebugMenu+GameObjectItem", "<>c");
        }
        inline app::HierarchyDebugMenu_GameObjectItem_c* create() {
            return il2cpp::create_object<app::HierarchyDebugMenu_GameObjectItem_c>(get_class());
        }
    } // namespace HierarchyDebugMenu_GameObjectItem_c
} // namespace app::classes::types
