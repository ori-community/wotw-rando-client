#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyKilledCondition {
        namespace {
            app::EnemyKilledCondition__Class* type_info_ref = nullptr;
        }
        app::EnemyKilledCondition__Class** type_info = &type_info_ref;
        inline app::EnemyKilledCondition__Class* get_class() {
            return il2cpp::get_class<app::EnemyKilledCondition__Class>(type_info, "", "EnemyKilledCondition");
        }
        inline app::EnemyKilledCondition* create() {
            return il2cpp::create_object<app::EnemyKilledCondition>(get_class());
        }
    } // namespace EnemyKilledCondition
} // namespace app::classes::types
