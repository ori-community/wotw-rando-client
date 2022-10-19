#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyTestBulkTool_State__Enum {
        inline app::HierarchyTestBulkTool_State__Enum__Class** type_info = (app::HierarchyTestBulkTool_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473CEF8));
        inline app::HierarchyTestBulkTool_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyTestBulkTool_State__Enum__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTestBulkTool", "State");
        }
        inline app::HierarchyTestBulkTool_State__Enum* create() {
            return il2cpp::create_object<app::HierarchyTestBulkTool_State__Enum>(get_class());
        }
    } // namespace HierarchyTestBulkTool_State__Enum
} // namespace app::classes::types
