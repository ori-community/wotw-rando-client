#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatingRockLaserEnemy_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FloatingRockLaserEnemy_States__Class** type_info;
        inline app::FloatingRockLaserEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatingRockLaserEnemy_States__Class>(type_info, "", "FloatingRockLaserEnemy", "States");
        }
        inline app::FloatingRockLaserEnemy_States* create() {
            return il2cpp::create_object<app::FloatingRockLaserEnemy_States>(get_class());
        }
    } // namespace FloatingRockLaserEnemy_States
} // namespace app::classes::types
