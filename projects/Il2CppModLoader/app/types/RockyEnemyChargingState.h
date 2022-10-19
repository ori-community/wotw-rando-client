#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RockyEnemyChargingState {
        inline app::RockyEnemyChargingState__Class** type_info = (app::RockyEnemyChargingState__Class**)(modloader::win::memory::resolve_rva(0x0475F1A0));
        inline app::RockyEnemyChargingState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyChargingState__Class>(type_info, "", "RockyEnemyChargingState");
        }
        inline app::RockyEnemyChargingState* create() {
            return il2cpp::create_object<app::RockyEnemyChargingState>(get_class());
        }
    } // namespace RockyEnemyChargingState
} // namespace app::classes::types
