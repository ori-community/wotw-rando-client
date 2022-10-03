#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyTestBulkTool {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HierarchyTestBulkTool__Class** type_info;
        inline app::HierarchyTestBulkTool__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTestBulkTool__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTestBulkTool");
        }
        inline app::HierarchyTestBulkTool* create() {
            return il2cpp::create_object<app::HierarchyTestBulkTool>(get_class());
        }
    } // namespace HierarchyTestBulkTool
} // namespace app::classes::types
