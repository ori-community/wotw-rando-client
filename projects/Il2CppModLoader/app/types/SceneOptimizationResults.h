#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneOptimizationResults {
        namespace {
            app::SceneOptimizationResults__Class* type_info_ref = nullptr;
        }
        app::SceneOptimizationResults__Class** type_info = &type_info_ref;
        inline app::SceneOptimizationResults__Class* get_class() {
            return il2cpp::get_class<app::SceneOptimizationResults__Class>(type_info, "Moon.ArtOptimization", "SceneOptimizationResults");
        }
        inline app::SceneOptimizationResults* create() {
            return il2cpp::create_object<app::SceneOptimizationResults>(get_class());
        }
        inline app::SceneOptimizationResults__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneOptimizationResults__Array>(get_class(), size);
        }
    } // namespace SceneOptimizationResults
} // namespace app::classes::types
