#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaController_EnemyWave__Array {
        namespace {
            app::EnemyArenaController_EnemyWave__Array__Class* type_info_ref = nullptr;
        }
        app::EnemyArenaController_EnemyWave__Array__Class** type_info = &type_info_ref;
        inline app::EnemyArenaController_EnemyWave__Array__Class* get_class() {
            return il2cpp::get_class<app::EnemyArenaController_EnemyWave__Array__Class>(type_info, "", "EnemyArenaController+EnemyWave[]");
        }
        inline app::EnemyArenaController_EnemyWave__Array* create() {
            return il2cpp::create_object<app::EnemyArenaController_EnemyWave__Array>(get_class());
        }
    } // namespace EnemyArenaController_EnemyWave__Array
} // namespace app::classes::types
