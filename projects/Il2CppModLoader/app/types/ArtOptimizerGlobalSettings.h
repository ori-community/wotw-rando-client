#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArtOptimizerGlobalSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArtOptimizerGlobalSettings__Class** type_info;
        inline app::ArtOptimizerGlobalSettings__Class* get_class() {
            return il2cpp::get_class<app::ArtOptimizerGlobalSettings__Class>(type_info, "Moon.ArtOptimization", "ArtOptimizerGlobalSettings");
        }
        inline app::ArtOptimizerGlobalSettings* create() {
            return il2cpp::create_object<app::ArtOptimizerGlobalSettings>(get_class());
        }
    } // namespace ArtOptimizerGlobalSettings
} // namespace app::classes::types
