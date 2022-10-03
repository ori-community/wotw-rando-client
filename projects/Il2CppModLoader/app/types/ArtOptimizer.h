#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArtOptimizer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArtOptimizer__Class** type_info;
        inline app::ArtOptimizer__Class* get_class() {
            return il2cpp::get_class<app::ArtOptimizer__Class>(type_info, "Moon.ArtOptimization", "ArtOptimizer");
        }
        inline app::ArtOptimizer* create() {
            return il2cpp::create_object<app::ArtOptimizer>(get_class());
        }
    } // namespace ArtOptimizer
} // namespace app::classes::types
