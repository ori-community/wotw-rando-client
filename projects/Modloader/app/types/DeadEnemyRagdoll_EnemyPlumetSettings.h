#pragma once
#include <Modloader/app/structs/DeadEnemyRagdoll_EnemyPlumetSettings.h>
#include <Modloader/app/structs/DeadEnemyRagdoll_EnemyPlumetSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeadEnemyRagdoll_EnemyPlumetSettings {
        inline app::DeadEnemyRagdoll_EnemyPlumetSettings__Class** type_info() {
            static app::DeadEnemyRagdoll_EnemyPlumetSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeadEnemyRagdoll_EnemyPlumetSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeadEnemyRagdoll_EnemyPlumetSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::DeadEnemyRagdoll_EnemyPlumetSettings__Class>(type_info(), "", "DeadEnemyRagdoll", "EnemyPlumetSettings");
        }
        inline app::DeadEnemyRagdoll_EnemyPlumetSettings* create() {
            return il2cpp::create_object<app::DeadEnemyRagdoll_EnemyPlumetSettings>(get_class());
        }
    } // namespace DeadEnemyRagdoll_EnemyPlumetSettings
} // namespace app::classes::types
