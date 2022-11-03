#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemyAnimations {
        namespace {
            inline app::FloatingRockTurretEnemyAnimations__Class* type_info_ref = nullptr;
        }
        inline app::FloatingRockTurretEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::FloatingRockTurretEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockTurretEnemyAnimations__Class>(type_info, "", "FloatingRockTurretEnemyAnimations");
        }
        inline app::FloatingRockTurretEnemyAnimations* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemyAnimations>(get_class());
        }
    } // namespace FloatingRockTurretEnemyAnimations
} // namespace app::classes::types
