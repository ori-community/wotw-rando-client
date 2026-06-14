#pragma once
#include <Modloader/app/structs/WormChargingState.h>
#include <Modloader/app/structs/WormChargingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WormChargingState {
        inline app::WormChargingState__Class** type_info() {
            static app::WormChargingState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WormChargingState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WormChargingState__Class* get_class() {
            return il2cpp::get_class<app::WormChargingState__Class>(type_info(), "", "WormChargingState");
        }
        inline app::WormChargingState* create() {
            return il2cpp::create_object<app::WormChargingState>(get_class());
        }
    } // namespace WormChargingState
} // namespace app::classes::types
