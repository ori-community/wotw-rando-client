#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxControllerInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxControllerInput__Class** type_info;
        inline app::XboxControllerInput__Class* get_class() {
            return il2cpp::get_class<app::XboxControllerInput__Class>(type_info, "SmartInput", "XboxControllerInput");
        }
        inline app::XboxControllerInput* create() {
            return il2cpp::create_object<app::XboxControllerInput>(get_class());
        }
    } // namespace XboxControllerInput
} // namespace app::classes::types
