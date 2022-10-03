#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeadEnemyRagdoll_EnemyPlumetSettings {
        namespace {
            app::DeadEnemyRagdoll_EnemyPlumetSettings__Class* type_info_ref = nullptr;
        }
        app::DeadEnemyRagdoll_EnemyPlumetSettings__Class** type_info = &type_info_ref;
        inline app::DeadEnemyRagdoll_EnemyPlumetSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::DeadEnemyRagdoll_EnemyPlumetSettings__Class>(type_info, "", "DeadEnemyRagdoll", "EnemyPlumetSettings");
        }
        inline app::DeadEnemyRagdoll_EnemyPlumetSettings* create() {
            return il2cpp::create_object<app::DeadEnemyRagdoll_EnemyPlumetSettings>(get_class());
        }
    } // namespace DeadEnemyRagdoll_EnemyPlumetSettings
} // namespace app::classes::types
