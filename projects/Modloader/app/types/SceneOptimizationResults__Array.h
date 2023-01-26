#pragma once
#include <Modloader/app/structs/SceneOptimizationResults__Array.h>
#include <Modloader/app/structs/SceneOptimizationResults__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneOptimizationResults__Array {
        inline app::SceneOptimizationResults__Array__Class** type_info() {
            static app::SceneOptimizationResults__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneOptimizationResults__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneOptimizationResults__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneOptimizationResults__Array__Class>(type_info(), "Moon.ArtOptimization", "SceneOptimizationResults[]");
        }
        inline app::SceneOptimizationResults__Array* create() {
            return il2cpp::create_object<app::SceneOptimizationResults__Array>(get_class());
        }
    } // namespace SceneOptimizationResults__Array
} // namespace app::classes::types
