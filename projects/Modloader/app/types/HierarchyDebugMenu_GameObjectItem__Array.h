#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem__Array__Class.h>
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem__Array.h>

namespace app::classes::types {
    namespace HierarchyDebugMenu_GameObjectItem__Array {
        namespace {
            inline app::HierarchyDebugMenu_GameObjectItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::HierarchyDebugMenu_GameObjectItem__Array__Class** type_info = &type_info_ref;
        inline app::HierarchyDebugMenu_GameObjectItem__Array__Class* get_class() {
            return il2cpp::get_class<app::HierarchyDebugMenu_GameObjectItem__Array__Class>(type_info, "", "HierarchyDebugMenu+GameObjectItem[]");
        }
        inline app::HierarchyDebugMenu_GameObjectItem__Array* create() {
            return il2cpp::create_object<app::HierarchyDebugMenu_GameObjectItem__Array>(get_class());
        }
    } // namespace HierarchyDebugMenu_GameObjectItem__Array
} // namespace app::classes::types
