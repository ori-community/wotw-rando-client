#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyShootingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RockyEnemyShootingState__Class** type_info;
        inline app::RockyEnemyShootingState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyShootingState__Class>(type_info, "", "RockyEnemyShootingState");
        }
        inline app::RockyEnemyShootingState* create() {
            return il2cpp::create_object<app::RockyEnemyShootingState>(get_class());
        }
    } // namespace RockyEnemyShootingState
} // namespace app::classes::types
