#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemyEffects {
        namespace {
            inline app::FloatingRockTurretEnemyEffects__Class* type_info_ref = nullptr;
        }
        inline app::FloatingRockTurretEnemyEffects__Class** type_info = &type_info_ref;
        inline app::FloatingRockTurretEnemyEffects__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockTurretEnemyEffects__Class>(type_info, "", "FloatingRockTurretEnemyEffects");
        }
        inline app::FloatingRockTurretEnemyEffects* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemyEffects>(get_class());
        }
    } // namespace FloatingRockTurretEnemyEffects
} // namespace app::classes::types
