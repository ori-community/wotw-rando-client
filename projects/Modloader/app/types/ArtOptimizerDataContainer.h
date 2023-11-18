#pragma once
#include <Modloader/app/structs/ArtOptimizerDataContainer.h>
#include <Modloader/app/structs/ArtOptimizerDataContainer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtOptimizerDataContainer {
        inline app::ArtOptimizerDataContainer__Class** type_info() {
            static app::ArtOptimizerDataContainer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArtOptimizerDataContainer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArtOptimizerDataContainer__Class* get_class() {
            return il2cpp::get_class<app::ArtOptimizerDataContainer__Class>(type_info(), "Moon.ArtOptimization", "ArtOptimizerDataContainer");
        }
        inline app::ArtOptimizerDataContainer* create() {
            return il2cpp::create_object<app::ArtOptimizerDataContainer>(get_class());
        }
    } // namespace ArtOptimizerDataContainer
} // namespace app::classes::types
