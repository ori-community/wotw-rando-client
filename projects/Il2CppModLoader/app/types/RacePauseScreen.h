#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RacePauseScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RacePauseScreen__Class** type_info;
        inline app::RacePauseScreen__Class* get_class() {
            return il2cpp::get_class<app::RacePauseScreen__Class>(type_info, "", "RacePauseScreen");
        }
        inline app::RacePauseScreen* create() {
            return il2cpp::create_object<app::RacePauseScreen>(get_class());
        }
    } // namespace RacePauseScreen
} // namespace app::classes::types
