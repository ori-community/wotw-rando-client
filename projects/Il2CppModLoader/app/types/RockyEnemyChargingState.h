#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyChargingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RockyEnemyChargingState__Class** type_info;
        inline app::RockyEnemyChargingState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyChargingState__Class>(type_info, "", "RockyEnemyChargingState");
        }
        inline app::RockyEnemyChargingState* create() {
            return il2cpp::create_object<app::RockyEnemyChargingState>(get_class());
        }
    } // namespace RockyEnemyChargingState
} // namespace app::classes::types
