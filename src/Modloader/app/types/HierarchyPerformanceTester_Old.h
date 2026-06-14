#pragma once
#include <Modloader/app/structs/HierarchyPerformanceTester_Old.h>
#include <Modloader/app/structs/HierarchyPerformanceTester_Old__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyPerformanceTester_Old {
        inline app::HierarchyPerformanceTester_Old__Class** type_info() {
            static app::HierarchyPerformanceTester_Old__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HierarchyPerformanceTester_Old__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HierarchyPerformanceTester_Old__Class* get_class() {
            return il2cpp::get_class<app::HierarchyPerformanceTester_Old__Class>(type_info(), "Moon.HierarchyPerformanceTest", "HierarchyPerformanceTester_Old");
        }
        inline app::HierarchyPerformanceTester_Old* create() {
            return il2cpp::create_object<app::HierarchyPerformanceTester_Old>(get_class());
        }
    } // namespace HierarchyPerformanceTester_Old
} // namespace app::classes::types
