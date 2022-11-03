#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeadBatEnemy_DeathBatEnemyAnimations {
        namespace {
            inline app::DeadBatEnemy_DeathBatEnemyAnimations__Class* type_info_ref = nullptr;
        }
        inline app::DeadBatEnemy_DeathBatEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::DeadBatEnemy_DeathBatEnemyAnimations__Class* get_class() {
            return il2cpp::get_nested_class<app::DeadBatEnemy_DeathBatEnemyAnimations__Class>(type_info, "", "DeadBatEnemy", "DeathBatEnemyAnimations");
        }
        inline app::DeadBatEnemy_DeathBatEnemyAnimations* create() {
            return il2cpp::create_object<app::DeadBatEnemy_DeathBatEnemyAnimations>(get_class());
        }
    } // namespace DeadBatEnemy_DeathBatEnemyAnimations
} // namespace app::classes::types
