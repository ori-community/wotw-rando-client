#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneOptimizationResults__Array {
        namespace {
            inline app::SceneOptimizationResults__Array__Class* type_info_ref = nullptr;
        }
        inline app::SceneOptimizationResults__Array__Class** type_info = &type_info_ref;
        inline app::SceneOptimizationResults__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneOptimizationResults__Array__Class>(type_info, "Moon.ArtOptimization", "SceneOptimizationResults[]");
        }
        inline app::SceneOptimizationResults__Array* create() {
            return il2cpp::create_object<app::SceneOptimizationResults__Array>(get_class());
        }
    } // namespace SceneOptimizationResults__Array
} // namespace app::classes::types
