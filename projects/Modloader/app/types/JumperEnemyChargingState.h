#pragma once
#include <Modloader/app/structs/JumperEnemyChargingState.h>
#include <Modloader/app/structs/JumperEnemyChargingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyChargingState {
        inline app::JumperEnemyChargingState__Class** type_info() {
            static app::JumperEnemyChargingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JumperEnemyChargingState__Class**)(modloader::win::memory::resolve_rva(0x0476C0B0));
            }
            return cache;
        }
        inline app::JumperEnemyChargingState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyChargingState__Class>(type_info(), "", "JumperEnemyChargingState");
        }
        inline app::JumperEnemyChargingState* create() {
            return il2cpp::create_object<app::JumperEnemyChargingState>(get_class());
        }
    } // namespace JumperEnemyChargingState
} // namespace app::classes::types
