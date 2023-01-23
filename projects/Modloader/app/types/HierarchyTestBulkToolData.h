#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HierarchyTestBulkToolData__Class.h>
#include <Modloader/app/structs/HierarchyTestBulkToolData.h>

namespace app::classes::types {
    namespace HierarchyTestBulkToolData {
        inline app::HierarchyTestBulkToolData__Class** type_info = (app::HierarchyTestBulkToolData__Class**)(modloader::win::memory::resolve_rva(0x04740658));
        inline app::HierarchyTestBulkToolData__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTestBulkToolData__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTestBulkToolData");
        }
        inline app::HierarchyTestBulkToolData* create() {
            return il2cpp::create_object<app::HierarchyTestBulkToolData>(get_class());
        }
    } // namespace HierarchyTestBulkToolData
} // namespace app::classes::types
