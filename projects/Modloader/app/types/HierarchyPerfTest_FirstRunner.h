#pragma once
#include <Modloader/app/structs/HierarchyPerfTest_FirstRunner.h>
#include <Modloader/app/structs/HierarchyPerfTest_FirstRunner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyPerfTest_FirstRunner {
        inline app::HierarchyPerfTest_FirstRunner__Class** type_info() {
            static app::HierarchyPerfTest_FirstRunner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HierarchyPerfTest_FirstRunner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HierarchyPerfTest_FirstRunner__Class* get_class() {
            return il2cpp::get_class<app::HierarchyPerfTest_FirstRunner__Class>(type_info(), "HierarchyPerfTest", "HierarchyPerfTest_FirstRunner");
        }
        inline app::HierarchyPerfTest_FirstRunner* create() {
            return il2cpp::create_object<app::HierarchyPerfTest_FirstRunner>(get_class());
        }
    } // namespace HierarchyPerfTest_FirstRunner
} // namespace app::classes::types
