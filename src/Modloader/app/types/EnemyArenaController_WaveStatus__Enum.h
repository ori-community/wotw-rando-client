#pragma once
#include <Modloader/app/structs/EnemyArenaController_WaveStatus__Enum.h>
#include <Modloader/app/structs/EnemyArenaController_WaveStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaController_WaveStatus__Enum {
        inline app::EnemyArenaController_WaveStatus__Enum__Class** type_info() {
            static app::EnemyArenaController_WaveStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnemyArenaController_WaveStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x04726CC0));
            }
            return cache;
        }
        inline app::EnemyArenaController_WaveStatus__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyArenaController_WaveStatus__Enum__Class>(type_info(), "", "EnemyArenaController", "WaveStatus");
        }
        inline app::EnemyArenaController_WaveStatus__Enum* create() {
            return il2cpp::create_object<app::EnemyArenaController_WaveStatus__Enum>(get_class());
        }
    } // namespace EnemyArenaController_WaveStatus__Enum
} // namespace app::classes::types
