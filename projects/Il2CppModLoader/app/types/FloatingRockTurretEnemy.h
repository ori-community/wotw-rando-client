#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemy {
        namespace {
            app::FloatingRockTurretEnemy__Class* type_info_ref = nullptr;
        }
        app::FloatingRockTurretEnemy__Class** type_info = &type_info_ref;
        inline app::FloatingRockTurretEnemy__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockTurretEnemy__Class>(type_info, "", "FloatingRockTurretEnemy");
        }
        inline app::FloatingRockTurretEnemy* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemy>(get_class());
        }
    } // namespace FloatingRockTurretEnemy
} // namespace app::classes::types
