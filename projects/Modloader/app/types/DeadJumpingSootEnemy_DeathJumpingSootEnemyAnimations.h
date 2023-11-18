#pragma once
#include <Modloader/app/structs/DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations.h>
#include <Modloader/app/structs/DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations {
        inline app::DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Class** type_info() {
            static app::DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Class* get_class() {
            return il2cpp::get_nested_class<app::DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Class>(type_info(), "", "DeadJumpingSootEnemy", "DeathJumpingSootEnemyAnimations");
        }
        inline app::DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations* create() {
            return il2cpp::create_object<app::DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations>(get_class());
        }
    } // namespace DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations
} // namespace app::classes::types
