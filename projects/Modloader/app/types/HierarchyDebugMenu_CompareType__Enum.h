#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyDebugMenu_CompareType__Enum {
        inline app::HierarchyDebugMenu_CompareType__Enum__Class** type_info = (app::HierarchyDebugMenu_CompareType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04724D68));
        inline app::HierarchyDebugMenu_CompareType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyDebugMenu_CompareType__Enum__Class>(type_info, "", "HierarchyDebugMenu", "CompareType");
        }
        inline app::HierarchyDebugMenu_CompareType__Enum* create() {
            return il2cpp::create_object<app::HierarchyDebugMenu_CompareType__Enum>(get_class());
        }
    } // namespace HierarchyDebugMenu_CompareType__Enum
} // namespace app::classes::types
