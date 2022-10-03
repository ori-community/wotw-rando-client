#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyTestOutput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HierarchyTestOutput__Class** type_info;
        inline app::HierarchyTestOutput__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTestOutput__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTestOutput");
        }
        inline app::HierarchyTestOutput* create() {
            return il2cpp::create_object<app::HierarchyTestOutput>(get_class());
        }
    } // namespace HierarchyTestOutput
} // namespace app::classes::types
