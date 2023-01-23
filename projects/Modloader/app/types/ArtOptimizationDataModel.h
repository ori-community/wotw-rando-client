#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArtOptimizationDataModel__Class.h>
#include <Modloader/app/structs/ArtOptimizationDataModel.h>

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
