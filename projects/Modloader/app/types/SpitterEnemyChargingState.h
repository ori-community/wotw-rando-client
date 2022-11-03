#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpitterEnemyChargingState {
        inline app::SpitterEnemyChargingState__Class** type_info = (app::SpitterEnemyChargingState__Class**)(modloader::win::memory::resolve_rva(0x0477D980));
        inline app::SpitterEnemyChargingState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyChargingState__Class>(type_info, "", "SpitterEnemyChargingState");
        }
        inline app::SpitterEnemyChargingState* create() {
            return il2cpp::create_object<app::SpitterEnemyChargingState>(get_class());
        }
    } // namespace SpitterEnemyChargingState
} // namespace app::classes::types
