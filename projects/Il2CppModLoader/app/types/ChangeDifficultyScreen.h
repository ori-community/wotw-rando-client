#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeDifficultyScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChangeDifficultyScreen__Class** type_info;
        inline app::ChangeDifficultyScreen__Class* get_class() {
            return il2cpp::get_class<app::ChangeDifficultyScreen__Class>(type_info, "", "ChangeDifficultyScreen");
        }
        inline app::ChangeDifficultyScreen* create() {
            return il2cpp::create_object<app::ChangeDifficultyScreen>(get_class());
        }
    } // namespace ChangeDifficultyScreen
} // namespace app::classes::types
