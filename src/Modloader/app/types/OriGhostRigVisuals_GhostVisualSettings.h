#pragma once
#include <Modloader/app/structs/OriGhostRigVisuals_GhostVisualSettings.h>
#include <Modloader/app/structs/OriGhostRigVisuals_GhostVisualSettings__Array.h>
#include <Modloader/app/structs/OriGhostRigVisuals_GhostVisualSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriGhostRigVisuals_GhostVisualSettings {
        inline app::OriGhostRigVisuals_GhostVisualSettings__Class** type_info() {
            static app::OriGhostRigVisuals_GhostVisualSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriGhostRigVisuals_GhostVisualSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriGhostRigVisuals_GhostVisualSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::OriGhostRigVisuals_GhostVisualSettings__Class>(type_info(), "", "OriGhostRigVisuals", "GhostVisualSettings");
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
