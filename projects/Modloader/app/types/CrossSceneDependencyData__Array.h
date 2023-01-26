#pragma once
#include <Modloader/app/structs/CrossSceneDependencyData__Array.h>
#include <Modloader/app/structs/CrossSceneDependencyData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossSceneDependencyData__Array {
        inline app::CrossSceneDependencyData__Array__Class** type_info() {
            static app::CrossSceneDependencyData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrossSceneDependencyData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrossSceneDependencyData__Array__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneDependencyData__Array__Class>(type_info(), "Moon", "CrossSceneDependencyData[]");
        }
        inline app::CrossSceneDependencyData__Array* create() {
            return il2cpp::create_object<app::CrossSceneDependencyData__Array>(get_class());
        }
    } // namespace CrossSceneDependencyData__Array
} // namespace app::classes::types
