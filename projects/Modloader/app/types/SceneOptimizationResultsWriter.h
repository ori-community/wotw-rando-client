#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneOptimizationResultsWriter__Class.h>
#include <Modloader/app/structs/SceneOptimizationResultsWriter.h>

namespace app::classes::types {
    namespace SceneOptimizationResultsWriter {
        namespace {
            inline app::SceneOptimizationResultsWriter__Class* type_info_ref = nullptr;
        }
        inline app::SceneOptimizationResultsWriter__Class** type_info = &type_info_ref;
        inline app::SceneOptimizationResultsWriter__Class* get_class() {
            return il2cpp::get_class<app::SceneOptimizationResultsWriter__Class>(type_info, "Moon.ArtOptimization", "SceneOptimizationResultsWriter");
        }
        inline app::SceneOptimizationResultsWriter* create() {
            return il2cpp::create_object<app::SceneOptimizationResultsWriter>(get_class());
        }
    } // namespace SceneOptimizationResultsWriter
} // namespace app::classes::types
