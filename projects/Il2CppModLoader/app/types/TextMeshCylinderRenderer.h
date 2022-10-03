#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextMeshCylinderRenderer {
        namespace {
            app::TextMeshCylinderRenderer__Class* type_info_ref = nullptr;
        }
        app::TextMeshCylinderRenderer__Class** type_info = &type_info_ref;
        inline app::TextMeshCylinderRenderer__Class* get_class() {
            return il2cpp::get_class<app::TextMeshCylinderRenderer__Class>(type_info, "CatlikeCoding.TextBox", "TextMeshCylinderRenderer");
        }
        inline app::TextMeshCylinderRenderer* create() {
            return il2cpp::create_object<app::TextMeshCylinderRenderer>(get_class());
        }
    } // namespace TextMeshCylinderRenderer
} // namespace app::classes::types
