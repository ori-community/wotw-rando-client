#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OptimizationCache {
        inline app::OptimizationCache__Class** type_info = (app::OptimizationCache__Class**)(modloader::win::memory::resolve_rva(0x04705258));
        inline app::OptimizationCache__Class* get_class() {
            return il2cpp::get_class<app::OptimizationCache__Class>(type_info, "Moon.ArtOptimization", "OptimizationCache");
        }
        inline app::OptimizationCache* create() {
            return il2cpp::create_object<app::OptimizationCache>(get_class());
        }
    } // namespace OptimizationCache
} // namespace app::classes::types
