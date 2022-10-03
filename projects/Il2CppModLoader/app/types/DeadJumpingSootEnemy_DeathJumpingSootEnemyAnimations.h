#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations {
        namespace {
            app::DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Class* type_info_ref = nullptr;
        }
        app::DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Class* get_class() {
            return il2cpp::get_nested_class<app::DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations__Class>(type_info, "", "DeadJumpingSootEnemy", "DeathJumpingSootEnemyAnimations");
        }
        inline app::DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations* create() {
            return il2cpp::create_object<app::DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations>(get_class());
        }
    } // namespace DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations
} // namespace app::classes::types
