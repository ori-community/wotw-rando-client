#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneOptimizationResults__Array {
        namespace {
            app::SceneOptimizationResults__Array__Class* type_info_ref = nullptr;
        }
        app::SceneOptimizationResults__Array__Class** type_info = &type_info_ref;
        inline app::SceneOptimizationResults__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneOptimizationResults__Array__Class>(type_info, "Moon.ArtOptimization", "SceneOptimizationResults[]");
        }
        inline app::SceneOptimizationResults__Array* create() {
            return il2cpp::create_object<app::SceneOptimizationResults__Array>(get_class());
        }
    } // namespace SceneOptimizationResults__Array
} // namespace app::classes::types
