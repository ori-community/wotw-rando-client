#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextMeshCylinderRenderer_1 {
        namespace {
            inline app::TextMeshCylinderRenderer_1__Class* type_info_ref = nullptr;
        }
        inline app::TextMeshCylinderRenderer_1__Class** type_info = &type_info_ref;
        inline app::TextMeshCylinderRenderer_1__Class* get_class() {
            return il2cpp::get_class<app::TextMeshCylinderRenderer_1__Class>(type_info, "Moon.UI", "TextMeshCylinderRenderer");
        }
        inline app::TextMeshCylinderRenderer_1* create() {
            return il2cpp::create_object<app::TextMeshCylinderRenderer_1>(get_class());
        }
    } // namespace TextMeshCylinderRenderer_1
} // namespace app::classes::types
