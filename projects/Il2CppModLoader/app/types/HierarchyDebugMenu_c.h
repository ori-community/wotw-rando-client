#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyDebugMenu_c {
        inline app::HierarchyDebugMenu_c__Class** type_info = (app::HierarchyDebugMenu_c__Class**)(modloader::win::memory::resolve_rva(0x04762588));
        inline app::HierarchyDebugMenu_c__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyDebugMenu_c__Class>(type_info, "", "HierarchyDebugMenu", "<>c");
        }
        inline app::HierarchyDebugMenu_c* create() {
            return il2cpp::create_object<app::HierarchyDebugMenu_c>(get_class());
        }
    } // namespace HierarchyDebugMenu_c
} // namespace app::classes::types
