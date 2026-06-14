#pragma once
#include <Modloader/app/structs/ArtOptimizer_OptimizerState__Enum.h>
#include <Modloader/app/structs/ArtOptimizer_OptimizerState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtOptimizer_OptimizerState__Enum {
        inline app::ArtOptimizer_OptimizerState__Enum__Class** type_info() {
            static app::ArtOptimizer_OptimizerState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArtOptimizer_OptimizerState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArtOptimizer_OptimizerState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ArtOptimizer_OptimizerState__Enum__Class>(type_info(), "Moon.ArtOptimization", "ArtOptimizer", "OptimizerState");
        }
        inline app::ArtOptimizer_OptimizerState__Enum* create() {
            return il2cpp::create_object<app::ArtOptimizer_OptimizerState__Enum>(get_class());
        }
    } // namespace ArtOptimizer_OptimizerState__Enum
} // namespace app::classes::types
