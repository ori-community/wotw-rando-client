#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemyEffects {
        namespace {
            app::FloatingRockTurretEnemyEffects__Class* type_info_ref = nullptr;
        }
        app::FloatingRockTurretEnemyEffects__Class** type_info = &type_info_ref;
        inline app::FloatingRockTurretEnemyEffects__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockTurretEnemyEffects__Class>(type_info, "", "FloatingRockTurretEnemyEffects");
        }
        inline app::FloatingRockTurretEnemyEffects* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemyEffects>(get_class());
        }
    } // namespace FloatingRockTurretEnemyEffects
} // namespace app::classes::types
