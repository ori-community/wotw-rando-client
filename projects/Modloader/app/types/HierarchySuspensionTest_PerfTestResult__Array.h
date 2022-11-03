#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchySuspensionTest_PerfTestResult__Array {
        namespace {
            inline app::HierarchySuspensionTest_PerfTestResult__Array__Class* type_info_ref = nullptr;
        }
        inline app::HierarchySuspensionTest_PerfTestResult__Array__Class** type_info = &type_info_ref;
        inline app::HierarchySuspensionTest_PerfTestResult__Array__Class* get_class() {
            return il2cpp::get_class<app::HierarchySuspensionTest_PerfTestResult__Array__Class>(type_info, "", "HierarchySuspensionTest+PerfTestResult[]");
        }
        inline app::HierarchySuspensionTest_PerfTestResult__Array* create() {
            return il2cpp::create_object<app::HierarchySuspensionTest_PerfTestResult__Array>(get_class());
        }
    } // namespace HierarchySuspensionTest_PerfTestResult__Array
} // namespace app::classes::types
