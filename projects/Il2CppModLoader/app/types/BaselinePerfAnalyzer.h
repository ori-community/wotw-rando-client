#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaselinePerfAnalyzer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BaselinePerfAnalyzer__Class** type_info;
        inline app::BaselinePerfAnalyzer__Class* get_class() {
            return il2cpp::get_class<app::BaselinePerfAnalyzer__Class>(type_info, "Moon.HierarchyPerformanceTest", "BaselinePerfAnalyzer");
        }
        inline app::BaselinePerfAnalyzer* create() {
            return il2cpp::create_object<app::BaselinePerfAnalyzer>(get_class());
        }
    } // namespace BaselinePerfAnalyzer
} // namespace app::classes::types
