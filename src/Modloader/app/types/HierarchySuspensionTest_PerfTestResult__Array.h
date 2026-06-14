#pragma once
#include <Modloader/app/structs/HierarchySuspensionTest_PerfTestResult__Array.h>
#include <Modloader/app/structs/HierarchySuspensionTest_PerfTestResult__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchySuspensionTest_PerfTestResult__Array {
        inline app::HierarchySuspensionTest_PerfTestResult__Array__Class** type_info() {
            static app::HierarchySuspensionTest_PerfTestResult__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HierarchySuspensionTest_PerfTestResult__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HierarchySuspensionTest_PerfTestResult__Array__Class* get_class() {
            return il2cpp::get_class<app::HierarchySuspensionTest_PerfTestResult__Array__Class>(type_info(), "", "HierarchySuspensionTest+PerfTestResult[]");
        }
        inline app::HierarchySuspensionTest_PerfTestResult__Array* create() {
            return il2cpp::create_object<app::HierarchySuspensionTest_PerfTestResult__Array>(get_class());
        }
    } // namespace HierarchySuspensionTest_PerfTestResult__Array
} // namespace app::classes::types
