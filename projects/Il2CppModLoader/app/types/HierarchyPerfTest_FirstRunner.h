#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyPerfTest_FirstRunner {
        namespace {
            inline app::HierarchyPerfTest_FirstRunner__Class* type_info_ref = nullptr;
        }
        inline app::HierarchyPerfTest_FirstRunner__Class** type_info = &type_info_ref;
        inline app::HierarchyPerfTest_FirstRunner__Class* get_class() {
            return il2cpp::get_class<app::HierarchyPerfTest_FirstRunner__Class>(type_info, "HierarchyPerfTest", "HierarchyPerfTest_FirstRunner");
        }
        inline app::HierarchyPerfTest_FirstRunner* create() {
            return il2cpp::create_object<app::HierarchyPerfTest_FirstRunner>(get_class());
        }
    } // namespace HierarchyPerfTest_FirstRunner
} // namespace app::classes::types
