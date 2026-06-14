#pragma once
#include <Modloader/app/structs/PerfTestResult.h>
#include <Modloader/app/structs/PerfTestResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerfTestResult {
        inline app::PerfTestResult__Class** type_info() {
            static app::PerfTestResult__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PerfTestResult__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PerfTestResult__Class* get_class() {
            return il2cpp::get_class<app::PerfTestResult__Class>(type_info(), "Moon.HierarchyPerformanceTest", "PerfTestResult");
        }
        inline app::PerfTestResult* create() {
            return il2cpp::create_object<app::PerfTestResult>(get_class());
        }
    } // namespace PerfTestResult
} // namespace app::classes::types
