#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyTester {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HierarchyTester__Class** type_info;
        inline app::HierarchyTester__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTester__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTester");
        }
        inline app::HierarchyTester* create() {
            return il2cpp::create_object<app::HierarchyTester>(get_class());
        }
    } // namespace HierarchyTester
} // namespace app::classes::types
