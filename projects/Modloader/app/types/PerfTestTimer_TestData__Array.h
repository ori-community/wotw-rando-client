#pragma once
#include <Modloader/app/structs/PerfTestTimer_TestData__Array.h>
#include <Modloader/app/structs/PerfTestTimer_TestData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerfTestTimer_TestData__Array {
        inline app::PerfTestTimer_TestData__Array__Class** type_info() {
            static app::PerfTestTimer_TestData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PerfTestTimer_TestData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PerfTestTimer_TestData__Array__Class* get_class() {
            return il2cpp::get_class<app::PerfTestTimer_TestData__Array__Class>(type_info(), "HierarchyPerfTest", "PerfTestTimer+TestData[]");
        }
        inline app::PerfTestTimer_TestData__Array* create() {
            return il2cpp::create_object<app::PerfTestTimer_TestData__Array>(get_class());
        }
    } // namespace PerfTestTimer_TestData__Array
} // namespace app::classes::types
