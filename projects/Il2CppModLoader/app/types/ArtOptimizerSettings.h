#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArtOptimizerSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArtOptimizerSettings__Class** type_info;
        inline app::ArtOptimizerSettings__Class* get_class() {
            return il2cpp::get_class<app::ArtOptimizerSettings__Class>(type_info, "Moon.ArtOptimization", "ArtOptimizerSettings");
        }
        inline app::ArtOptimizerSettings* create() {
            return il2cpp::create_object<app::ArtOptimizerSettings>(get_class());
        }
    } // namespace ArtOptimizerSettings
} // namespace app::classes::types
