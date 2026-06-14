#pragma once
#include <Modloader/app/structs/TextMeshCylinderRenderer.h>
#include <Modloader/app/structs/TextMeshCylinderRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextMeshCylinderRenderer {
        inline app::TextMeshCylinderRenderer__Class** type_info() {
            static app::TextMeshCylinderRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextMeshCylinderRenderer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextMeshCylinderRenderer__Class* get_class() {
            return il2cpp::get_class<app::TextMeshCylinderRenderer__Class>(type_info(), "CatlikeCoding.TextBox", "TextMeshCylinderRenderer");
        }
        inline app::TextMeshCylinderRenderer* create() {
            return il2cpp::create_object<app::TextMeshCylinderRenderer>(get_class());
        }
    } // namespace TextMeshCylinderRenderer
} // namespace app::classes::types
