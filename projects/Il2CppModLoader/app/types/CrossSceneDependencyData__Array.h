#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossSceneDependencyData__Array {
        namespace {
            app::CrossSceneDependencyData__Array__Class* type_info_ref = nullptr;
        }
        app::CrossSceneDependencyData__Array__Class** type_info = &type_info_ref;
        inline app::CrossSceneDependencyData__Array__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneDependencyData__Array__Class>(type_info, "Moon", "CrossSceneDependencyData[]");
        }
        inline app::CrossSceneDependencyData__Array* create() {
            return il2cpp::create_object<app::CrossSceneDependencyData__Array>(get_class());
        }
    } // namespace CrossSceneDependencyData__Array
} // namespace app::classes::types
