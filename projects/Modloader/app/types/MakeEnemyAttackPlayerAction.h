#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MakeEnemyAttackPlayerAction__Class.h>
#include <Modloader/app/structs/MakeEnemyAttackPlayerAction.h>

namespace app::classes::types {
    namespace MakeEnemyAttackPlayerAction {
        namespace {
            inline app::MakeEnemyAttackPlayerAction__Class* type_info_ref = nullptr;
        }
        inline app::MakeEnemyAttackPlayerAction__Class** type_info = &type_info_ref;
        inline app::MakeEnemyAttackPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::MakeEnemyAttackPlayerAction__Class>(type_info, "", "MakeEnemyAttackPlayerAction");
        }
        inline app::MakeEnemyAttackPlayerAction* create() {
            return il2cpp::create_object<app::MakeEnemyAttackPlayerAction>(get_class());
        }
    } // namespace MakeEnemyAttackPlayerAction
} // namespace app::classes::types
