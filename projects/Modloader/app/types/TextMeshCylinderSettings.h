#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextMeshCylinderSettings {
        namespace {
            inline app::TextMeshCylinderSettings__Class* type_info_ref = nullptr;
        }
        inline app::TextMeshCylinderSettings__Class** type_info = &type_info_ref;
        inline app::TextMeshCylinderSettings__Class* get_class() {
            return il2cpp::get_class<app::TextMeshCylinderSettings__Class>(type_info, "CatlikeCoding.TextBox", "TextMeshCylinderSettings");
        }
        inline app::TextMeshCylinderSettings* create() {
            return il2cpp::create_object<app::TextMeshCylinderSettings>(get_class());
        }
    } // namespace TextMeshCylinderSettings
} // namespace app::classes::types
