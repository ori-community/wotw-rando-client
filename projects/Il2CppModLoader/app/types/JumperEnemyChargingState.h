#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyChargingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JumperEnemyChargingState__Class** type_info;
        inline app::JumperEnemyChargingState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyChargingState__Class>(type_info, "", "JumperEnemyChargingState");
        }
        inline app::JumperEnemyChargingState* create() {
            return il2cpp::create_object<app::JumperEnemyChargingState>(get_class());
        }
    } // namespace JumperEnemyChargingState
} // namespace app::classes::types
