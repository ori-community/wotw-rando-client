#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatingRockLaserEnemySettings {
        namespace {
            app::FloatingRockLaserEnemySettings__Class* type_info_ref = nullptr;
        }
        app::FloatingRockLaserEnemySettings__Class** type_info = &type_info_ref;
        inline app::FloatingRockLaserEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockLaserEnemySettings__Class>(type_info, "", "FloatingRockLaserEnemySettings");
        }
        inline app::FloatingRockLaserEnemySettings* create() {
            return il2cpp::create_object<app::FloatingRockLaserEnemySettings>(get_class());
        }
    } // namespace FloatingRockLaserEnemySettings
} // namespace app::classes::types
