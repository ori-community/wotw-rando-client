#pragma once
#include <Modloader/app/structs/FoxEnemy2_FoxEnemyJumpAttackSettings.h>
#include <Modloader/app/structs/FoxEnemy2_FoxEnemyJumpAttackSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FoxEnemy2_FoxEnemyJumpAttackSettings {
        inline app::FoxEnemy2_FoxEnemyJumpAttackSettings__Class** type_info() {
            static app::FoxEnemy2_FoxEnemyJumpAttackSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FoxEnemy2_FoxEnemyJumpAttackSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FoxEnemy2_FoxEnemyJumpAttackSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::FoxEnemy2_FoxEnemyJumpAttackSettings__Class>(type_info(), "", "FoxEnemy2", "FoxEnemyJumpAttackSettings");
        }
        inline app::FoxEnemy2_FoxEnemyJumpAttackSettings* create() {
            return il2cpp::create_object<app::FoxEnemy2_FoxEnemyJumpAttackSettings>(get_class());
        }
    } // namespace FoxEnemy2_FoxEnemyJumpAttackSettings
} // namespace app::classes::types
