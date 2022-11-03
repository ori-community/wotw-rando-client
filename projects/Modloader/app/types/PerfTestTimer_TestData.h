#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PerfTestTimer_TestData {
        inline app::PerfTestTimer_TestData__Class** type_info = (app::PerfTestTimer_TestData__Class**)(modloader::win::memory::resolve_rva(0x04717CE0));
        inline app::PerfTestTimer_TestData__Class* get_class() {
            return il2cpp::get_nested_class<app::PerfTestTimer_TestData__Class>(type_info, "HierarchyPerfTest", "PerfTestTimer", "TestData");
        }
        inline app::PerfTestTimer_TestData* create() {
            return il2cpp::create_object<app::PerfTestTimer_TestData>(get_class());
        }
        inline app::PerfTestTimer_TestData__Array* create_array(int size) {
            return il2cpp::array_new<app::PerfTestTimer_TestData__Array>(get_class(), size);
        }
        inline app::PerfTestTimer_TestData__Array* create_array(const std::vector<app::PerfTestTimer_TestData*>& items) {
            return il2cpp::array_new<app::PerfTestTimer_TestData__Array>(get_class(), items);
        }
    } // namespace PerfTestTimer_TestData
} // namespace app::classes::types
