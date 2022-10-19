#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextMeshCylinderSettings_1 {
        namespace {
            inline app::TextMeshCylinderSettings_1__Class* type_info_ref = nullptr;
        }
        inline app::TextMeshCylinderSettings_1__Class** type_info = &type_info_ref;
        inline app::TextMeshCylinderSettings_1__Class* get_class() {
            return il2cpp::get_class<app::TextMeshCylinderSettings_1__Class>(type_info, "Moon.UI", "TextMeshCylinderSettings");
        }
        inline app::TextMeshCylinderSettings_1* create() {
            return il2cpp::create_object<app::TextMeshCylinderSettings_1>(get_class());
        }
    } // namespace TextMeshCylinderSettings_1
} // namespace app::classes::types
