#pragma once
#include <Modloader/app/structs/DeadEnemyRagdoll_RagdollAnimations.h>
#include <Modloader/app/structs/DeadEnemyRagdoll_RagdollAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeadEnemyRagdoll_RagdollAnimations {
        inline app::DeadEnemyRagdoll_RagdollAnimations__Class** type_info() {
            static app::DeadEnemyRagdoll_RagdollAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeadEnemyRagdoll_RagdollAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeadEnemyRagdoll_RagdollAnimations__Class* get_class() {
            return il2cpp::get_nested_class<app::DeadEnemyRagdoll_RagdollAnimations__Class>(type_info(), "", "DeadEnemyRagdoll", "RagdollAnimations");
        }
        inline app::DeadEnemyRagdoll_RagdollAnimations* create() {
            return il2cpp::create_object<app::DeadEnemyRagdoll_RagdollAnimations>(get_class());
        }
    } // namespace DeadEnemyRagdoll_RagdollAnimations
} // namespace app::classes::types
