#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OriGhostRigVisuals_GhostVisualSettings {
        namespace {
            inline app::OriGhostRigVisuals_GhostVisualSettings__Class* type_info_ref = nullptr;
        }
        inline app::OriGhostRigVisuals_GhostVisualSettings__Class** type_info = &type_info_ref;
        inline app::OriGhostRigVisuals_GhostVisualSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::OriGhostRigVisuals_GhostVisualSettings__Class>(type_info, "", "OriGhostRigVisuals", "GhostVisualSettings");
        }
        inline app::OriGhostRigVisuals_GhostVisualSettings* create() {
            return il2cpp::create_object<app::OriGhostRigVisuals_GhostVisualSettings>(get_class());
        }
        inline app::OriGhostRigVisuals_GhostVisualSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::OriGhostRigVisuals_GhostVisualSettings__Array>(get_class(), size);
        }
        inline app::OriGhostRigVisuals_GhostVisualSettings__Array* create_array(const std::vector<app::OriGhostRigVisuals_GhostVisualSettings*>& items) {
            return il2cpp::array_new<app::OriGhostRigVisuals_GhostVisualSettings__Array>(get_class(), items);
        }
    } // namespace OriGhostRigVisuals_GhostVisualSettings
} // namespace app::classes::types
