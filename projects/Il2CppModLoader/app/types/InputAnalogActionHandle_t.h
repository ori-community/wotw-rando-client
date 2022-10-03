#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputAnalogActionHandle_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InputAnalogActionHandle_t__Class** type_info;
        inline app::InputAnalogActionHandle_t__Class* get_class() {
            return il2cpp::get_class<app::InputAnalogActionHandle_t__Class>(type_info, "Steamworks", "InputAnalogActionHandle_t");
        }
        inline app::InputAnalogActionHandle_t* create() {
            return il2cpp::create_object<app::InputAnalogActionHandle_t>(get_class());
        }
        inline app::InputAnalogActionHandle_t__Boxed* box(app::InputAnalogActionHandle_t value) {
            return il2cpp::box_value<app::InputAnalogActionHandle_t__Boxed>(get_class(), value);
        }
    } // namespace InputAnalogActionHandle_t
} // namespace app::classes::types
