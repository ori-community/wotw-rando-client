#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneOptimizationResults {
        namespace {
            inline app::SceneOptimizationResults__Class* type_info_ref = nullptr;
        }
        inline app::SceneOptimizationResults__Class** type_info = &type_info_ref;
        inline app::SceneOptimizationResults__Class* get_class() {
            return il2cpp::get_class<app::SceneOptimizationResults__Class>(type_info, "Moon.ArtOptimization", "SceneOptimizationResults");
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
