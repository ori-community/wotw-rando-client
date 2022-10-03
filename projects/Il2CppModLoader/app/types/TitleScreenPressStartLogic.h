#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleScreenPressStartLogic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TitleScreenPressStartLogic__Class** type_info;
        inline app::TitleScreenPressStartLogic__Class* get_class() {
            return il2cpp::get_class<app::TitleScreenPressStartLogic__Class>(type_info, "", "TitleScreenPressStartLogic");
        }
        inline app::TitleScreenPressStartLogic* create() {
            return il2cpp::create_object<app::TitleScreenPressStartLogic>(get_class());
        }
    } // namespace TitleScreenPressStartLogic
} // namespace app::classes::types
