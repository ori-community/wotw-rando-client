#pragma once
#include <Modloader/app/structs/OriGhostRigVisuals_GhostVisualSettings__Array.h>
#include <Modloader/app/structs/OriGhostRigVisuals_GhostVisualSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriGhostRigVisuals_GhostVisualSettings__Array {
        inline app::OriGhostRigVisuals_GhostVisualSettings__Array__Class** type_info() {
            static app::OriGhostRigVisuals_GhostVisualSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriGhostRigVisuals_GhostVisualSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriGhostRigVisuals_GhostVisualSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::OriGhostRigVisuals_GhostVisualSettings__Array__Class>(type_info(), "", "OriGhostRigVisuals+GhostVisualSettings[]");
        }
        inline app::OriGhostRigVisuals_GhostVisualSettings__Array* create() {
            return il2cpp::create_object<app::OriGhostRigVisuals_GhostVisualSettings__Array>(get_class());
        }
    } // namespace OriGhostRigVisuals_GhostVisualSettings__Array
} // namespace app::classes::types
