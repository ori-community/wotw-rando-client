#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PerfTestResult {
        namespace {
            inline app::PerfTestResult__Class* type_info_ref = nullptr;
        }
        inline app::PerfTestResult__Class** type_info = &type_info_ref;
        inline app::PerfTestResult__Class* get_class() {
            return il2cpp::get_class<app::PerfTestResult__Class>(type_info, "Moon.HierarchyPerformanceTest", "PerfTestResult");
        }
        inline app::PerfTestResult* create() {
            return il2cpp::create_object<app::PerfTestResult>(get_class());
        }
    } // namespace PerfTestResult
} // namespace app::classes::types
