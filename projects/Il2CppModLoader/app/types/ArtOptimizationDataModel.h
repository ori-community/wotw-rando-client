#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArtOptimizationDataModel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArtOptimizationDataModel__Class** type_info;
        inline app::ArtOptimizationDataModel__Class* get_class() {
            return il2cpp::get_class<app::ArtOptimizationDataModel__Class>(type_info, "Moon.ArtOptimization", "ArtOptimizationDataModel");
        }
        inline app::ArtOptimizationDataModel* create() {
            return il2cpp::create_object<app::ArtOptimizationDataModel>(get_class());
        }
    } // namespace ArtOptimizationDataModel
} // namespace app::classes::types
