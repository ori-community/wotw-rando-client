#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyTestBulkTool {
        inline app::HierarchyTestBulkTool__Class** type_info = (app::HierarchyTestBulkTool__Class**)(modloader::win::memory::resolve_rva(0x047740F8));
        inline app::HierarchyTestBulkTool__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTestBulkTool__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTestBulkTool");
        }
        inline app::HierarchyTestBulkTool* create() {
            return il2cpp::create_object<app::HierarchyTestBulkTool>(get_class());
        }
    } // namespace HierarchyTestBulkTool
} // namespace app::classes::types
