#pragma once
#include <Modloader/app/structs/CrossSceneDependencyData.h>
#include <Modloader/app/structs/CrossSceneDependencyData__Array.h>
#include <Modloader/app/structs/CrossSceneDependencyData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossSceneDependencyData {
        inline app::CrossSceneDependencyData__Class** type_info() {
            static app::CrossSceneDependencyData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrossSceneDependencyData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrossSceneDependencyData__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneDependencyData__Class>(type_info(), "Moon", "CrossSceneDependencyData");
        }
        inline app::CrossSceneDependencyData* create() {
            return il2cpp::create_object<app::CrossSceneDependencyData>(get_class());
        }
        inline app::CrossSceneDependencyData__Array* create_array(int size) {
            return il2cpp::array_new<app::CrossSceneDependencyData__Array>(get_class(), size);
        }
        inline app::CrossSceneDependencyData__Array* create_array(const std::vector<app::CrossSceneDependencyData*>& items) {
            return il2cpp::array_new<app::CrossSceneDependencyData__Array>(get_class(), items);
        }
    } // namespace CrossSceneDependencyData
} // namespace app::classes::types
