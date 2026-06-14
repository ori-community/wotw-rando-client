#pragma once
#include <Modloader/app/structs/HierarchyTestBulkTool_State__Enum.h>
#include <Modloader/app/structs/HierarchyTestBulkTool_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyTestBulkTool_State__Enum {
        inline app::HierarchyTestBulkTool_State__Enum__Class** type_info() {
            static app::HierarchyTestBulkTool_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HierarchyTestBulkTool_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473CEF8));
            }
            return cache;
        }
        inline app::HierarchyTestBulkTool_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyTestBulkTool_State__Enum__Class>(type_info(), "Moon.HierarchyPerformanceTest", "HierarchyTestBulkTool", "State");
        }
        inline app::HierarchyTestBulkTool_State__Enum* create() {
            return il2cpp::create_object<app::HierarchyTestBulkTool_State__Enum>(get_class());
        }
    } // namespace HierarchyTestBulkTool_State__Enum
} // namespace app::classes::types
