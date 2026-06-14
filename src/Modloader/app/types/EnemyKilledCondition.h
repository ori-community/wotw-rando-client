#pragma once
#include <Modloader/app/structs/EnemyKilledCondition.h>
#include <Modloader/app/structs/EnemyKilledCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyKilledCondition {
        inline app::EnemyKilledCondition__Class** type_info() {
            static app::EnemyKilledCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemyKilledCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemyKilledCondition__Class* get_class() {
            return il2cpp::get_class<app::EnemyKilledCondition__Class>(type_info(), "", "EnemyKilledCondition");
        }
        inline app::EnemyKilledCondition* create() {
            return il2cpp::create_object<app::EnemyKilledCondition>(get_class());
        }
    } // namespace EnemyKilledCondition
} // namespace app::classes::types
