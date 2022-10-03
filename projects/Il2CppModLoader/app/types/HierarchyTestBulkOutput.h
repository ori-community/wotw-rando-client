#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyTestBulkOutput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HierarchyTestBulkOutput__Class** type_info;
        inline app::HierarchyTestBulkOutput__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTestBulkOutput__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTestBulkOutput");
        }
        inline app::HierarchyTestBulkOutput* create() {
            return il2cpp::create_object<app::HierarchyTestBulkOutput>(get_class());
        }
    } // namespace HierarchyTestBulkOutput
} // namespace app::classes::types
