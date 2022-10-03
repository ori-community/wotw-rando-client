#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControllerInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ControllerInput__Class** type_info;
        inline app::ControllerInput__Class* get_class() {
            return il2cpp::get_class<app::ControllerInput__Class>(type_info, "Moon.UberStateVisualization", "ControllerInput");
        }
        inline app::ControllerInput* create() {
            return il2cpp::create_object<app::ControllerInput>(get_class());
        }
    } // namespace ControllerInput
} // namespace app::classes::types
