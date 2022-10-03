#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriGhostRigVisuals_GhostVisualSettings {
        namespace {
            app::OriGhostRigVisuals_GhostVisualSettings__Class* type_info_ref = nullptr;
        }
        app::OriGhostRigVisuals_GhostVisualSettings__Class** type_info = &type_info_ref;
        inline app::OriGhostRigVisuals_GhostVisualSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::OriGhostRigVisuals_GhostVisualSettings__Class>(type_info, "", "OriGhostRigVisuals", "GhostVisualSettings");
        }
        inline app::OriGhostRigVisuals_GhostVisualSettings* create() {
            return il2cpp::create_object<app::OriGhostRigVisuals_GhostVisualSettings>(get_class());
        }
        inline app::OriGhostRigVisuals_GhostVisualSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::OriGhostRigVisuals_GhostVisualSettings__Array>(get_class(), size);
        }
    } // namespace OriGhostRigVisuals_GhostVisualSettings
} // namespace app::classes::types
