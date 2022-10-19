#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyTester {
        inline app::HierarchyTester__Class** type_info = (app::HierarchyTester__Class**)(modloader::win::memory::resolve_rva(0x047597A0));
        inline app::HierarchyTester__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTester__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTester");
        }
        inline app::HierarchyTester* create() {
            return il2cpp::create_object<app::HierarchyTester>(get_class());
        }
    } // namespace HierarchyTester
} // namespace app::classes::types
