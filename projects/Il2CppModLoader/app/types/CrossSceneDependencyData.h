#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossSceneDependencyData {
        namespace {
            app::CrossSceneDependencyData__Class* type_info_ref = nullptr;
        }
        app::CrossSceneDependencyData__Class** type_info = &type_info_ref;
        inline app::CrossSceneDependencyData__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneDependencyData__Class>(type_info, "Moon", "CrossSceneDependencyData");
        }
        inline app::CrossSceneDependencyData* create() {
            return il2cpp::create_object<app::CrossSceneDependencyData>(get_class());
        }
        inline app::CrossSceneDependencyData__Array* create_array(int size) {
            return il2cpp::array_new<app::CrossSceneDependencyData__Array>(get_class(), size);
        }
    } // namespace CrossSceneDependencyData
} // namespace app::classes::types
