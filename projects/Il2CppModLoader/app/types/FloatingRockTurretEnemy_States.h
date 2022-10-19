#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemy_States {
        inline app::FloatingRockTurretEnemy_States__Class** type_info = (app::FloatingRockTurretEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04799640));
        inline app::FloatingRockTurretEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatingRockTurretEnemy_States__Class>(type_info, "", "FloatingRockTurretEnemy", "States");
        }
        inline app::FloatingRockTurretEnemy_States* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemy_States>(get_class());
        }
    } // namespace FloatingRockTurretEnemy_States
} // namespace app::classes::types
