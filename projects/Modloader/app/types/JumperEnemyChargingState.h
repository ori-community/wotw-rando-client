#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JumperEnemyChargingState__Class.h>
#include <Modloader/app/structs/JumperEnemyChargingState.h>

namespace app::classes::types {
    namespace JumperEnemyChargingState {
        inline app::JumperEnemyChargingState__Class** type_info = (app::JumperEnemyChargingState__Class**)(modloader::win::memory::resolve_rva(0x0476C0B0));
        inline app::JumperEnemyChargingState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyChargingState__Class>(type_info, "", "JumperEnemyChargingState");
        }
        inline app::JumperEnemyChargingState* create() {
            return il2cpp::create_object<app::JumperEnemyChargingState>(get_class());
        }
    } // namespace JumperEnemyChargingState
} // namespace app::classes::types
