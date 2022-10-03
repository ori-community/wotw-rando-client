#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MainMenuState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MainMenuState__Class** type_info;
        inline app::MainMenuState__Class* get_class() {
            return il2cpp::get_class<app::MainMenuState__Class>(type_info, "", "MainMenuState");
        }
        inline app::MainMenuState* create() {
            return il2cpp::create_object<app::MainMenuState>(get_class());
        }
    } // namespace MainMenuState
} // namespace app::classes::types
