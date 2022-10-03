#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaController_WaveStatus__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnemyArenaController_WaveStatus__Enum__Class** type_info;
        inline app::EnemyArenaController_WaveStatus__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyArenaController_WaveStatus__Enum__Class>(type_info, "", "EnemyArenaController", "WaveStatus");
        }
        inline app::EnemyArenaController_WaveStatus__Enum* create() {
            return il2cpp::create_object<app::EnemyArenaController_WaveStatus__Enum>(get_class());
        }
    } // namespace EnemyArenaController_WaveStatus__Enum
} // namespace app::classes::types
