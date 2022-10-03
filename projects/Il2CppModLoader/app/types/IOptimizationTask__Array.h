#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IOptimizationTask__Array {
        namespace {
            app::IOptimizationTask__Array__Class* type_info_ref = nullptr;
        }
        app::IOptimizationTask__Array__Class** type_info = &type_info_ref;
        inline app::IOptimizationTask__Array__Class* get_class() {
            return il2cpp::get_class<app::IOptimizationTask__Array__Class>(type_info, "Moon.ArtOptimization", "IOptimizationTask[]");
        }
        inline app::IOptimizationTask__Array* create() {
            return il2cpp::create_object<app::IOptimizationTask__Array>(get_class());
        }
    } // namespace IOptimizationTask__Array
} // namespace app::classes::types
