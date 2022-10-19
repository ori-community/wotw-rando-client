#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArtOptimizationDataModel {
        inline app::ArtOptimizationDataModel__Class** type_info = (app::ArtOptimizationDataModel__Class**)(modloader::win::memory::resolve_rva(0x0473CBC8));
        inline app::ArtOptimizationDataModel__Class* get_class() {
            return il2cpp::get_class<app::ArtOptimizationDataModel__Class>(type_info, "Moon.ArtOptimization", "ArtOptimizationDataModel");
        }
        inline app::ArtOptimizationDataModel* create() {
            return il2cpp::create_object<app::ArtOptimizationDataModel>(get_class());
        }
    } // namespace ArtOptimizationDataModel
} // namespace app::classes::types
