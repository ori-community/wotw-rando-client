#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextMeshCylinderRenderer {
        namespace {
            inline app::TextMeshCylinderRenderer__Class* type_info_ref = nullptr;
        }
        inline app::TextMeshCylinderRenderer__Class** type_info = &type_info_ref;
        inline app::TextMeshCylinderRenderer__Class* get_class() {
            return il2cpp::get_class<app::TextMeshCylinderRenderer__Class>(type_info, "CatlikeCoding.TextBox", "TextMeshCylinderRenderer");
        }
        inline app::TextMeshCylinderRenderer* create() {
            return il2cpp::create_object<app::TextMeshCylinderRenderer>(get_class());
        }
    } // namespace TextMeshCylinderRenderer
} // namespace app::classes::types
