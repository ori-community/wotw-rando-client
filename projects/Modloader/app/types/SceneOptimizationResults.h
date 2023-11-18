#pragma once
#include <Modloader/app/structs/SceneOptimizationResults.h>
#include <Modloader/app/structs/SceneOptimizationResults__Array.h>
#include <Modloader/app/structs/SceneOptimizationResults__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneOptimizationResults {
        inline app::SceneOptimizationResults__Class** type_info() {
            static app::SceneOptimizationResults__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneOptimizationResults__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneOptimizationResults__Class* get_class() {
            return il2cpp::get_class<app::SceneOptimizationResults__Class>(type_info(), "Moon.ArtOptimization", "SceneOptimizationResults");
        }
        inline app::SceneOptimizationResults* create() {
            return il2cpp::create_object<app::SceneOptimizationResults>(get_class());
        }
        inline app::SceneOptimizationResults__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneOptimizationResults__Array>(get_class(), size);
        }
        inline app::SceneOptimizationResults__Array* create_array(const std::vector<app::SceneOptimizationResults*>& items) {
            return il2cpp::array_new<app::SceneOptimizationResults__Array>(get_class(), items);
        }
    } // namespace SceneOptimizationResults
} // namespace app::classes::types
