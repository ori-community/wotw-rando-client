#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PauseScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PauseScreen__Class** type_info;
        inline app::PauseScreen__Class* get_class() {
            return il2cpp::get_class<app::PauseScreen__Class>(type_info, "", "PauseScreen");
        }
        inline app::PauseScreen* create() {
            return il2cpp::create_object<app::PauseScreen>(get_class());
        }
    } // namespace PauseScreen
} // namespace app::classes::types
