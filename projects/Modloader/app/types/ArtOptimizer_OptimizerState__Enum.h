#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArtOptimizer_OptimizerState__Enum__Class.h>
#include <Modloader/app/structs/ArtOptimizer_OptimizerState__Enum.h>

namespace app::classes::types {
    namespace ArtOptimizer_OptimizerState__Enum {
        namespace {
            inline app::ArtOptimizer_OptimizerState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ArtOptimizer_OptimizerState__Enum__Class** type_info = &type_info_ref;
        inline app::ArtOptimizer_OptimizerState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ArtOptimizer_OptimizerState__Enum__Class>(type_info, "Moon.ArtOptimization", "ArtOptimizer", "OptimizerState");
        }
        inline app::ArtOptimizer_OptimizerState__Enum* create() {
            return il2cpp::create_object<app::ArtOptimizer_OptimizerState__Enum>(get_class());
        }
    } // namespace ArtOptimizer_OptimizerState__Enum
} // namespace app::classes::types
