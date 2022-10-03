#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PerfTestResult {
        namespace {
            app::PerfTestResult__Class* type_info_ref = nullptr;
        }
        app::PerfTestResult__Class** type_info = &type_info_ref;
        inline app::PerfTestResult__Class* get_class() {
            return il2cpp::get_class<app::PerfTestResult__Class>(type_info, "Moon.HierarchyPerformanceTest", "PerfTestResult");
        }
        inline app::PerfTestResult* create() {
            return il2cpp::create_object<app::PerfTestResult>(get_class());
        }
    } // namespace PerfTestResult
} // namespace app::classes::types
