#pragma once
#include <Modloader/app/structs/MakeEnemyAttackPlayerAction.h>
#include <Modloader/app/structs/MakeEnemyAttackPlayerAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MakeEnemyAttackPlayerAction {
        inline app::MakeEnemyAttackPlayerAction__Class** type_info() {
            static app::MakeEnemyAttackPlayerAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MakeEnemyAttackPlayerAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MakeEnemyAttackPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::MakeEnemyAttackPlayerAction__Class>(type_info(), "", "MakeEnemyAttackPlayerAction");
        }
        inline app::MakeEnemyAttackPlayerAction* create() {
            return il2cpp::create_object<app::MakeEnemyAttackPlayerAction>(get_class());
        }
    } // namespace MakeEnemyAttackPlayerAction
} // namespace app::classes::types
