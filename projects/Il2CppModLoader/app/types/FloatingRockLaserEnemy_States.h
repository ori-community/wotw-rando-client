#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatingRockLaserEnemy_States {
        inline app::FloatingRockLaserEnemy_States__Class** type_info = (app::FloatingRockLaserEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04753A58));
        inline app::FloatingRockLaserEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatingRockLaserEnemy_States__Class>(type_info, "", "FloatingRockLaserEnemy", "States");
        }
        inline app::FloatingRockLaserEnemy_States* create() {
            return il2cpp::create_object<app::FloatingRockLaserEnemy_States>(get_class());
        }
    } // namespace FloatingRockLaserEnemy_States
} // namespace app::classes::types
