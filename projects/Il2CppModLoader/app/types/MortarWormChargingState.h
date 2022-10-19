#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarWormChargingState {
        inline app::MortarWormChargingState__Class** type_info = (app::MortarWormChargingState__Class**)(modloader::win::memory::resolve_rva(0x047883A8));
        inline app::MortarWormChargingState__Class* get_class() {
            return il2cpp::get_class<app::MortarWormChargingState__Class>(type_info, "", "MortarWormChargingState");
        }
        inline app::MortarWormChargingState* create() {
            return il2cpp::create_object<app::MortarWormChargingState>(get_class());
        }
    } // namespace MortarWormChargingState
} // namespace app::classes::types
