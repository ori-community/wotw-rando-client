#pragma once
#include <Modloader/app/structs/TextMeshCylinderSettings_1.h>
#include <Modloader/app/structs/TextMeshCylinderSettings_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextMeshCylinderSettings_1 {
        inline app::TextMeshCylinderSettings_1__Class** type_info() {
            static app::TextMeshCylinderSettings_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextMeshCylinderSettings_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextMeshCylinderSettings_1__Class* get_class() {
            return il2cpp::get_class<app::TextMeshCylinderSettings_1__Class>(type_info(), "Moon.UI", "TextMeshCylinderSettings");
        }
        inline app::TextMeshCylinderSettings_1* create() {
            return il2cpp::create_object<app::TextMeshCylinderSettings_1>(get_class());
        }
    } // namespace TextMeshCylinderSettings_1
} // namespace app::classes::types
