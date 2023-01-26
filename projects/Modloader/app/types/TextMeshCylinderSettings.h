#pragma once
#include <Modloader/app/structs/TextMeshCylinderSettings.h>
#include <Modloader/app/structs/TextMeshCylinderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextMeshCylinderSettings {
        inline app::TextMeshCylinderSettings__Class** type_info() {
            static app::TextMeshCylinderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextMeshCylinderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextMeshCylinderSettings__Class* get_class() {
            return il2cpp::get_class<app::TextMeshCylinderSettings__Class>(type_info(), "CatlikeCoding.TextBox", "TextMeshCylinderSettings");
        }
        inline app::TextMeshCylinderSettings* create() {
            return il2cpp::create_object<app::TextMeshCylinderSettings>(get_class());
        }
    } // namespace TextMeshCylinderSettings
} // namespace app::classes::types
