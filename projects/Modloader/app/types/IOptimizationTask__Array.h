#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IOptimizationTask__Array {
        namespace {
            inline app::IOptimizationTask__Array__Class* type_info_ref = nullptr;
        }
        inline app::IOptimizationTask__Array__Class** type_info = &type_info_ref;
        inline app::IOptimizationTask__Array__Class* get_class() {
            return il2cpp::get_class<app::IOptimizationTask__Array__Class>(type_info, "Moon.ArtOptimization", "IOptimizationTask[]");
        }
        inline app::IOptimizationTask__Array* create() {
            return il2cpp::create_object<app::IOptimizationTask__Array>(get_class());
        }
    } // namespace IOptimizationTask__Array
} // namespace app::classes::types
