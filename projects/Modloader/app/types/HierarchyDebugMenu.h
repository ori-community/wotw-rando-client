#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HierarchyDebugMenu__Class.h>
#include <Modloader/app/structs/HierarchyDebugMenu.h>

namespace app::classes::types {
    namespace HierarchyDebugMenu {
        inline app::HierarchyDebugMenu__Class** type_info = (app::HierarchyDebugMenu__Class**)(modloader::win::memory::resolve_rva(0x047762C8));
        inline app::HierarchyDebugMenu__Class* get_class() {
            return il2cpp::get_class<app::HierarchyDebugMenu__Class>(type_info, "", "HierarchyDebugMenu");
        }
        inline app::HierarchyDebugMenu* create() {
            return il2cpp::create_object<app::HierarchyDebugMenu>(get_class());
        }
    } // namespace HierarchyDebugMenu
} // namespace app::classes::types
