#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyTestBulkOutput {
        inline app::HierarchyTestBulkOutput__Class** type_info = (app::HierarchyTestBulkOutput__Class**)(modloader::win::memory::resolve_rva(0x04723478));
        inline app::HierarchyTestBulkOutput__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTestBulkOutput__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTestBulkOutput");
        }
        inline app::HierarchyTestBulkOutput* create() {
            return il2cpp::create_object<app::HierarchyTestBulkOutput>(get_class());
        }
    } // namespace HierarchyTestBulkOutput
} // namespace app::classes::types
