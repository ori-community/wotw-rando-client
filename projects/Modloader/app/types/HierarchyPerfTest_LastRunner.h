#pragma once
#include <Modloader/app/structs/HierarchyPerfTest_LastRunner.h>
#include <Modloader/app/structs/HierarchyPerfTest_LastRunner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyPerfTest_LastRunner {
        inline app::HierarchyPerfTest_LastRunner__Class** type_info() {
            static app::HierarchyPerfTest_LastRunner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HierarchyPerfTest_LastRunner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HierarchyPerfTest_LastRunner__Class* get_class() {
            return il2cpp::get_class<app::HierarchyPerfTest_LastRunner__Class>(type_info(), "HierarchyPerfTest", "HierarchyPerfTest_LastRunner");
        }
        inline app::HierarchyPerfTest_LastRunner* create() {
            return il2cpp::create_object<app::HierarchyPerfTest_LastRunner>(get_class());
        }
    } // namespace HierarchyPerfTest_LastRunner
} // namespace app::classes::types
