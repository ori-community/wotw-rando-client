#pragma once
#include <Modloader/app/structs/EnemyArenaController_EnemyWave.h>
#include <Modloader/app/structs/EnemyArenaController_EnemyWave__Array.h>
#include <Modloader/app/structs/EnemyArenaController_EnemyWave__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaController_EnemyWave {
        inline app::EnemyArenaController_EnemyWave__Class** type_info() {
            static app::EnemyArenaController_EnemyWave__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnemyArenaController_EnemyWave__Class**)(modloader::win::memory::resolve_rva(0x04732F50));
            }
            return cache;
        }
        inline app::EnemyArenaController_EnemyWave__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyArenaController_EnemyWave__Class>(type_info(), "", "EnemyArenaController", "EnemyWave");
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
