#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleScreenManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TitleScreenManager__Class** type_info;
        inline app::TitleScreenManager__Class* get_class() {
            return il2cpp::get_class<app::TitleScreenManager__Class>(type_info, "", "TitleScreenManager");
        }
        inline app::TitleScreenManager* create() {
            return il2cpp::create_object<app::TitleScreenManager>(get_class());
        }
    } // namespace TitleScreenManager
} // namespace app::classes::types
