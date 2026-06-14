#pragma once
#include <Modloader/app/structs/DeadBatEnemy_DeathBatEnemyAnimations.h>
#include <Modloader/app/structs/DeadBatEnemy_DeathBatEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeadBatEnemy_DeathBatEnemyAnimations {
        inline app::DeadBatEnemy_DeathBatEnemyAnimations__Class** type_info() {
            static app::DeadBatEnemy_DeathBatEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeadBatEnemy_DeathBatEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeadBatEnemy_DeathBatEnemyAnimations__Class* get_class() {
            return il2cpp::get_nested_class<app::DeadBatEnemy_DeathBatEnemyAnimations__Class>(type_info(), "", "DeadBatEnemy", "DeathBatEnemyAnimations");
        }
        inline app::DeadBatEnemy_DeathBatEnemyAnimations* create() {
            return il2cpp::create_object<app::DeadBatEnemy_DeathBatEnemyAnimations>(get_class());
        }
    } // namespace DeadBatEnemy_DeathBatEnemyAnimations
} // namespace app::classes::types
