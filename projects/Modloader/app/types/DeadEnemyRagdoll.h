#pragma once
#include <Modloader/app/structs/DeadEnemyRagdoll.h>
#include <Modloader/app/structs/DeadEnemyRagdoll__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeadEnemyRagdoll {
        inline app::DeadEnemyRagdoll__Class** type_info() {
            static app::DeadEnemyRagdoll__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeadEnemyRagdoll__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeadEnemyRagdoll__Class* get_class() {
            return il2cpp::get_class<app::DeadEnemyRagdoll__Class>(type_info(), "", "DeadEnemyRagdoll");
        }
        inline app::DeadEnemyRagdoll* create() {
            return il2cpp::create_object<app::DeadEnemyRagdoll>(get_class());
        }
    } // namespace DeadEnemyRagdoll
} // namespace app::classes::types
