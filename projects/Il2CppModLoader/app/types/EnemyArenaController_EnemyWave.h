#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaController_EnemyWave {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnemyArenaController_EnemyWave__Class** type_info;
        inline app::EnemyArenaController_EnemyWave__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyArenaController_EnemyWave__Class>(type_info, "", "EnemyArenaController", "EnemyWave");
        }
        inline app::EnemyArenaController_EnemyWave* create() {
            return il2cpp::create_object<app::EnemyArenaController_EnemyWave>(get_class());
        }
        inline app::EnemyArenaController_EnemyWave__Array* create_array(int size) {
            return il2cpp::array_new<app::EnemyArenaController_EnemyWave__Array>(get_class(), size);
        }
        inline app::EnemyArenaController_EnemyWave__Array* create_array(const std::vector<app::EnemyArenaController_EnemyWave*>& items) {
            return il2cpp::array_new<app::EnemyArenaController_EnemyWave__Array>(get_class(), items);
        }
    } // namespace EnemyArenaController_EnemyWave
} // namespace app::classes::types
