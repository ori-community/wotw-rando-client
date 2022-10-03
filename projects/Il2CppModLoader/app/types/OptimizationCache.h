#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OptimizationCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OptimizationCache__Class** type_info;
        inline app::OptimizationCache__Class* get_class() {
            return il2cpp::get_class<app::OptimizationCache__Class>(type_info, "Moon.ArtOptimization", "OptimizationCache");
        }
        inline app::OptimizationCache* create() {
            return il2cpp::create_object<app::OptimizationCache>(get_class());
        }
    } // namespace OptimizationCache
} // namespace app::classes::types
