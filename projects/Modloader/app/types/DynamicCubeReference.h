#pragma once
#include <Modloader/app/structs/DynamicCubeReference.h>
#include <Modloader/app/structs/DynamicCubeReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicCubeReference {
        inline app::DynamicCubeReference__Class** type_info() {
            static app::DynamicCubeReference__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicCubeReference__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicCubeReference__Class* get_class() {
            return il2cpp::get_class<app::DynamicCubeReference__Class>(type_info(), "Moon", "DynamicCubeReference");
        }
        inline app::DynamicCubeReference* create() {
            return il2cpp::create_object<app::DynamicCubeReference>(get_class());
        }
    } // namespace DynamicCubeReference
} // namespace app::classes::types
