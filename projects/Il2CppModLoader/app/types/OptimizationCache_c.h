#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OptimizationCache_c {
        inline app::OptimizationCache_c__Class** type_info = (app::OptimizationCache_c__Class**)(modloader::win::memory::resolve_rva(0x04738388));
        inline app::OptimizationCache_c__Class* get_class() {
            return il2cpp::get_nested_class<app::OptimizationCache_c__Class>(type_info, "Moon.ArtOptimization", "OptimizationCache", "<>c");
        }
        inline app::OptimizationCache_c* create() {
            return il2cpp::create_object<app::OptimizationCache_c>(get_class());
        }
    } // namespace OptimizationCache_c
} // namespace app::classes::types
