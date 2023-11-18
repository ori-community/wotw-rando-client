#pragma once
#include <Modloader/app/structs/EnemyArenaController_EnemyWave__Array.h>
#include <Modloader/app/structs/EnemyArenaController_EnemyWave__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaController_EnemyWave__Array {
        inline app::EnemyArenaController_EnemyWave__Array__Class** type_info() {
            static app::EnemyArenaController_EnemyWave__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemyArenaController_EnemyWave__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemyArenaController_EnemyWave__Array__Class* get_class() {
            return il2cpp::get_class<app::EnemyArenaController_EnemyWave__Array__Class>(type_info(), "", "EnemyArenaController+EnemyWave[]");
        }
        inline app::EnemyArenaController_EnemyWave__Array* create() {
            return il2cpp::create_object<app::EnemyArenaController_EnemyWave__Array>(get_class());
        }
    } // namespace EnemyArenaController_EnemyWave__Array
} // namespace app::classes::types
