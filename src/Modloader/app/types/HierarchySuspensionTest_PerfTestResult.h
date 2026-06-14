#pragma once
#include <Modloader/app/structs/HierarchySuspensionTest_PerfTestResult.h>
#include <Modloader/app/structs/HierarchySuspensionTest_PerfTestResult__Array.h>
#include <Modloader/app/structs/HierarchySuspensionTest_PerfTestResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchySuspensionTest_PerfTestResult {
        inline app::HierarchySuspensionTest_PerfTestResult__Class** type_info() {
            static app::HierarchySuspensionTest_PerfTestResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HierarchySuspensionTest_PerfTestResult__Class**)(modloader::win::memory::resolve_rva(0x04752428));
            }
            return cache;
        }
        inline app::HierarchySuspensionTest_PerfTestResult__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchySuspensionTest_PerfTestResult__Class>(type_info(), "", "HierarchySuspensionTest", "PerfTestResult");
        }
        inline app::HierarchySuspensionTest_PerfTestResult* create() {
            return il2cpp::create_object<app::HierarchySuspensionTest_PerfTestResult>(get_class());
        }
        inline app::HierarchySuspensionTest_PerfTestResult__Array* create_array(int size) {
            return il2cpp::array_new<app::HierarchySuspensionTest_PerfTestResult__Array>(get_class(), size);
        }
        inline app::HierarchySuspensionTest_PerfTestResult__Array* create_array(const std::vector<app::HierarchySuspensionTest_PerfTestResult*>& items) {
            return il2cpp::array_new<app::HierarchySuspensionTest_PerfTestResult__Array>(get_class(), items);
        }
    } // namespace HierarchySuspensionTest_PerfTestResult
} // namespace app::classes::types
