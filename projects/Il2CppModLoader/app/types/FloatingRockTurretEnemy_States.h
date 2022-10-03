#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemy_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FloatingRockTurretEnemy_States__Class** type_info;
        inline app::FloatingRockTurretEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatingRockTurretEnemy_States__Class>(type_info, "", "FloatingRockTurretEnemy", "States");
        }
        inline app::FloatingRockTurretEnemy_States* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemy_States>(get_class());
        }
    } // namespace FloatingRockTurretEnemy_States
} // namespace app::classes::types
