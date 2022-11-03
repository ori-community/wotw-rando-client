#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WormChargingState {
        namespace {
            inline app::WormChargingState__Class* type_info_ref = nullptr;
        }
        inline app::WormChargingState__Class** type_info = &type_info_ref;
        inline app::WormChargingState__Class* get_class() {
            return il2cpp::get_class<app::WormChargingState__Class>(type_info, "", "WormChargingState");
        }
        inline app::WormChargingState* create() {
            return il2cpp::create_object<app::WormChargingState>(get_class());
        }
    } // namespace WormChargingState
} // namespace app::classes::types
