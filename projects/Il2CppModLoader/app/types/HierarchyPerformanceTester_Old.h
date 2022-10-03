#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyPerformanceTester_Old {
        namespace {
            app::HierarchyPerformanceTester_Old__Class* type_info_ref = nullptr;
        }
        app::HierarchyPerformanceTester_Old__Class** type_info = &type_info_ref;
        inline app::HierarchyPerformanceTester_Old__Class* get_class() {
            return il2cpp::get_class<app::HierarchyPerformanceTester_Old__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyPerformanceTester_Old");
        }
        inline app::HierarchyPerformanceTester_Old* create() {
            return il2cpp::create_object<app::HierarchyPerformanceTester_Old>(get_class());
        }
    } // namespace HierarchyPerformanceTester_Old
} // namespace app::classes::types
