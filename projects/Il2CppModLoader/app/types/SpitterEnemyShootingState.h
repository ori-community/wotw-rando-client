#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyShootingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpitterEnemyShootingState__Class** type_info;
        inline app::SpitterEnemyShootingState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyShootingState__Class>(type_info, "", "SpitterEnemyShootingState");
        }
        inline app::SpitterEnemyShootingState* create() {
            return il2cpp::create_object<app::SpitterEnemyShootingState>(get_class());
        }
    } // namespace SpitterEnemyShootingState
} // namespace app::classes::types
