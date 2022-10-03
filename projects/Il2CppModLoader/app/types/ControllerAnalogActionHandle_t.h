#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControllerAnalogActionHandle_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ControllerAnalogActionHandle_t__Class** type_info;
        inline app::ControllerAnalogActionHandle_t__Class* get_class() {
            return il2cpp::get_class<app::ControllerAnalogActionHandle_t__Class>(type_info, "Steamworks", "ControllerAnalogActionHandle_t");
        }
        inline app::ControllerAnalogActionHandle_t* create() {
            return il2cpp::create_object<app::ControllerAnalogActionHandle_t>(get_class());
        }
        inline app::ControllerAnalogActionHandle_t__Boxed* box(app::ControllerAnalogActionHandle_t value) {
            return il2cpp::box_value<app::ControllerAnalogActionHandle_t__Boxed>(get_class(), value);
        }
    } // namespace ControllerAnalogActionHandle_t
} // namespace app::classes::types
