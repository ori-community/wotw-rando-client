#pragma once
#include <Modloader/app/structs/TextMeshCylinderRenderer_1.h>
#include <Modloader/app/structs/TextMeshCylinderRenderer_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextMeshCylinderRenderer_1 {
        inline app::TextMeshCylinderRenderer_1__Class** type_info() {
            static app::TextMeshCylinderRenderer_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextMeshCylinderRenderer_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextMeshCylinderRenderer_1__Class* get_class() {
            return il2cpp::get_class<app::TextMeshCylinderRenderer_1__Class>(type_info(), "Moon.UI", "TextMeshCylinderRenderer");
        }
        inline app::TextMeshCylinderRenderer_1* create() {
            return il2cpp::create_object<app::TextMeshCylinderRenderer_1>(get_class());
        }
    } // namespace TextMeshCylinderRenderer_1
} // namespace app::classes::types
