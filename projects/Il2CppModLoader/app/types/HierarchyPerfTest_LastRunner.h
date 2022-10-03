#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyPerfTest_LastRunner {
        namespace {
            app::HierarchyPerfTest_LastRunner__Class* type_info_ref = nullptr;
        }
        app::HierarchyPerfTest_LastRunner__Class** type_info = &type_info_ref;
        inline app::HierarchyPerfTest_LastRunner__Class* get_class() {
            return il2cpp::get_class<app::HierarchyPerfTest_LastRunner__Class>(type_info, "HierarchyPerfTest", "HierarchyPerfTest_LastRunner");
        }
        inline app::HierarchyPerfTest_LastRunner* create() {
            return il2cpp::create_object<app::HierarchyPerfTest_LastRunner>(get_class());
        }
    } // namespace HierarchyPerfTest_LastRunner
} // namespace app::classes::types
