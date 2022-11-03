#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrossSceneDependencyData__Array {
        namespace {
            inline app::CrossSceneDependencyData__Array__Class* type_info_ref = nullptr;
        }
        inline app::CrossSceneDependencyData__Array__Class** type_info = &type_info_ref;
        inline app::CrossSceneDependencyData__Array__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneDependencyData__Array__Class>(type_info, "Moon", "CrossSceneDependencyData[]");
        }
        inline app::CrossSceneDependencyData__Array* create() {
            return il2cpp::create_object<app::CrossSceneDependencyData__Array>(get_class());
        }
    } // namespace CrossSceneDependencyData__Array
} // namespace app::classes::types
