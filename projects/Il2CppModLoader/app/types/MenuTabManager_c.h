#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MenuTabManager_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MenuTabManager_c__Class** type_info;
        inline app::MenuTabManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MenuTabManager_c__Class>(type_info, "", "MenuTabManager", "<>c");
        }
        inline app::MenuTabManager_c* create() {
            return il2cpp::create_object<app::MenuTabManager_c>(get_class());
        }
    } // namespace MenuTabManager_c
} // namespace app::classes::types
