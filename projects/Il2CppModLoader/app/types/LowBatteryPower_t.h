#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LowBatteryPower_t {
        namespace {
            app::LowBatteryPower_t__Class* type_info_ref = nullptr;
        }
        app::LowBatteryPower_t__Class** type_info = &type_info_ref;
        inline app::LowBatteryPower_t__Class* get_class() {
            return il2cpp::get_class<app::LowBatteryPower_t__Class>(type_info, "Steamworks", "LowBatteryPower_t");
        }
        inline app::LowBatteryPower_t* create() {
            return il2cpp::create_object<app::LowBatteryPower_t>(get_class());
        }
        inline app::LowBatteryPower_t__Boxed* box(app::LowBatteryPower_t value) {
            return il2cpp::box_value<app::LowBatteryPower_t__Boxed>(get_class(), value);
        }
    } // namespace LowBatteryPower_t
} // namespace app::classes::types
