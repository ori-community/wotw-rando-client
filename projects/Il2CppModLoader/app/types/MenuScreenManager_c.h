#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MenuScreenManager_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MenuScreenManager_c__Class** type_info;
        inline app::MenuScreenManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MenuScreenManager_c__Class>(type_info, "", "MenuScreenManager", "<>c");
        }
        inline app::MenuScreenManager_c* create() {
            return il2cpp::create_object<app::MenuScreenManager_c>(get_class());
        }
    } // namespace MenuScreenManager_c
} // namespace app::classes::types
