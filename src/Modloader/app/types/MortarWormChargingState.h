#pragma once
#include <Modloader/app/structs/MortarWormChargingState.h>
#include <Modloader/app/structs/MortarWormChargingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarWormChargingState {
        inline app::MortarWormChargingState__Class** type_info() {
            static app::MortarWormChargingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MortarWormChargingState__Class**)(modloader::win::memory::resolve_rva(0x047883A8));
            }
            return cache;
        }
        inline app::MortarWormChargingState__Class* get_class() {
            return il2cpp::get_class<app::MortarWormChargingState__Class>(type_info(), "", "MortarWormChargingState");
        }
        inline app::MortarWormChargingState* create() {
            return il2cpp::create_object<app::MortarWormChargingState>(get_class());
        }
    } // namespace MortarWormChargingState
} // namespace app::classes::types
