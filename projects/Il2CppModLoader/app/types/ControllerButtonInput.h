#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControllerButtonInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ControllerButtonInput__Class** type_info;
        inline app::ControllerButtonInput__Class* get_class() {
            return il2cpp::get_class<app::ControllerButtonInput__Class>(type_info, "SmartInput", "ControllerButtonInput");
        }
        inline app::ControllerButtonInput* create() {
            return il2cpp::create_object<app::ControllerButtonInput>(get_class());
        }
    } // namespace ControllerButtonInput
} // namespace app::classes::types
