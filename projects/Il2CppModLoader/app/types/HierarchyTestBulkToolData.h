#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyTestBulkToolData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HierarchyTestBulkToolData__Class** type_info;
        inline app::HierarchyTestBulkToolData__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTestBulkToolData__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTestBulkToolData");
        }
        inline app::HierarchyTestBulkToolData* create() {
            return il2cpp::create_object<app::HierarchyTestBulkToolData>(get_class());
        }
    } // namespace HierarchyTestBulkToolData
} // namespace app::classes::types
