#pragma once
#include <Modloader/app/structs/FloatingRockTurretEnemy_States.h>
#include <Modloader/app/structs/FloatingRockTurretEnemy_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemy_States {
        inline app::FloatingRockTurretEnemy_States__Class** type_info() {
            static app::FloatingRockTurretEnemy_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FloatingRockTurretEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04799640));
            }
            return cache;
        }
        inline app::FloatingRockTurretEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatingRockTurretEnemy_States__Class>(type_info(), "", "FloatingRockTurretEnemy", "States");
        }
        inline app::FloatingRockTurretEnemy_States* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemy_States>(get_class());
        }
    } // namespace FloatingRockTurretEnemy_States
} // namespace app::classes::types
