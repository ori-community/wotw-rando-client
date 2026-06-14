#pragma once
#include <Modloader/app/structs/HierarchyTestBulkTool.h>
#include <Modloader/app/structs/HierarchyTestBulkTool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyTestBulkTool {
        inline app::HierarchyTestBulkTool__Class** type_info() {
            static app::HierarchyTestBulkTool__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HierarchyTestBulkTool__Class**)(modloader::win::memory::resolve_rva(0x047740F8));
            }
            return cache;
        }
        inline app::HierarchyTestBulkTool__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTestBulkTool__Class>(type_info(), "Moon.HierarchyPerformanceTest", "HierarchyTestBulkTool");
        }
        inline app::HierarchyTestBulkTool* create() {
            return il2cpp::create_object<app::HierarchyTestBulkTool>(get_class());
        }
    } // namespace HierarchyTestBulkTool
} // namespace app::classes::types
