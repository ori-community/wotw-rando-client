#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArtOptimizer_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArtOptimizer_c__Class** type_info;
        inline app::ArtOptimizer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ArtOptimizer_c__Class>(type_info, "Moon.ArtOptimization", "ArtOptimizer", "<>c");
        }
        inline app::ArtOptimizer_c* create() {
            return il2cpp::create_object<app::ArtOptimizer_c>(get_class());
        }
    } // namespace ArtOptimizer_c
} // namespace app::classes::types
