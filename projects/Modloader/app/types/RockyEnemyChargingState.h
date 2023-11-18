#pragma once
#include <Modloader/app/structs/RockyEnemyChargingState.h>
#include <Modloader/app/structs/RockyEnemyChargingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyChargingState {
        inline app::RockyEnemyChargingState__Class** type_info() {
            static app::RockyEnemyChargingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RockyEnemyChargingState__Class**)(modloader::win::memory::resolve_rva(0x0475F1A0));
            }
            return cache;
        }
        inline app::RockyEnemyChargingState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyChargingState__Class>(type_info(), "", "RockyEnemyChargingState");
        }
        inline app::RockyEnemyChargingState* create() {
            return il2cpp::create_object<app::RockyEnemyChargingState>(get_class());
        }
    } // namespace RockyEnemyChargingState
} // namespace app::classes::types
