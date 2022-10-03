#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MenuTabManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MenuTabManager__Class** type_info;
        inline app::MenuTabManager__Class* get_class() {
            return il2cpp::get_class<app::MenuTabManager__Class>(type_info, "", "MenuTabManager");
        }
        inline app::MenuTabManager* create() {
            return il2cpp::create_object<app::MenuTabManager>(get_class());
        }
    } // namespace MenuTabManager
} // namespace app::classes::types
