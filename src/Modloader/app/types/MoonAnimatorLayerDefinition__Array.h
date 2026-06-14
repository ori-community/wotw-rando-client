#pragma once
#include <Modloader/app/structs/MoonAnimatorLayerDefinition__Array.h>
#include <Modloader/app/structs/MoonAnimatorLayerDefinition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorLayerDefinition__Array {
        inline app::MoonAnimatorLayerDefinition__Array__Class** type_info() {
            static app::MoonAnimatorLayerDefinition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimatorLayerDefinition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimatorLayerDefinition__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorLayerDefinition__Array__Class>(type_info(), "Moon", "MoonAnimatorLayerDefinition[]");
        }
        inline app::MoonAnimatorLayerDefinition__Array* create() {
            return il2cpp::create_object<app::MoonAnimatorLayerDefinition__Array>(get_class());
        }
    } // namespace MoonAnimatorLayerDefinition__Array
} // namespace app::classes::types
