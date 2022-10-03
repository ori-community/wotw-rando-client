#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OptimizationCache_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OptimizationCache_c__Class** type_info;
        inline app::OptimizationCache_c__Class* get_class() {
            return il2cpp::get_nested_class<app::OptimizationCache_c__Class>(type_info, "Moon.ArtOptimization", "OptimizationCache", "<>c");
        }
        inline app::OptimizationCache_c* create() {
            return il2cpp::create_object<app::OptimizationCache_c>(get_class());
        }
    } // namespace OptimizationCache_c
} // namespace app::classes::types
