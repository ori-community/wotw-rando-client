#pragma once
#include <Modloader/app/structs/HierarchyTestBulkOutput.h>
#include <Modloader/app/structs/HierarchyTestBulkOutput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyTestBulkOutput {
        inline app::HierarchyTestBulkOutput__Class** type_info() {
            static app::HierarchyTestBulkOutput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HierarchyTestBulkOutput__Class**)(modloader::win::memory::resolve_rva(0x04723478));
            }
            return cache;
        }
        inline app::HierarchyTestBulkOutput__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTestBulkOutput__Class>(type_info(), "Moon.HierarchyPerformanceTest", "HierarchyTestBulkOutput");
        }
        inline app::HierarchyTestBulkOutput* create() {
            return il2cpp::create_object<app::HierarchyTestBulkOutput>(get_class());
        }
    } // namespace HierarchyTestBulkOutput
} // namespace app::classes::types
