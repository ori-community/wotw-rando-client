#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MenuScreenManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MenuScreenManager__Class** type_info;
        inline app::MenuScreenManager__Class* get_class() {
            return il2cpp::get_class<app::MenuScreenManager__Class>(type_info, "", "MenuScreenManager");
        }
        inline app::MenuScreenManager* create() {
            return il2cpp::create_object<app::MenuScreenManager>(get_class());
        }
    } // namespace MenuScreenManager
} // namespace app::classes::types
