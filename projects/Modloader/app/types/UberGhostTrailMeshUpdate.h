#pragma once
#include <Modloader/app/structs/UberGhostTrailMeshUpdate.h>
#include <Modloader/app/structs/UberGhostTrailMeshUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberGhostTrailMeshUpdate {
        inline app::UberGhostTrailMeshUpdate__Class** type_info() {
            static app::UberGhostTrailMeshUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberGhostTrailMeshUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberGhostTrailMeshUpdate__Class* get_class() {
            return il2cpp::get_class<app::UberGhostTrailMeshUpdate__Class>(type_info(), "", "UberGhostTrailMeshUpdate");
        }
        inline app::UberGhostTrailMeshUpdate* create() {
            return il2cpp::create_object<app::UberGhostTrailMeshUpdate>(get_class());
        }
    } // namespace UberGhostTrailMeshUpdate
} // namespace app::classes::types
