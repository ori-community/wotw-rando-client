#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneOptimizationResultsWriter {
        namespace {
            app::SceneOptimizationResultsWriter__Class* type_info_ref = nullptr;
        }
        app::SceneOptimizationResultsWriter__Class** type_info = &type_info_ref;
        inline app::SceneOptimizationResultsWriter__Class* get_class() {
            return il2cpp::get_class<app::SceneOptimizationResultsWriter__Class>(type_info, "Moon.ArtOptimization", "SceneOptimizationResultsWriter");
        }
        inline app::SceneOptimizationResultsWriter* create() {
            return il2cpp::create_object<app::SceneOptimizationResultsWriter>(get_class());
        }
    } // namespace SceneOptimizationResultsWriter
} // namespace app::classes::types
