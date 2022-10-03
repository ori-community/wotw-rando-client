#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControlsScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ControlsScreen__Class** type_info;
        inline app::ControlsScreen__Class* get_class() {
            return il2cpp::get_class<app::ControlsScreen__Class>(type_info, "", "ControlsScreen");
        }
        inline app::ControlsScreen* create() {
            return il2cpp::create_object<app::ControlsScreen>(get_class());
        }
    } // namespace ControlsScreen
} // namespace app::classes::types
