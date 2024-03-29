#pragma once
#include <Modloader/app/structs/SceneOptimizationResultsWriter.h>
#include <Modloader/app/structs/SceneOptimizationResultsWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneOptimizationResultsWriter {
        inline app::SceneOptimizationResultsWriter__Class** type_info() {
            static app::SceneOptimizationResultsWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneOptimizationResultsWriter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneOptimizationResultsWriter__Class* get_class() {
            return il2cpp::get_class<app::SceneOptimizationResultsWriter__Class>(type_info(), "Moon.ArtOptimization", "SceneOptimizationResultsWriter");
        }
        inline app::SceneOptimizationResultsWriter* create() {
            return il2cpp::create_object<app::SceneOptimizationResultsWriter>(get_class());
        }
    } // namespace SceneOptimizationResultsWriter
} // namespace app::classes::types
